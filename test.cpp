struct Person {

}

Person alex = new Programmer(name = "Alex Dickhans");
printf(alex.toString());
//"Hello, I am high school student and is interested in Software Development, specifically in aerospace. I've been programming since I was young and it has become a passion of mine. I have a lot of experience in robotics and embedded devices."

alex.experience();
alex.currentProjects();
alex.completedProjects();
alex.siteInfo();
delete alex();