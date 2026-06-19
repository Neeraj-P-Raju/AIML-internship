#ifndef UUID132917890070288
#define UUID132917890070288

/**
  * DecisionTreeClassifier(ccp_alpha=0.0, class_name=DecisionTreeClassifier, class_weight=None, criterion=gini, max_depth=2, max_features=None, max_leaf_nodes=None, min_impurity_decrease=0.0, min_samples_leaf=1, min_samples_split=2, min_weight_fraction_leaf=0.0, monotonic_cst=None, num_outputs=2, package_name=everywhereml.sklearn.tree, random_state=None, splitter=best, template_folder=everywhereml/sklearn/tree)
 */
class DecisionTreeClassifier {
    public:

        /**
         * Predict class from features
         */
        int predict(float *x) {
            int predictedValue = 0;
            size_t startedAt = micros();

            
                    
            
            if (x[1] < 75.0) {
                
                    
            predictedValue = 0;

                
            }
            else {
                
                    
            predictedValue = 1;

                
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




#endif