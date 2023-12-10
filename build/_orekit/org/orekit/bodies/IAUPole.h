#ifndef org_orekit_bodies_IAUPole_H
#define org_orekit_bodies_IAUPole_H

#include "java/io/Serializable.h"

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
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
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
    namespace bodies {

      class IAUPole : public ::java::io::Serializable {
       public:
        enum {
          mid_getNode_24461752d0eea1e3,
          mid_getNode_e81fa067750860a1,
          mid_getPole_24461752d0eea1e3,
          mid_getPole_e81fa067750860a1,
          mid_getPrimeMeridianAngle_bf1d7732f1acb697,
          mid_getPrimeMeridianAngle_2a5f05be83ff251d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IAUPole(jobject obj) : ::java::io::Serializable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IAUPole(const IAUPole& obj) : ::java::io::Serializable(obj) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNode(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getNode(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPole(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPole(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble getPrimeMeridianAngle(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getPrimeMeridianAngle(const ::org::orekit::time::FieldAbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(IAUPole);
      extern PyTypeObject *PY_TYPE(IAUPole);

      class t_IAUPole {
      public:
        PyObject_HEAD
        IAUPole object;
        static PyObject *wrap_Object(const IAUPole&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
