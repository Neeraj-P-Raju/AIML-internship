



/**
  * DecisionTreeClassifier(ccp_alpha=0.0, class_name=DecisionTreeClassifier, class_weight=None, criterion=gini, max_depth=2, max_features=None, max_leaf_nodes=None, min_impurity_decrease=0.0, min_samples_leaf=1, min_samples_split=2, min_weight_fraction_leaf=0.0, monotonic_cst=None, num_outputs=3, package_name=everywhereml.sklearn.tree, random_state=None, splitter=best, template_folder=everywhereml/sklearn/tree)
 */
class DecisionTreeClassifier {
    public:

        /**
         * Predict class from features
         */
        int predict(float *x) {
            int predictedValue = 0;
            size_t startedAt = micros();

            
                    
            
            if (x[2] < 2.449999988079071) {
                
                    
            predictedValue = 0;

                
            }
            else {
                
                    
            if (x[3] < 1.75) {
                
                    
            predictedValue = 1;

                
            }
            else {
                
                    
            predictedValue = 2;

                
            }

                
            }


                    

            latency = micros() - startedAt;

            return (lastPrediction = predictedValue);
        }

        
            
            /**
             * Get latency in micros
             */
            uint32_t latencyInMicros() {
                return latency;
            }

            /**
             * Get latency in millis
             */
            uint16_t latencyInMillis() {
                return latency / 1000;
            }
            

    protected:
        float latency = 0;
        int lastPrediction = 0;

        
            
            
};



DecisionTreeClassifier irisClassifier;

void setup() {
  Serial.begin(115200);
}
void loop(){
  float input[4]={5.1,3.5,1.4,0.2};
  Serial.print("Prediction:");
  int flower=irisClassifier.predict(input);
  if(flower == 0)
    Serial.println("Setosa");

else if (flower == 1)
    Serial.println("Versicolor");

else
    Serial.print("Virginica");
}
