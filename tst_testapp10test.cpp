#include <QString>
#include <QtTest>
#include "app10/wyzwalacz.h"

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
    wyzwalacz wyzwalacz;
    QCOMPARE(100, wyzwalacz.getWyzwolonaLiczba());
    //QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(TestApp10Test)

#include "tst_testapp10test.moc"
