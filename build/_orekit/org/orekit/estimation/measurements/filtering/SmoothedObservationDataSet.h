#ifndef org_orekit_estimation_measurements_filtering_SmoothedObservationDataSet_H
#define org_orekit_estimation_measurements_filtering_SmoothedObservationDataSet_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationDataSet;
          class ObservationData;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          class SmoothedObservationDataSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_74e3037a52b5523f,
              mid_getDataSet_70af854911111baf,
              mid_getSmoothedData_2c3e30d0af25da08,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SmoothedObservationDataSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SmoothedObservationDataSet(const SmoothedObservationDataSet& obj) : ::java::lang::Object(obj) {}

            SmoothedObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::files::rinex::observation::ObservationDataSet &);

            ::org::orekit::files::rinex::observation::ObservationDataSet getDataSet() const;
            ::org::orekit::files::rinex::observation::ObservationData getSmoothedData() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {
          extern PyType_Def PY_TYPE_DEF(SmoothedObservationDataSet);
          extern PyTypeObject *PY_TYPE(SmoothedObservationDataSet);

          class t_SmoothedObservationDataSet {
          public:
            PyObject_HEAD
            SmoothedObservationDataSet object;
            static PyObject *wrap_Object(const SmoothedObservationDataSet&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
