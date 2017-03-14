# SNSingleton
Define a singleton object fast by using marcos.
# How to use:
## Choose "SNSingleton.h"
- Person.h
```objc
#import <Foundation/Foundation.h>

#import "SNSingleton.h"

@interface Person : NSObjet

SNSingletonH

@end
```

- Person.m
```objc
#import "Person.h"

@interface Person ()

@end

@implementation Person

SNSingletonM

@end
```
- ViewController.m
```objc

Person * p1 = [[Person alloc]init];
Person * p2 = [Person sharedInstance];
Person * p3 = [p1 copy];

```

## Choose "SNSingletonPlus.h"
- Person.h
```objc
#import <Foundation/Foundation.h>

#import "SNSingletonPlus.h"

@interface Person : NSObject

SNSingletonH(Person)

@end

```

- Person.m
```objc
#import "Person.h"

@interface Person ()

@end

@implementation Person

SNSingletonM(Person)

@end
```
- ViewController.m
```objc

Person * p1 = [[Person alloc]init];
Person * p2 = [Person sharedPerson];
Person * p3 = [p1 copy];

```

