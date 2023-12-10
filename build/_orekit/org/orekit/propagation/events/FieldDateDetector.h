#ifndef org_orekit_propagation_events_FieldDateDetector_H
#define org_orekit_propagation_events_FieldDateDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
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
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
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
            mid_init$_e72ca4cebbe9d48d,
            mid_addEventDate_d17277e76a7ead14,
            mid_g_41a008afe53da855,
            mid_getDate_51da00d5b8a3b5df,
            mid_getDates_2afa36052df4765d,
            mid_withMinGap_62798d6be777ffc5,
            mid_create_33c3f4cc95ed1506,
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
