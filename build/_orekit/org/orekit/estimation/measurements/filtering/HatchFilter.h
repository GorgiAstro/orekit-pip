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
              mid_addToCodeHistory_17db3a65980d3441,
              mid_addToSmoothedCodeHistory_17db3a65980d3441,
              mid_getCodeHistory_d91fa6c7b6ddeaae,
              mid_getSmoothedCodeHistory_d91fa6c7b6ddeaae,
              mid_getThreshold_dff5885c2c873297,
              mid_resetFilterNext_17db3a65980d3441,
              mid_updatePreviousSmoothedCode_17db3a65980d3441,
              mid_updatePreviousSmoothingValue_17db3a65980d3441,
              mid_smoothedCode_86ffecc08a63eff0,
              mid_checkValidData_9df09399397f756e,
              mid_resetNextBoolean_0fa09c18fee449d5,
              mid_resetK_0fa09c18fee449d5,
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
