#ifndef org_orekit_propagation_events_FieldBooleanDetector_H
#define org_orekit_propagation_events_FieldBooleanDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class FieldNegateDetector;
        class FieldBooleanDetector;
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class FieldBooleanDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_andCombine_437483fdb5fbc118,
            mid_andCombine_7a2dcd43c0dcb74b,
            mid_g_ac6fccc69d1b2d9e,
            mid_getDetectors_d751c1a57012b438,
            mid_init_357211ab77703f3f,
            mid_notCombine_5e5ccefffb9fc67a,
            mid_orCombine_437483fdb5fbc118,
            mid_orCombine_7a2dcd43c0dcb74b,
            mid_create_120ce78a715a425b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldBooleanDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldBooleanDetector(const FieldBooleanDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          static FieldBooleanDetector andCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > &);
          static FieldBooleanDetector andCombine(const ::java::util::Collection &);
          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::java::util::List getDetectors() const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          static ::org::orekit::propagation::events::FieldNegateDetector notCombine(const ::org::orekit::propagation::events::FieldEventDetector &);
          static FieldBooleanDetector orCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > &);
          static FieldBooleanDetector orCombine(const ::java::util::Collection &);
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
        extern PyType_Def PY_TYPE_DEF(FieldBooleanDetector);
        extern PyTypeObject *PY_TYPE(FieldBooleanDetector);

        class t_FieldBooleanDetector {
        public:
          PyObject_HEAD
          FieldBooleanDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldBooleanDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldBooleanDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldBooleanDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
