#ifndef org_orekit_time_AbstractFieldTimeInterpolator$InterpolationData_H
#define org_orekit_time_AbstractFieldTimeInterpolator$InterpolationData_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class ImmutableFieldTimeStampedCache;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class AbstractFieldTimeInterpolator$InterpolationData : public ::java::lang::Object {
       public:
        enum {
          mid_getCachedSamples_b21cbcef82b413d5,
          mid_getField_70b4bbd3fa378d6b,
          mid_getInterpolationDate_09b0a926600dfc14,
          mid_getNeighborList_a6156df500549a58,
          mid_getOne_e6d4d3215c30992a,
          mid_getZero_e6d4d3215c30992a,
          mid_getCentralDate_7c63cdf8a96923c3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractFieldTimeInterpolator$InterpolationData(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractFieldTimeInterpolator$InterpolationData(const AbstractFieldTimeInterpolator$InterpolationData& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::utils::ImmutableFieldTimeStampedCache getCachedSamples() const;
        ::org::hipparchus::Field getField() const;
        ::org::orekit::time::FieldAbsoluteDate getInterpolationDate() const;
        ::java::util::List getNeighborList() const;
        ::org::hipparchus::CalculusFieldElement getOne() const;
        ::org::hipparchus::CalculusFieldElement getZero() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(AbstractFieldTimeInterpolator$InterpolationData);
      extern PyTypeObject *PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData);

      class t_AbstractFieldTimeInterpolator$InterpolationData {
      public:
        PyObject_HEAD
        AbstractFieldTimeInterpolator$InterpolationData object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_AbstractFieldTimeInterpolator$InterpolationData *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractFieldTimeInterpolator$InterpolationData&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractFieldTimeInterpolator$InterpolationData&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
