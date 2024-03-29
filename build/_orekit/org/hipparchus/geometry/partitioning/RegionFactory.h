#ifndef org_hipparchus_geometry_partitioning_RegionFactory_H
#define org_hipparchus_geometry_partitioning_RegionFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Region;
        class Hyperplane;
      }
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
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        class RegionFactory : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_buildConvex_efbbe39d4ef425e3,
            mid_difference_edf74652280ab0e5,
            mid_getComplement_e69fb2865ef3e15d,
            mid_intersection_edf74652280ab0e5,
            mid_union_edf74652280ab0e5,
            mid_xor_edf74652280ab0e5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RegionFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RegionFactory(const RegionFactory& obj) : ::java::lang::Object(obj) {}

          RegionFactory();

          ::org::hipparchus::geometry::partitioning::Region buildConvex(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > &) const;
          ::org::hipparchus::geometry::partitioning::Region difference(const ::org::hipparchus::geometry::partitioning::Region &, const ::org::hipparchus::geometry::partitioning::Region &) const;
          ::org::hipparchus::geometry::partitioning::Region getComplement(const ::org::hipparchus::geometry::partitioning::Region &) const;
          ::org::hipparchus::geometry::partitioning::Region intersection(const ::org::hipparchus::geometry::partitioning::Region &, const ::org::hipparchus::geometry::partitioning::Region &) const;
          ::org::hipparchus::geometry::partitioning::Region union$(const ::org::hipparchus::geometry::partitioning::Region &, const ::org::hipparchus::geometry::partitioning::Region &) const;
          ::org::hipparchus::geometry::partitioning::Region xor$(const ::org::hipparchus::geometry::partitioning::Region &, const ::org::hipparchus::geometry::partitioning::Region &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        extern PyType_Def PY_TYPE_DEF(RegionFactory);
        extern PyTypeObject *PY_TYPE(RegionFactory);

        class t_RegionFactory {
        public:
          PyObject_HEAD
          RegionFactory object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RegionFactory *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RegionFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RegionFactory&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
