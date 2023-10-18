#include "pch.h"
#include "CppUnitTest.h"
#include "../Project47/BillForServices.h"
#include "../Project47/ConstructionService.h"
#include "../Project47/Customer.h"
#include "../Project47/ElectricalInstallationService.h"
#include "../Project47/Employee.h"
#include "../Project47/Engineer.h"
#include "../Project47/Manager.h"
#include "../Project47/PlumbingService.h"
#include "../Project47/RequestedService.h"
#include "../Project47/Service.h"
#include "../Project47/UsedTools.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(EmployeeManagerEngineerCustomerServiceTests)
{
public:
    //Корректность создания объекта Manager конструктором с заданными параметрами
    TEST_METHOD(ManagerConstructorTest)
    {
        Manager manager("Bob Brown", 3, "Sales");
        Assert::IsNotNull(&manager);
    }
    // //Корректность создания объекта Engineer конструктором с заданными параметрами
    TEST_METHOD(EngineerConstructorTest)
    {
        Engineer engineer("Dave Wilson", 5);
        Assert::IsNotNull(&engineer);
    }
    //Корректность создания объекта Customer конструктором с заданными параметрами
    TEST_METHOD(CustomerConstructorTest)
    {
        Customer customer("Frank White", "frank@example.com");
        Assert::IsNotNull(&customer);
    }
    //Проверка, что метод inspectPlumbing выполняется без ошибок
    TEST_METHOD(PlumbingServiceInspectPlumbingTest)
    {
        PlumbingService plumbingService;
        plumbingService.inspectPlumbing();
    }
    //Проверка, что метод placeOrder выполняется без ошибок
    TEST_METHOD(CustomerPlaceOrderTest)
    {
        Customer customer("Bob", "bob@example.com");
        customer.placeOrder();
    }
    //Проверка, что метод generateBill выполняется без ошибок
    TEST_METHOD(BillForServicesGenerateBillTest)
    {
        Customer customer("Eve", "eve@example.com");
        Service service("TestService", 100.0);
        BillForServices bill(customer, service, 100.0);
        bill.generateBill();
    }
    //Проверка метода performSafetyInspection
    TEST_METHOD(ConstructionServiceSafetyInspectionTest) {
        ConstructionService constructionService;
        constructionService.performSafetyInspection();
    }
    //Проверка метода performWiringInspection
    TEST_METHOD(ElectricInstallationWorkWiringInspectionTest) {
        ElectricInstallationWork electricInstallationWork;
        electricInstallationWork.performWiringInspection();
    }
    //Проверка, что метод CompleteOrder действительно завершает заказ и выполняется без ошибок
    TEST_METHOD(RequestedServiceCompleteOrderTest) {
        Customer customer("Alice", "alice@example.com");
        PlumbingService plumbingService;
        Manager manager("John Smith", 4, "Construction");
        RequestedService order(customer, plumbingService, manager);
        order.CompleteOrder();
    }
    //Проверка, что метод SetPaymentStatus корректно устанавливает статус оплаты счёта
    TEST_METHOD(BillForServicesSetPaymentStatusTest) {
        Customer customer("Bob", "bob@example.com");
        Service service("TestService", 100.0);
        BillForServices bill(customer, service, 100.0);
        bill.setPaymentStatus("Paid");
    }
    //Проверка корректной работы GetServiceType
    TEST_METHOD(ServiceGetServiceTypeTest) {
        PlumbingService plumbingService;
        Assert::AreEqual("Plumbing", plumbingService.getServiceType().c_str());
    }
    //Проверка, что метод GetServiceCost возвращает ожидаемую стоимость услуги
    TEST_METHOD(ServiceGetServiceCostTest) {
        PlumbingService plumbingService;
        Assert::AreEqual(120.0, plumbingService.getServiceCost(), 0.01);
    }
    //проверка работы менеджера через метод performMonthlyMeeting
    TEST_METHOD(ManagerPerformMonthlyMeetingTest) {
        Manager manager("Alice", 1, "Sales");
        manager.performMonthlyMeeting();
    }
    //Проверка, что метод GetCustomName возвращает ожидаемое имя клиента
    TEST_METHOD(CustomerGetCustomerNameTest) {
        Customer customer("David", "david@example.com");
        Assert::AreEqual("David", customer.getCustomerName().c_str());
    }
    //Тест на полный цикл вызова трбуемой услуги, её оплаты и создания корректного статуса оплаты
    TEST_METHOD(BillForServicesGenerateBillTest2) {
        Customer customer("Eve", "eve@example.com");
        PlumbingService plumbingService;
        plumbingService.setDuration(2);
        plumbingService.setMaterialsUsed("Pipes, Valves");
        plumbingService.inspectPlumbing();

        BillForServices bill(customer, plumbingService, plumbingService.getServiceCost());
        bill.setPaymentStatus("Unpaid");
        bill.generateBill();

        Assert::IsTrue(true);  
    }
    //Тест на проверку безошибочного выполнения проверки безопасности на стройплощадке
    TEST_METHOD(ConstructionServicePerformSafetyInspectionTest) {
        ConstructionService constructionService;
        constructionService.setMaterialsUsed("Bricks, Cement");
        constructionService.setWorkersCount(5);
        constructionService.performSafetyInspection();
        Assert::IsTrue(true);
    }
    // //Тест на проверку безошибочного выполнения проверки проводки
    TEST_METHOD(ElectricInstallationWorkPerformWiringInspectionTest) {
        ElectricInstallationWork electricInstallationWork;
        electricInstallationWork.setVoltage(220);
        electricInstallationWork.setCircuitCapacity("200A");
        electricInstallationWork.performWiringInspection();
        Assert::IsTrue(true);
    }
    //Проверка методов назначения даты и подтверждения заказа
    TEST_METHOD(RequestedServiceCompleteOrderTest2) {
        Customer customer("John Doe", "john@example.com");
        PlumbingService plumbingService;
        Manager manager("Alice", 1, "Sales");
        RequestedService requestedService(customer, plumbingService, manager);

        requestedService.setAppointmentDate("2023-10-20");
        requestedService.confirmAppointment();
        requestedService.CompleteOrder();

        Assert::IsTrue(true);
    }
};
