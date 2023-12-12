#ifndef org_orekit_utils_FieldTrackingCoordinates_H
#define org_orekit_utils_FieldTrackingCoordinates_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class FieldTrackingCoordinates : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0f27b0249abd6c51,
          mid_getAzimuth_613c8f46c659f636,
          mid_getElevation_613c8f46c659f636,
          mid_getRange_613c8f46c659f636,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldTrackingCoordinates(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldTrackingCoordinates(const FieldTrackingCoordinates& obj) : ::java::lang::Object(obj) {}

        FieldTrackingCoordinates(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

        ::org::hipparchus::CalculusFieldElement getAzimuth() const;
        ::org::hipparchus::CalculusFieldElement getElevation() const;
        ::org::hipparchus::CalculusFieldElement getRange() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FieldTrackingCoordinates);
      extern PyTypeObject *PY_TYPE(FieldTrackingCoordinates);

      class t_FieldTrackingCoordinates {
      public:
        PyObject_HEAD
        FieldTrackingCoordinates object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldTrackingCoordinates *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldTrackingCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldTrackingCoordinates&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
