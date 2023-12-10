#ifndef org_orekit_bodies_FieldGeodeticPoint_H
#define org_orekit_bodies_FieldGeodeticPoint_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
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
          mid_init$_82fa7e789a6ae1f6,
          mid_equals_65c7d273e80d497a,
          mid_getAltitude_eba8e72a22c984ac,
          mid_getEast_716f50c86ffc8da7,
          mid_getLatitude_eba8e72a22c984ac,
          mid_getLongitude_eba8e72a22c984ac,
          mid_getNadir_716f50c86ffc8da7,
          mid_getNorth_716f50c86ffc8da7,
          mid_getSouth_716f50c86ffc8da7,
          mid_getWest_716f50c86ffc8da7,
          mid_getZenith_716f50c86ffc8da7,
          mid_hashCode_570ce0828f81a2c1,
          mid_toString_11b109bd155ca898,
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
