#ifndef org_orekit_bodies_FieldGeodeticPoint_H
#define org_orekit_bodies_FieldGeodeticPoint_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class FieldGeodeticPoint : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0f27b0249abd6c51,
          mid_equals_221e8e85cb385209,
          mid_getAltitude_613c8f46c659f636,
          mid_getEast_2d64addf4c3391d9,
          mid_getLatitude_613c8f46c659f636,
          mid_getLongitude_613c8f46c659f636,
          mid_getNadir_2d64addf4c3391d9,
          mid_getNorth_2d64addf4c3391d9,
          mid_getSouth_2d64addf4c3391d9,
          mid_getWest_2d64addf4c3391d9,
          mid_getZenith_2d64addf4c3391d9,
          mid_hashCode_412668abc8d889e9,
          mid_toString_3cffd47377eca18a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldGeodeticPoint(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldGeodeticPoint(const FieldGeodeticPoint& obj) : ::java::lang::Object(obj) {}

        FieldGeodeticPoint(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

        jboolean equals(const ::java::lang::Object &) const;
        ::org::hipparchus::CalculusFieldElement getAltitude() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getEast() const;
        ::org::hipparchus::CalculusFieldElement getLatitude() const;
        ::org::hipparchus::CalculusFieldElement getLongitude() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getNadir() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getNorth() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getSouth() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getWest() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getZenith() const;
        jint hashCode() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(FieldGeodeticPoint);
      extern PyTypeObject *PY_TYPE(FieldGeodeticPoint);

      class t_FieldGeodeticPoint {
      public:
        PyObject_HEAD
        FieldGeodeticPoint object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldGeodeticPoint *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldGeodeticPoint&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldGeodeticPoint&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
