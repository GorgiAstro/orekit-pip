#ifndef org_orekit_propagation_events_LongitudeCrossingDetector_H
#define org_orekit_propagation_events_LongitudeCrossingDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class LongitudeCrossingDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace bodies {
      class OneAxisEllipsoid;
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

        class LongitudeCrossingDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_cee3325573481ef4,
            mid_init$_732c94d692efbcdf,
            mid_g_1bbf81d80c47ecdd,
            mid_getBody_0c55bd1adf955c4c,
            mid_getLongitude_557b8123390d8d0c,
            mid_init_0472264ad6f40bc2,
            mid_create_08e20d34148f61f0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongitudeCrossingDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongitudeCrossingDetector(const LongitudeCrossingDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          LongitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);
          LongitudeCrossingDetector(jdouble, jdouble, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::bodies::OneAxisEllipsoid getBody() const;
          jdouble getLongitude() const;
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
        extern PyType_Def PY_TYPE_DEF(LongitudeCrossingDetector);
        extern PyTypeObject *PY_TYPE(LongitudeCrossingDetector);

        class t_LongitudeCrossingDetector {
        public:
          PyObject_HEAD
          LongitudeCrossingDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_LongitudeCrossingDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const LongitudeCrossingDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const LongitudeCrossingDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
