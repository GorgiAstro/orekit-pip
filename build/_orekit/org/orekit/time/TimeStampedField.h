#ifndef org_orekit_time_TimeStampedField_H
#define org_orekit_time_TimeStampedField_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class FieldTimeStamped;
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
    namespace time {

      class TimeStampedField : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7f1905037abc4455,
          mid_init$_bd45115a05f012cf,
          mid_getDate_fa23a4301b9c83e7,
          mid_getValue_81520b552cb3fa26,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedField(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedField(const TimeStampedField& obj) : ::java::lang::Object(obj) {}

        TimeStampedField(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::time::AbsoluteDate &);
        TimeStampedField(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::time::FieldAbsoluteDate &);

        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        ::org::hipparchus::CalculusFieldElement getValue() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeStampedField);
      extern PyTypeObject *PY_TYPE(TimeStampedField);

      class t_TimeStampedField {
      public:
        PyObject_HEAD
        TimeStampedField object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeStampedField *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedField&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedField&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
