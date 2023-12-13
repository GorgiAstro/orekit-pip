#ifndef org_orekit_estimation_measurements_filtering_HatchFilter_H
#define org_orekit_estimation_measurements_filtering_HatchFilter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class ArrayList;
  }
  namespace lang {
    class Class;
    class Double;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          class HatchFilter : public ::java::lang::Object {
           public:
            enum {
              mid_addToCodeHistory_8ba9fe7a847cecad,
              mid_addToSmoothedCodeHistory_8ba9fe7a847cecad,
              mid_getCodeHistory_664cae6eaa0e211a,
              mid_getSmoothedCodeHistory_664cae6eaa0e211a,
              mid_getThreshold_b74f83833fdad017,
              mid_resetFilterNext_8ba9fe7a847cecad,
              mid_updatePreviousSmoothedCode_8ba9fe7a847cecad,
              mid_updatePreviousSmoothingValue_8ba9fe7a847cecad,
              mid_resetNextBoolean_a1fa5dae97ea5ed2,
              mid_resetK_a1fa5dae97ea5ed2,
              mid_smoothedCode_99e3200dafc19573,
              mid_checkValidData_2a725fb08324ea4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HatchFilter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HatchFilter(const HatchFilter& obj) : ::java::lang::Object(obj) {}

            void addToCodeHistory(jdouble) const;
            void addToSmoothedCodeHistory(jdouble) const;
            ::java::util::ArrayList getCodeHistory() const;
            ::java::util::ArrayList getSmoothedCodeHistory() const;
            jdouble getThreshold() const;
            void resetFilterNext(jdouble) const;
            void updatePreviousSmoothedCode(jdouble) const;
            void updatePreviousSmoothingValue(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(HatchFilter);
          extern PyTypeObject *PY_TYPE(HatchFilter);

          class t_HatchFilter {
          public:
            PyObject_HEAD
            HatchFilter object;
            static PyObject *wrap_Object(const HatchFilter&);
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
