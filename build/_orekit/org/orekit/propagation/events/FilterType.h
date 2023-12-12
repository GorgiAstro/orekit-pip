#ifndef org_orekit_propagation_events_FilterType_H
#define org_orekit_propagation_events_FilterType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FilterType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class FilterType : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_54efb81c8ba11c72,
            mid_values_baa78cce6c71babc,
            mid_selectTransformer_fb54d70361639837,
            mid_getTriggeredIncreasing_89b302893bdbe1f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterType(const FilterType& obj) : ::java::lang::Enum(obj) {}

          static FilterType *TRIGGER_ONLY_DECREASING_EVENTS;
          static FilterType *TRIGGER_ONLY_INCREASING_EVENTS;

          static FilterType valueOf(const ::java::lang::String &);
          static JArray< FilterType > values();
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
        extern PyType_Def PY_TYPE_DEF(FilterType);
        extern PyTypeObject *PY_TYPE(FilterType);

        class t_FilterType {
        public:
          PyObject_HEAD
          FilterType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FilterType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FilterType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FilterType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
