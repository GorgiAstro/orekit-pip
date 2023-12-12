#ifndef org_orekit_estimation_measurements_modifiers_PhaseCentersOffsetComputer_H
#define org_orekit_estimation_measurements_modifiers_PhaseCentersOffsetComputer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        class FrequencyPattern;
      }
    }
    namespace frames {
      class StaticTransform;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class PhaseCentersOffsetComputer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_59cfeb08e5a13ccd,
              mid_offset_998e18f6a9251793,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhaseCentersOffsetComputer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhaseCentersOffsetComputer(const PhaseCentersOffsetComputer& obj) : ::java::lang::Object(obj) {}

            PhaseCentersOffsetComputer(const ::org::orekit::gnss::antenna::FrequencyPattern &, const ::org::orekit::gnss::antenna::FrequencyPattern &);

            jdouble offset(const ::org::orekit::frames::StaticTransform &, const ::org::orekit::frames::StaticTransform &) const;
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
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(PhaseCentersOffsetComputer);
          extern PyTypeObject *PY_TYPE(PhaseCentersOffsetComputer);

          class t_PhaseCentersOffsetComputer {
          public:
            PyObject_HEAD
            PhaseCentersOffsetComputer object;
            static PyObject *wrap_Object(const PhaseCentersOffsetComputer&);
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
