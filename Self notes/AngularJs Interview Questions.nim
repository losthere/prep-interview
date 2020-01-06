urlconnection --
throws/throws--
encryption/decryption--
multipart--
angularjs

A representation of an uploaded file received in a multipart request.
The file contents are either stored in memory or temporarily on disk. In either case, the user is responsible for copying file contents to a session-level or persistent store as and if desired. The temporary storage will be cleared at the end of request processing.

We can throw either checked or uncheked exception in java by throw keyword. The throw keyword is mainly used to throw custom exception. 

Callback function
https://codeburst.io/javascript-what-the-heck-is-a-callback-aba4da2deced

https://stackoverflow.com/questions/14908133/what-is-the-difference-between-vs-and-in-angularjs
https://stackoverflow.com/questions/20018507/angular-js-what-is-the-need-of-the-directive-s-link-function-when-we-already-ha
https://www.tutorialspoint.com/apache_kafka/apache_kafka_introduction.htm

content type-bhej rhe jo
data type-aa rha jo

http://tutorials.jenkov.com/angularjs/timeout-interval.html

angular.forEach(viewAppointmentRecords, function(obj, idx) {
					obj.index = idx;
					$scope.dataModel.chartId.push(viewAppointmentRecords[idx]["chartId"]);
				});

"------------------------------------------------------------------------------------------------------------------------------------------------"
https://www.youtube.com/watch?v=bjFqSyddCeA&index=12&list=PLvZkOAgBYrsS_ugyamsNpCgLSmtIXZGiz --awesome for directives
https://www.ng-newsletter.com/posts/directives.html
https://www.ng-newsletter.com/25-days-of-angular/day-1
https://www.codementor.io/collections/learn-angularjs-online-bwban7j0d
directives helps us create custom DOM elements (or attributes) and attach behaviors to them.

setTimeOut(a JS func) and $timeout(AngularJs func) are same except $timeout calls $apply internally
Interview Basic Questions
---------------------------

1)Define AngularJs-
OpenSource JS framework used to make SPA(single page applcation)
2)Advantages of using angularjs -
----no need to write repetitive low level DOM manipulation codeburst
----seperating DOM manipulation from app logic,hence code becomes modular and easy to test
----supports 2 way binding 	
3)Angular is compatible with all browsers
4)Define Scope
JS object that joins controller with views.Controllers sets properties on them and view binds them
5)What is scope hierarchy
Each AngularJS application has only one root scope. Child controllers, however, create a scope for each view. When the new scopes are created, they are added to their parent root scope as child scopes. This creates a hierarchical structure when they are attached. 
6)ng-if Is Better Than ng-show?
The ng-show directive toggles the CSS display property on a particular element, while the ng-if directive actually removes the element from DOM and re-creates it if needed
7)One way binding vs 2 way binding
---- 1-way - the scope variable in the html is set to the first value that its model is assigned to.
-----2-way - the scope variable changes its value every time its model binds to a different value. 
8)$watch() vs $digest() vs $apply()
http://tutorials.jenkov.com/angularjs/watch-digest-apply.html --awesome(basics)
https://www.sitepoint.com/understanding-angulars-apply-digest/ --superawesome(advance)
9)What is digest cycle?
During every digest cycle, all new scope model values are compared against the previous values. This is called dirty checking. If change is detected, watches set on the new model are fired and another digest cycle executes. This goes on until all models are stable. 
https://www.sitepoint.com/understanding-angulars-apply-digest/
How can we decrease digest cycle time ?
---Use ng-if instead of ng-show
---Remove unnecessary watchers
11)Explain compile and link phase?
https://www.codeproject.com/Articles/891718/%2FArticles%2F891718%2FAngularJS-Interview-Questions-and-Answers
12)Which are the common ways of communication between modules of your application, using core AngularJS functionality?
---By assigning models on $rootScope
---Create service(thoda code)/factory(thoda jada code)/providers(bht sara code)(create custom service in angularjs by kudvent & https://www.youtube.com/watch?v=oUXku28ex-M)
---Use events like broadcast/emit functions
---Directly between controllers using $parent, $$childHead, $$nextSibling
13)Service vs Factory vs Provider?
service and factory internally uses provider.
https://www.youtube.com/watch?v=oUXku28ex-M
14)What is dependency injection and how does it work in Angular?How does DI benefit in Angular?
Process where we inject dependent object rather than consumer creating the object.
https://www.codeproject.com/Articles/891718/%2FArticles%2F891718%2FAngularJS-Interview-Questions-and-Answers.
see example in notes copy.
15)How is SPA implemented in AngularJS?
Using routes
16)What is a Factory in Angular?What is the difference between Factory and Service?
https://www.codeproject.com/Articles/891718/%2FArticles%2F891718%2FAngularJS-Interview-Questions-and-Answers
17)How are validations implemented in Angular?
https://www.codeproject.com/Articles/891718/%2FArticles%2F891718%2FAngularJS-Interview-Questions-and-Answers
http://tutorials.jenkov.com/angularjs/forms.html ----superrrrrr

Mockito.eq(GcmPnpOutreachStatus.class)

