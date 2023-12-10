#ifndef org_hipparchus_geometry_spherical_oned_Arc_H
#define org_hipparchus_geometry_spherical_oned_Arc_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace geometry {
      namespace partitioning {
        class Region$Location;
      }
      namespace spherical {
        namespace oned {
          class S1Point;
        }
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
      namespace spherical {
        namespace oned {

          class Arc : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2c56b6dd4d4b1dec,
              mid_checkPoint_b9b1c43283079b9b,
              mid_getBarycenter_dff5885c2c873297,
              mid_getInf_dff5885c2c873297,
              mid_getOffset_999b5f6d06de13e8,
              mid_getOffset_dcbc7ce2902fa136,
              mid_getSize_dff5885c2c873297,
              mid_getSup_dff5885c2c873297,
              mid_getTolerance_dff5885c2c873297,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Arc(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Arc(const Arc& obj) : ::java::lang::Object(obj) {}

            Arc(jdouble, jdouble, jdouble);

            ::org::hipparchus::geometry::partitioning::Region$Location checkPoint(jdouble) const;
            jdouble getBarycenter() const;
            jdouble getInf() const;
            jdouble getOffset(const ::org::hipparchus::geometry::spherical::oned::S1Point &) const;
            jdouble getOffset(jdouble) const;
            jdouble getSize() const;
            jdouble getSup() const;
            jdouble getTolerance() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(Arc);
          extern PyTypeObject *PY_TYPE(Arc);

          class t_Arc {
          public:
            PyObject_HEAD
            Arc object;
            static PyObject *wrap_Object(const Arc&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
