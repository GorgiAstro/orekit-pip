#ifndef org_orekit_frames_Frame_H
#define org_orekit_frames_Frame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
      class FieldStaticTransform;
      class StaticTransform;
      class TransformProvider;
      class FieldTransform;
      class Transform;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class Frame : public ::java::lang::Object {
       public:
        enum {
          mid_init$_4d900b4c52a404d9,
          mid_init$_7a37becabe54df7d,
          mid_init$_3b080937682107f9,
          mid_init$_a79dd5c32ebf7fea,
          mid_getAncestor_8357b90e78910c88,
          mid_getDepth_f2f64475e4580546,
          mid_getFrozenFrame_5f0fa436726d35c8,
          mid_getName_0090f7797e403f43,
          mid_getParent_c8fe21bcdac65bf6,
          mid_getRoot_c8fe21bcdac65bf6,
          mid_getStaticTransformTo_45c7482c9fa9b39a,
          mid_getStaticTransformTo_b08047c3dc3b3990,
          mid_getTransformProvider_9b4010550f8e9669,
          mid_getTransformTo_77d7d77f32eef8df,
          mid_getTransformTo_bbda212ac61abf9a,
          mid_isChildOf_624313f3a90c38c1,
          mid_isPseudoInertial_e470b6d9e0d979db,
          mid_toString_0090f7797e403f43,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Frame(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Frame(const Frame& obj) : ::java::lang::Object(obj) {}

        Frame(const Frame &, const ::org::orekit::frames::Transform &, const ::java::lang::String &);
        Frame(const Frame &, const ::org::orekit::frames::TransformProvider &, const ::java::lang::String &);
        Frame(const Frame &, const ::org::orekit::frames::Transform &, const ::java::lang::String &, jboolean);
        Frame(const Frame &, const ::org::orekit::frames::TransformProvider &, const ::java::lang::String &, jboolean);

        Frame getAncestor(jint) const;
        jint getDepth() const;
        Frame getFrozenFrame(const Frame &, const ::org::orekit::time::AbsoluteDate &, const ::java::lang::String &) const;
        ::java::lang::String getName() const;
        Frame getParent() const;
        static Frame getRoot();
        ::org::orekit::frames::StaticTransform getStaticTransformTo(const Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldStaticTransform getStaticTransformTo(const Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::frames::TransformProvider getTransformProvider() const;
        ::org::orekit::frames::Transform getTransformTo(const Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldTransform getTransformTo(const Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        jboolean isChildOf(const Frame &) const;
        jboolean isPseudoInertial() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(Frame);
      extern PyTypeObject *PY_TYPE(Frame);

      class t_Frame {
      public:
        PyObject_HEAD
        Frame object;
        static PyObject *wrap_Object(const Frame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
