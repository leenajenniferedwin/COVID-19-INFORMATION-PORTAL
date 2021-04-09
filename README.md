# COVID-19-INFORMATION-PORTAL
THE MAIN OBJECTIVE OF THIS PROJECT IS TO PROVIDE INFORMATION  RELATED TO THE COVID-19 FOR VARIOUS STATES OF SOUTH INDIA AND ALSO THE SOP GUIDELINES(STANDARD OPERATING PROCEDURES)AND THE EMERGENCY CONTACT DETAILS LIKE (FOOD HELPLINE AND MEDICAL HELPLINE PROVIDED BY THE GOVT.OF KARNATAKA) SO THAT THE CITIZENS CAN  TAKE PROPER MEASURES.BECAUSE WE ALL  HAVE HEARD THIS SAYING    ”PRECAUTION IS BETTER THAN CARE”
2.1 COVID 19 INFORMATION PORTAL :-
Covid-19 Information portal - The update section allows you to stay up to date regarding the number of cases, both locally and nationally. The accurate numbers can help you assess your risk further. Additionally, the availability of official updates prevents rumours and misinformation from spreading.
It uses annotations to humanise data, like “Be safe” for the number of cases, “Be calm” for recovered patients and “Stay informed” for the number of deaths.
Our COVID-19 information portal is updated continuously from the sources around the world and is helping healthcare workers, scientists, epidemiologists and policymakers aggregate and synthesize incident data on a global basis.
We are getting better data faster, and more accurately.There are numerous data sets in aggregation that are providing us both broader and deeper views of our population health, healthcare utilization, and our mobility and lifestyle patterns.This information is critical as we assess the potential incidence and behavior of a condition.


2.2 WORKING OF THE PROJECT
In this project, we have tried to cover all oop concepts studied this in semester. 
a)The program starts with the declaration of a base class known as “states” and this class contains  pure virtual functions hence this class is also known as abstract class ,and these pure virtual functions are redefined in the other inherited classes namely as class “karnataka” , “Andhra pradesh”, “tamil nadu” and “kerala”.
b)The inherited classes have functions which read from the files which display covid related data of that state. The data like “number of active cases”,”number of positive cases”, “number of recovered” , “number of deceased cases” are stored in the “.txt” files which are being called in the program using file handling concepts. These files can be later modified as per the updated data. All these functions are executed when they are called in the main function. 
c)These virtual functions  of the derived class are called by the base class pointer .Along with this ,sop(Standard Operating Procedure) guidelines and emergency helpline details  will be displayed 
d)All this is contained inside a while loop so that the user can get as much as much information as they want. Later there is also an exit option , to terminate the program.
