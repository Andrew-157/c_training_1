## Const Qualifier in C

*What is Qualifier in C:*
    Type qualifiers are keywords that can be used to change a data type's behavior in the C programming language. These qualifiers can be used to describe a variable or pointer's constancy, volatility, restrictions, and others.

The qualifier const can be applied to the declaration of any variable to specify that its value will not be changed (which depends upon where const variables are stored, [we may change the value of the const variable by using a pointer](https://www.google.com/search?q=how+to+change+value+of+constant+variable+using+pointer+in+c&oq=how+to+change+value+of+constant+variable+using+pointer+&gs_lcrp=EgZjaHJvbWUqBwgBECEYoAEyBggAEEUYOTIHCAEQIRigATIHCAIQIRifBdIBCjEyNjczajBqMTWoAgiwAgE&sourceid=chrome&ie=UTF-8)). The result is implementation-defined if an attempt is made to change a const.

Using the const qualifier in C is a good practice when we want to ensure that some values should remain constant and should not be accidentally modified.

In C programming, the const qualifier can be used in different contexts to provide various behaviors. Here are some different use cases of the const qualifier in C:

## !Take a closer look at this topic, when you understand pointers