#ifndef org_orekit_propagation_events_FieldDateDetector_H
#define org_orekit_propagation_events_FieldDateDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class FieldDateDetector;
      }
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class FieldDateDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_b88ac7839b633105,
            mid_addEventDate_421e631f14d32a8c,
            mid_g_ac6fccc69d1b2d9e,
            mid_getDate_1fea28374011eef5,
            mid_getDates_d751c1a57012b438,
            mid_withMinGap_7fe4870c72836f1c,
            mid_create_b840c2e201ca014e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldDateDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldDateDetector(const FieldDateDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          static jdouble DEFAULT_MAX_CHECK;
          static jdouble DEFAULT_MIN_GAP;
          static jdouble DEFAULT_THRESHOLD;

          FieldDateDetector(const ::org::hipparchus::Field &, const JArray< ::org::orekit::time::FieldTimeStamped > &);

          void addEventDate(const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::time::FieldAbsoluteDate getDate() const;
          ::java::util::List getDates() const;
          FieldDateDetector withMinGap(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldDateDetector);
        extern PyTypeObject *PY_TYPE(FieldDateDetector);

        class t_FieldDateDetector {
        public:
          PyObject_HEAD
          FieldDateDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldDateDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldDateDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldDateDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
