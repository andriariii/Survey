//
//  SurveyForm.h
//  Survey
//
//  Created by Wess Cope on 10/15/12.
//  Copyright (c) 2012 Wess Cope. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SurveyFormModel;
@interface SurveyForm : NSObject
@property (readonly, nonatomic) NSArray *fields;
@property (assign, nonatomic) SurveyFormModel *model;
@property (readonly, nonatomic) NSDictionary *fieldErrors;
@property (readonly, nonatomic) BOOL isValid;

+ (SurveyForm *)formWithSurveyModelName:(NSString *)modelName;
+ (SurveyForm *)formWithSurveyModelClass:(Class)modelClass;
+ (SurveyForm *)formWithSurveyModel:(SurveyFormModel *)modelInstance;

- (id)valueForField:(NSString *)fieldName;
@end
