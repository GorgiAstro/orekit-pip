#ifndef org_orekit_forces_Panel_H
#define org_orekit_forces_Panel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
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
    namespace forces {

      class Panel : public ::java::lang::Object {
       public:
        enum {
          mid_getAbsorption_456d9a2f64d6b28d,
          mid_getArea_456d9a2f64d6b28d,
          mid_getDrag_456d9a2f64d6b28d,
          mid_getLiftRatio_456d9a2f64d6b28d,
          mid_getNormal_665eae343e14b9ea,
          mid_getNormal_78226ca7935182ea,
          mid_getReflection_456d9a2f64d6b28d,
          mid_isDoubleSided_e470b6d9e0d979db,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Panel(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Panel(const Panel& obj) : ::java::lang::Object(obj) {}

        jdouble getAbsorption() const;
        jdouble getArea() const;
        jdouble getDrag() const;
        jdouble getLiftRatio() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getNormal(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNormal(const ::org::orekit::propagation::SpacecraftState &) const;
        jdouble getReflection() const;
        jboolean isDoubleSided() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      extern PyType_Def PY_TYPE_DEF(Panel);
      extern PyTypeObject *PY_TYPE(Panel);

      class t_Panel {
      public:
        PyObject_HEAD
        Panel object;
        static PyObject *wrap_Object(const Panel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
