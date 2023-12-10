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
              mid_addToCodeHistory_77e0f9a1f260e2e5,
              mid_addToSmoothedCodeHistory_77e0f9a1f260e2e5,
              mid_getCodeHistory_5e75cfe55d40f4c7,
              mid_getSmoothedCodeHistory_5e75cfe55d40f4c7,
              mid_getThreshold_456d9a2f64d6b28d,
              mid_resetFilterNext_77e0f9a1f260e2e5,
              mid_updatePreviousSmoothedCode_77e0f9a1f260e2e5,
              mid_updatePreviousSmoothingValue_77e0f9a1f260e2e5,
              mid_resetNextBoolean_7ae3461a92a43152,
              mid_smoothedCode_824133ce4aec3505,
              mid_resetK_7ae3461a92a43152,
              mid_checkValidData_a7623f4e7fdb704f,
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
