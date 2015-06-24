#include <QString>
#include <QtTest>

class TestApp10Test : public QObject
{
    Q_OBJECT

public:
    TestApp10Test();

private Q_SLOTS:
    void testCase1();
};

TestApp10Test::TestApp10Test()
{
}

void TestApp10Test::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(TestApp10Test)

#include "tst_testapp10test.moc"
