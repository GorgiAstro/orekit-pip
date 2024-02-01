#ifndef org_hipparchus_geometry_euclidean_threed_SubLine_H
#define org_hipparchus_geometry_euclidean_threed_SubLine_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
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
          class Segment;
          class SubLine;
        }
        namespace oned {
          class IntervalsSet;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          class SubLine : public ::java::lang::Object {
           public:
            enum {
              mid_init$_05438a698e1a2771,
              mid_init$_289dc4768a0ca25a,
              mid_init$_dcbb005903c9a2a8,
              mid_getSegments_d751c1a57012b438,
              mid_intersection_fa7ef246a25efb04,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubLine(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubLine(const SubLine& obj) : ::java::lang::Object(obj) {}

            SubLine(const ::org::hipparchus::geometry::euclidean::threed::Segment &);
            SubLine(const ::org::hipparchus::geometry::euclidean::threed::Line &, const ::org::hipparchus::geometry::euclidean::oned::IntervalsSet &);
            SubLine(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);

            ::java::util::List getSegments() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D intersection(const SubLine &, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(SubLine);
          extern PyTypeObject *PY_TYPE(SubLine);

          class t_SubLine {
          public:
            PyObject_HEAD
            SubLine object;
            static PyObject *wrap_Object(const SubLine&);
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
