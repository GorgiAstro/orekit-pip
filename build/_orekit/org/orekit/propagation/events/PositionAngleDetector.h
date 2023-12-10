#ifndef org_orekit_propagation_events_PositionAngleDetector_H
#define org_orekit_propagation_events_PositionAngleDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class PositionAngleDetector;
      }
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace time {
      class AbsoluteDate;
    }
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

        class PositionAngleDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_bae8e8bcb1f20009,
            mid_init$_6e4c284847e31171,
            mid_g_66a2f071e6ed0c06,
            mid_getAngle_456d9a2f64d6b28d,
            mid_getOrbitType_63ea5cd020bf7bf1,
            mid_getPositionAngleType_2571e8fe1cede425,
            mid_init_3d13474d79f5e7bc,
            mid_create_6e6735a86409adbb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PositionAngleDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PositionAngleDetector(const PositionAngleDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          PositionAngleDetector(const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, jdouble);
          PositionAngleDetector(jdouble, jdouble, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          jdouble getAngle() const;
          ::org::orekit::orbits::OrbitType getOrbitType() const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(PositionAngleDetector);
        extern PyTypeObject *PY_TYPE(PositionAngleDetector);

        class t_PositionAngleDetector {
        public:
          PyObject_HEAD
          PositionAngleDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PositionAngleDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PositionAngleDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PositionAngleDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
