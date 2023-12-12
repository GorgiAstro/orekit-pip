#ifndef org_hipparchus_geometry_euclidean_threed_Segment_H
#define org_hipparchus_geometry_euclidean_threed_Segment_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Line;
          class Vector3D;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          class Segment : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3f2bfdea7068fab2,
              mid_getEnd_f88961cca75a2c0a,
              mid_getLine_50dd992767fffc25,
              mid_getStart_f88961cca75a2c0a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Segment(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Segment(const Segment& obj) : ::java::lang::Object(obj) {}

            Segment(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Line &);

            ::org::hipparchus::geometry::euclidean::threed::Vector3D getEnd() const;
            ::org::hipparchus::geometry::euclidean::threed::Line getLine() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getStart() const;
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
      namespace euclidean {
        namespace threed {
          extern PyType_Def PY_TYPE_DEF(Segment);
          extern PyTypeObject *PY_TYPE(Segment);

          class t_Segment {
          public:
            PyObject_HEAD
            Segment object;
            static PyObject *wrap_Object(const Segment&);
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
