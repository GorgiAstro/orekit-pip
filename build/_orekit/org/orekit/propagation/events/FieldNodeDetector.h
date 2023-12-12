#ifndef org_orekit_propagation_events_FieldNodeDetector_H
#define org_orekit_propagation_events_FieldNodeDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class FieldOrbit;
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

        class FieldNodeDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_bf08ea5b43df40f6,
            mid_init$_ee41e0076fce6e1a,
            mid_g_de1c2d709eb2829c,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_create_305ce3ce554bf816,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldNodeDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldNodeDetector(const FieldNodeDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldNodeDetector(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::frames::Frame &);
          FieldNodeDetector(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::frames::Frame &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::frames::Frame getFrame() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldNodeDetector);
        extern PyTypeObject *PY_TYPE(FieldNodeDetector);

        class t_FieldNodeDetector {
        public:
          PyObject_HEAD
          FieldNodeDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldNodeDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldNodeDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldNodeDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
