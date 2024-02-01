#ifndef org_orekit_propagation_events_FieldApsideDetector_H
#define org_orekit_propagation_events_FieldApsideDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class FieldOrbit;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
    namespace propagation {
      namespace events {

        class FieldApsideDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_3e61171636c74f2c,
            mid_init$_0e14beb451bcdf4c,
            mid_g_ac6fccc69d1b2d9e,
            mid_create_7aac3d144944871f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldApsideDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldApsideDetector(const FieldApsideDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldApsideDetector(const ::org::orekit::orbits::FieldOrbit &);
          FieldApsideDetector(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::FieldOrbit &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(FieldApsideDetector);
        extern PyTypeObject *PY_TYPE(FieldApsideDetector);

        class t_FieldApsideDetector {
        public:
          PyObject_HEAD
          FieldApsideDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldApsideDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldApsideDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldApsideDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
