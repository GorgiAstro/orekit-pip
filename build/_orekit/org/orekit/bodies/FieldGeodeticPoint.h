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
          mid_init$_5b191078c5a85105,
          mid_equals_229c87223f486349,
          mid_getAltitude_e6d4d3215c30992a,
          mid_getEast_5791f80683b5227e,
          mid_getLatitude_e6d4d3215c30992a,
          mid_getLongitude_e6d4d3215c30992a,
          mid_getNadir_5791f80683b5227e,
          mid_getNorth_5791f80683b5227e,
          mid_getSouth_5791f80683b5227e,
          mid_getWest_5791f80683b5227e,
          mid_getZenith_5791f80683b5227e,
          mid_hashCode_f2f64475e4580546,
          mid_toString_0090f7797e403f43,
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
