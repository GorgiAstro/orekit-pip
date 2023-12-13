#ifndef org_orekit_propagation_events_PositionAngleDetector_H
#define org_orekit_propagation_events_PositionAngleDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace propagation {
      namespace events {
        class PositionAngleDetector;
      }
      class SpacecraftState;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
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
            mid_init$_f96679fdbae2950c,
            mid_init$_039d5d9b85a5394c,
            mid_g_a17ea857ce74d258,
            mid_getAngle_b74f83833fdad017,
            mid_getOrbitType_c7d4737d7afca612,
            mid_getPositionAngleType_c25055891f180348,
            mid_init_2d7f9a496c7e9781,
            mid_create_d5f4e7b1c95d3001,
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
