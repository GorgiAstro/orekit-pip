#ifndef org_orekit_forces_maneuvers_jacobians_Duration_H
#define org_orekit_forces_maneuvers_jacobians_Duration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class AdditionalStateProvider;
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          class Duration : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ee9345b4af8c40df,
              mid_getAdditionalState_f227e5f48720b798,
              mid_getName_1c1fa1e935d6cdcf,
              mid_yields_97df9017614a1945,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Duration(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Duration(const Duration& obj) : ::java::lang::Object(obj) {}

            Duration(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

            JArray< jdouble > getAdditionalState(const ::org::orekit::propagation::SpacecraftState &) const;
            ::java::lang::String getName() const;
            jboolean yields(const ::org::orekit::propagation::SpacecraftState &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {
          extern PyType_Def PY_TYPE_DEF(Duration);
          extern PyTypeObject *PY_TYPE(Duration);

          class t_Duration {
          public:
            PyObject_HEAD
            Duration object;
            static PyObject *wrap_Object(const Duration&);
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
