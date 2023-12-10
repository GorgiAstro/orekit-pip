#ifndef org_orekit_utils_OccultationEngine$FieldOccultationAngles_H
#define org_orekit_utils_OccultationEngine$FieldOccultationAngles_H

#include "java/lang/Object.h"

namespace org {
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
    namespace utils {

      class OccultationEngine$FieldOccultationAngles : public ::java::lang::Object {
       public:
        enum {
          mid_getLimbRadius_eba8e72a22c984ac,
          mid_getOccultedApparentRadius_eba8e72a22c984ac,
          mid_getSeparation_eba8e72a22c984ac,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OccultationEngine$FieldOccultationAngles(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OccultationEngine$FieldOccultationAngles(const OccultationEngine$FieldOccultationAngles& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::CalculusFieldElement getLimbRadius() const;
        ::org::hipparchus::CalculusFieldElement getOccultedApparentRadius() const;
        ::org::hipparchus::CalculusFieldElement getSeparation() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(OccultationEngine$FieldOccultationAngles);
      extern PyTypeObject *PY_TYPE(OccultationEngine$FieldOccultationAngles);

      class t_OccultationEngine$FieldOccultationAngles {
      public:
        PyObject_HEAD
        OccultationEngine$FieldOccultationAngles object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_OccultationEngine$FieldOccultationAngles *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const OccultationEngine$FieldOccultationAngles&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const OccultationEngine$FieldOccultationAngles&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
