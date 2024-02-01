#ifndef org_orekit_forces_maneuvers_jacobians_MedianDate_H
#define org_orekit_forces_maneuvers_jacobians_MedianDate_H

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

          class MedianDate : public ::java::lang::Object {
           public:
            enum {
              mid_init$_56b987237c71cdbb,
              mid_getAdditionalState_e8a4ac02afc72623,
              mid_getName_d2c8eb4129821f0e,
              mid_yields_34f098c1d43e614c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MedianDate(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MedianDate(const MedianDate& obj) : ::java::lang::Object(obj) {}

            MedianDate(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

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
          extern PyType_Def PY_TYPE_DEF(MedianDate);
          extern PyTypeObject *PY_TYPE(MedianDate);

          class t_MedianDate {
          public:
            PyObject_HEAD
            MedianDate object;
            static PyObject *wrap_Object(const MedianDate&);
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
