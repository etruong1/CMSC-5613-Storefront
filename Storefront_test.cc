#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>
#include <ctime>
#include "Order.h"
#include "Product.h"
#include "Color.h"

class MockOrder : public IOrder {
    public:
        MOCK_METHOD(float, calcSubtotal, (), (override));
};

class MockColor : public IColor {
    public:
        MOCK_METHOD(int, calcColorQuantity, (), (override));
};

// Test 1
TEST(ProductTest, CalcTotalPrice) {
    Product product{"00001",
                    "Product1",
                    50.0,
                    0.50,
                    100,
                    4.5,
                    "Desc"};
    
    // Expect a price of $25.0 with a base price of $50.0 and sale percent of 50%
    EXPECT_EQ(product.calcTotalPrice(), 25.0);
}

// Test 2 (WITH STUBS)
TEST(OrderTest, CalcOrderShipping) {
    MockOrder orderMock;
    Order order{"00001",
                    std::time(0),
                    0.0,
                    "Shipping",
                    "Cash on Delivery",
                    "Not Delivered",
                    &orderMock};
    
    // calcSubtotal() stub that returns a subtotal of $55.0
    ON_CALL(orderMock, calcSubtotal()).WillByDefault(::testing::Return(55.0));
    
    // Expect a shipping cost of $7.0
    EXPECT_EQ(order.calcShippingCost(), 7.0);
}

TEST(OrderTest, CalcOrderNoShipping) {
    MockOrder orderMock;
    Order order{"00001",
                std::time(0),
                0.0,
                "Shipping",
                "Cash on Delivery",
                "Not Delivered",
                &orderMock};

    // calcSubtotal() stub that returns a subtotal of $110.0
    ON_CALL(orderMock, calcSubtotal()).WillByDefault(::testing::Return(110.0));
    
    // Expect a shipping cost of $0.0
    EXPECT_EQ(order.calcShippingCost(), 0.0);
}

// Test 3 (WITH MOCKS)
TEST(ProductTest, RemoveColorQty) {
    MockColor colorMock;
    Product product{"00001",
                    "Product1",
                    50.0,
                    0.50,
                    100,
                    4.5,
                    "Desc"};
    
    // Mock that expects calcColorQuantity() to be called once for product quantity > 0
    EXPECT_CALL(colorMock, calcColorQuantity())
        .Times(1);

    product.removeColorQty(&colorMock);
}

TEST(ProductTest, NoRemoveColorQty) {
    MockColor colorMock;
    Product product{"00001",
                    "Product1",
                    50.0,
                    0.50,
                    0,
                    4.5,
                    "Desc"};
    
    // Mock that expects calcColorQuantity() to not be called for product quantity = 0
    EXPECT_CALL(colorMock, calcColorQuantity())
        .Times(0);

    product.removeColorQty(&colorMock);
}