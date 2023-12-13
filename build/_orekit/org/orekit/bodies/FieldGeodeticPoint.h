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
          mid_init$_baa1ed35ace5d036,
          mid_equals_460c5e2d9d51c6cc,
          mid_getAltitude_81520b552cb3fa26,
          mid_getEast_ff5ac73a7b43eddd,
          mid_getLatitude_81520b552cb3fa26,
          mid_getLongitude_81520b552cb3fa26,
          mid_getNadir_ff5ac73a7b43eddd,
          mid_getNorth_ff5ac73a7b43eddd,
          mid_getSouth_ff5ac73a7b43eddd,
          mid_getWest_ff5ac73a7b43eddd,
          mid_getZenith_ff5ac73a7b43eddd,
          mid_hashCode_55546ef6a647f39b,
          mid_toString_1c1fa1e935d6cdcf,
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
