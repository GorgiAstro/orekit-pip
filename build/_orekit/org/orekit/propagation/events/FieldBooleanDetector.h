#ifndef org_orekit_propagation_events_FieldBooleanDetector_H
#define org_orekit_propagation_events_FieldBooleanDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldBooleanDetector;
        class FieldNegateDetector;
        class FieldEventDetector;
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
            mid_andCombine_f1bf7ad4c2560c97,
            mid_andCombine_e841a6ad3abae38f,
            mid_g_41a008afe53da855,
            mid_getDetectors_2afa36052df4765d,
            mid_init_8e8de2be1664674a,
            mid_notCombine_bd2e3c52711c8637,
            mid_orCombine_f1bf7ad4c2560c97,
            mid_orCombine_e841a6ad3abae38f,
            mid_create_705c558177873e23,
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
