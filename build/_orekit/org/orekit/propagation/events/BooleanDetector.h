#ifndef org_orekit_propagation_events_BooleanDetector_H
#define org_orekit_propagation_events_BooleanDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class BooleanDetector;
        class NegateDetector;
        class EventDetector;
      }
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class BooleanDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_andCombine_8d4639f238877c49,
            mid_andCombine_c4345c4de3909bcd,
            mid_g_b443ba1cc794b916,
            mid_getDetectors_d751c1a57012b438,
            mid_init_14deaae988292d42,
            mid_notCombine_d2eee7bb38ccad44,
            mid_orCombine_8d4639f238877c49,
            mid_orCombine_c4345c4de3909bcd,
            mid_create_7dc99b9ec8add83a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanDetector(const BooleanDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          static BooleanDetector andCombine(const JArray< ::org::orekit::propagation::events::EventDetector > &);
          static BooleanDetector andCombine(const ::java::util::Collection &);
          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::java::util::List getDetectors() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
          static ::org::orekit::propagation::events::NegateDetector notCombine(const ::org::orekit::propagation::events::EventDetector &);
          static BooleanDetector orCombine(const JArray< ::org::orekit::propagation::events::EventDetector > &);
          static BooleanDetector orCombine(const ::java::util::Collection &);
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
        extern PyType_Def PY_TYPE_DEF(BooleanDetector);
        extern PyTypeObject *PY_TYPE(BooleanDetector);

        class t_BooleanDetector {
        public:
          PyObject_HEAD
          BooleanDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BooleanDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BooleanDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BooleanDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
