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
              mid_addToCodeHistory_10f281d777284cea,
              mid_addToSmoothedCodeHistory_10f281d777284cea,
              mid_getCodeHistory_897d94db124f72e1,
              mid_getSmoothedCodeHistory_897d94db124f72e1,
              mid_getThreshold_557b8123390d8d0c,
              mid_resetFilterNext_10f281d777284cea,
              mid_updatePreviousSmoothedCode_10f281d777284cea,
              mid_updatePreviousSmoothingValue_10f281d777284cea,
              mid_resetNextBoolean_0640e6acf969ed28,
              mid_resetK_0640e6acf969ed28,
              mid_smoothedCode_2268d18be49a6087,
              mid_checkValidData_ef17307f2586a186,
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
