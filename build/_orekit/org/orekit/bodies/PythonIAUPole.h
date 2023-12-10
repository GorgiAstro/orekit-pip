#ifndef org_orekit_bodies_PythonIAUPole_H
#define org_orekit_bodies_PythonIAUPole_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace bodies {
      class IAUPole;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class PythonIAUPole : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getNode_24461752d0eea1e3,
          mid_getNode_e81fa067750860a1,
          mid_getPole_24461752d0eea1e3,
          mid_getPole_e81fa067750860a1,
          mid_getPrimeMeridianAngle_bf1d7732f1acb697,
          mid_getPrimeMeridianAngle_2a5f05be83ff251d,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonIAUPole(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonIAUPole(const PythonIAUPole& obj) : ::java::lang::Object(obj) {}

        PythonIAUPole();

        void finalize() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNode(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getNode(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPole(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPole(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble getPrimeMeridianAngle(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getPrimeMeridianAngle(const ::org::orekit::time::FieldAbsoluteDate &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(PythonIAUPole);
      extern PyTypeObject *PY_TYPE(PythonIAUPole);

      class t_PythonIAUPole {
      public:
        PyObject_HEAD
        PythonIAUPole object;
        static PyObject *wrap_Object(const PythonIAUPole&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
