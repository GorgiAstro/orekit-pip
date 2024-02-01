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
              mid_addToCodeHistory_1ad26e8c8c0cd65b,
              mid_addToSmoothedCodeHistory_1ad26e8c8c0cd65b,
              mid_getCodeHistory_4aaa6fa02985280c,
              mid_getSmoothedCodeHistory_4aaa6fa02985280c,
              mid_getThreshold_9981f74b2d109da6,
              mid_resetFilterNext_1ad26e8c8c0cd65b,
              mid_updatePreviousSmoothedCode_1ad26e8c8c0cd65b,
              mid_updatePreviousSmoothingValue_1ad26e8c8c0cd65b,
              mid_resetNextBoolean_ff7cb6c242604316,
              mid_smoothedCode_82f92590f4247da1,
              mid_resetK_ff7cb6c242604316,
              mid_checkValidData_5f5ef38887023464,
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
