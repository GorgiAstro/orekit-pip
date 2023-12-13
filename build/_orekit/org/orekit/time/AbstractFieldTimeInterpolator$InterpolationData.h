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
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace utils {
      class ImmutableFieldTimeStampedCache;
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
    namespace time {

      class AbstractFieldTimeInterpolator$InterpolationData : public ::java::lang::Object {
       public:
        enum {
          mid_getCachedSamples_dadd4156df1ed960,
          mid_getField_04d1f63e17d5c5d4,
          mid_getInterpolationDate_fa23a4301b9c83e7,
          mid_getNeighborList_e62d3bb06d56d7e3,
          mid_getOne_81520b552cb3fa26,
          mid_getZero_81520b552cb3fa26,
          mid_getCentralDate_5b6d0b7fbadac432,
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
