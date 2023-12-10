#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Line::class$ = NULL;
          jmethodID *Line::mids$ = NULL;
          bool Line::live$ = false;

          jclass Line::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Line");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_972c17f71377e474] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_init$_519764c857b46f0a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;DD)V");
              mids$[mid_contains_2796df13348f6f80] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Z");
              mids$[mid_copySelf_1c3be7522a7ffc91] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_distance_09691e2da2b6004b] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_emptyHyperplane_937b475ef9f107f8] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/twod/SubLine;");
              mids$[mid_getAngle_456d9a2f64d6b28d] = env->getMethodID(cls, "getAngle", "()D");
              mids$[mid_getOffset_efd5f05d00fd4f00] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)D");
              mids$[mid_getOffset_726dc963fac3505e] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_05fa5f52db18503d] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getOriginOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getOriginOffset", "()D");
              mids$[mid_getPointAt_0f3b95dff8774a91] = env->getMethodID(cls, "getPointAt", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getReverse_1c3be7522a7ffc91] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_getTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getTransform_a90005a75aaa0bcf] = env->getStaticMethodID(cls, "getTransform", "(DDDDDD)Lorg/hipparchus/geometry/partitioning/Transform;");
              mids$[mid_intersection_0e9560caa0fdd5e9] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_isParallelTo_1b8ccd52fcb1cbc4] = env->getMethodID(cls, "isParallelTo", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)Z");
              mids$[mid_project_ac445dfe898b403a] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_cd3b295331fbee3c] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_reset_933dc8802e45bcb8] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_revertSelf_7ae3461a92a43152] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_b99f508aafd89c77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_setAngle_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAngle", "(D)V");
              mids$[mid_setOriginOffset_77e0f9a1f260e2e5] = env->getMethodID(cls, "setOriginOffset", "(D)V");
              mids$[mid_toSpace_b3a52e5d1fbea985] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSpace_6698e195f6e5dfff] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSubSpace_f56ff726ce04194f] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toSubSpace_32bf1487354a978b] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_translateToPoint_6b877e75654b72f2] = env->getMethodID(cls, "translateToPoint", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_wholeHyperplane_937b475ef9f107f8] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/twod/SubLine;");
              mids$[mid_wholeSpace_e03b0f65e838cccf] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/twod/PolygonsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Line::Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_972c17f71377e474, a0.this$, a1.this$, a2)) {}

          Line::Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_519764c857b46f0a, a0.this$, a1, a2)) {}

          jboolean Line::contains(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_2796df13348f6f80], a0.this$);
          }

          Line Line::copySelf() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_copySelf_1c3be7522a7ffc91]));
          }

          jdouble Line::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_09691e2da2b6004b], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::SubLine Line::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::SubLine(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_937b475ef9f107f8]));
          }

          jdouble Line::getAngle() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAngle_456d9a2f64d6b28d]);
          }

          jdouble Line::getOffset(const Line & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_efd5f05d00fd4f00], a0.this$);
          }

          jdouble Line::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_726dc963fac3505e], a0.this$);
          }

          jdouble Line::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_05fa5f52db18503d], a0.this$);
          }

          jdouble Line::getOriginOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOriginOffset_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::getPointAt(const ::org::hipparchus::geometry::euclidean::oned::Vector1D & a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getPointAt_0f3b95dff8774a91], a0.this$, a1));
          }

          Line Line::getReverse() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_getReverse_1c3be7522a7ffc91]));
          }

          jdouble Line::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::partitioning::Transform Line::getTransform(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::partitioning::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_a90005a75aaa0bcf], a0, a1, a2, a3, a4, a5));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::intersection(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_intersection_0e9560caa0fdd5e9], a0.this$));
          }

          jboolean Line::isParallelTo(const Line & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isParallelTo_1b8ccd52fcb1cbc4], a0.this$);
          }

          ::org::hipparchus::geometry::Point Line::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ac445dfe898b403a], a0.this$));
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_cd3b295331fbee3c], a0.this$, a1.this$);
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_933dc8802e45bcb8], a0.this$, a1);
          }

          void Line::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_7ae3461a92a43152]);
          }

          jboolean Line::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_b99f508aafd89c77], a0.this$);
          }

          void Line::setAngle(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAngle_77e0f9a1f260e2e5], a0);
          }

          void Line::setOriginOffset(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOriginOffset_77e0f9a1f260e2e5], a0);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSpace_b3a52e5d1fbea985], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSpace_6698e195f6e5dfff], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_f56ff726ce04194f], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_32bf1487354a978b], a0.this$));
          }

          void Line::translateToPoint(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_translateToPoint_6b877e75654b72f2], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::SubLine Line::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::SubLine(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_937b475ef9f107f8]));
          }

          ::org::hipparchus::geometry::euclidean::twod::PolygonsSet Line::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::PolygonsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_e03b0f65e838cccf]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Line_contains(t_Line *self, PyObject *arg);
          static PyObject *t_Line_copySelf(t_Line *self);
          static PyObject *t_Line_distance(t_Line *self, PyObject *arg);
          static PyObject *t_Line_emptyHyperplane(t_Line *self);
          static PyObject *t_Line_getAngle(t_Line *self);
          static PyObject *t_Line_getOffset(t_Line *self, PyObject *args);
          static PyObject *t_Line_getOriginOffset(t_Line *self);
          static PyObject *t_Line_getPointAt(t_Line *self, PyObject *args);
          static PyObject *t_Line_getReverse(t_Line *self);
          static PyObject *t_Line_getTolerance(t_Line *self);
          static PyObject *t_Line_getTransform(PyTypeObject *type, PyObject *args);
          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg);
          static PyObject *t_Line_isParallelTo(t_Line *self, PyObject *arg);
          static PyObject *t_Line_project(t_Line *self, PyObject *arg);
          static PyObject *t_Line_reset(t_Line *self, PyObject *args);
          static PyObject *t_Line_revertSelf(t_Line *self);
          static PyObject *t_Line_sameOrientationAs(t_Line *self, PyObject *arg);
          static PyObject *t_Line_setAngle(t_Line *self, PyObject *arg);
          static PyObject *t_Line_setOriginOffset(t_Line *self, PyObject *arg);
          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_translateToPoint(t_Line *self, PyObject *arg);
          static PyObject *t_Line_wholeHyperplane(t_Line *self);
          static PyObject *t_Line_wholeSpace(t_Line *self);
          static PyObject *t_Line_get__angle(t_Line *self, void *data);
          static int t_Line_set__angle(t_Line *self, PyObject *arg, void *data);
          static PyObject *t_Line_get__originOffset(t_Line *self, void *data);
          static int t_Line_set__originOffset(t_Line *self, PyObject *arg, void *data);
          static PyObject *t_Line_get__reverse(t_Line *self, void *data);
          static PyObject *t_Line_get__tolerance(t_Line *self, void *data);
          static PyGetSetDef t_Line__fields_[] = {
            DECLARE_GETSET_FIELD(t_Line, angle),
            DECLARE_GETSET_FIELD(t_Line, originOffset),
            DECLARE_GET_FIELD(t_Line, reverse),
            DECLARE_GET_FIELD(t_Line, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Line__methods_[] = {
            DECLARE_METHOD(t_Line, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, contains, METH_O),
            DECLARE_METHOD(t_Line, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Line, distance, METH_O),
            DECLARE_METHOD(t_Line, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Line, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_Line, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Line, getOriginOffset, METH_NOARGS),
            DECLARE_METHOD(t_Line, getPointAt, METH_VARARGS),
            DECLARE_METHOD(t_Line, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTransform, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Line, intersection, METH_O),
            DECLARE_METHOD(t_Line, isParallelTo, METH_O),
            DECLARE_METHOD(t_Line, project, METH_O),
            DECLARE_METHOD(t_Line, reset, METH_VARARGS),
            DECLARE_METHOD(t_Line, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Line, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Line, setAngle, METH_O),
            DECLARE_METHOD(t_Line, setOriginOffset, METH_O),
            DECLARE_METHOD(t_Line, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, translateToPoint, METH_O),
            DECLARE_METHOD(t_Line, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Line, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Line)[] = {
            { Py_tp_methods, t_Line__methods_ },
            { Py_tp_init, (void *) t_Line_init_ },
            { Py_tp_getset, t_Line__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Line)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Line, t_Line, Line);

          void t_Line::install(PyObject *module)
          {
            installType(&PY_TYPE(Line), &PY_TYPE_DEF(Line), module, "Line", 0);
          }

          void t_Line::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "class_", make_descriptor(Line::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "wrapfn_", make_descriptor(t_Line::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Line::initializeClass, 1)))
              return NULL;
            return t_Line::wrap_Object(Line(((t_Line *) arg)->object.this$));
          }
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Line::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                Line object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Line(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                Line object((jobject) NULL);

                if (!parseArgs(args, "kDD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Line(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Line_contains(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Line_copySelf(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_distance(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Line_emptyHyperplane(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::twod::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_getAngle(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAngle());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getOffset(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Line a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Line_getOriginOffset(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOriginOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getPointAt(t_Line *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::oned::Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPointAt(a0, a1));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", args);
            return NULL;
          }

          static PyObject *t_Line_getReverse(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_getTolerance(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getTransform(PyTypeObject *type, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::hipparchus::geometry::partitioning::Transform result((jobject) NULL);

            if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Line::getTransform(a0, a1, a2, a3, a4, a5));
              return ::org::hipparchus::geometry::partitioning::t_Transform::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D), ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            PyErr_SetArgsError(type, "getTransform", args);
            return NULL;
          }

          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_Line_isParallelTo(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isParallelTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isParallelTo", arg);
            return NULL;
          }

          static PyObject *t_Line_project(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Line_reset(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                jdouble a1;

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Line_revertSelf(t_Line *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Line_sameOrientationAs(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Line_setAngle(t_Line *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAngle(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAngle", arg);
            return NULL;
          }

          static PyObject *t_Line_setOriginOffset(t_Line *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOriginOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOriginOffset", arg);
            return NULL;
          }

          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Line_translateToPoint(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.translateToPoint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "translateToPoint", arg);
            return NULL;
          }

          static PyObject *t_Line_wholeHyperplane(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::twod::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_wholeSpace(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::PolygonsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_PolygonsSet::wrap_Object(result);
          }

          static PyObject *t_Line_get__angle(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAngle());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Line_set__angle(t_Line *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAngle(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "angle", arg);
            return -1;
          }

          static PyObject *t_Line_get__originOffset(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOriginOffset());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Line_set__originOffset(t_Line *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOriginOffset(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "originOffset", arg);
            return -1;
          }

          static PyObject *t_Line_get__reverse(t_Line *self, void *data)
          {
            Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_Line::wrap_Object(value);
          }

          static PyObject *t_Line_get__tolerance(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/BatchLSModel.h"
#include "java/util/List.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSModel::class$ = NULL;
        jmethodID *BatchLSModel::mids$ = NULL;
        bool BatchLSModel::live$ = false;

        jclass BatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cea2a98fe3ea59d1] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_configureHarvester_f80d2a02173b5959] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_9e53ad80ae898100] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BatchLSModel::BatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_cea2a98fe3ea59d1, a0.this$, a1.this$, a2.this$, a3.this$)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {
        static PyObject *t_BatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BatchLSModel_init_(t_BatchLSModel *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BatchLSModel__methods_[] = {
          DECLARE_METHOD(t_BatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSModel, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSModel)[] = {
          { Py_tp_methods, t_BatchLSModel__methods_ },
          { Py_tp_init, (void *) t_BatchLSModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(BatchLSModel, t_BatchLSModel, BatchLSModel);

        void t_BatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSModel), &PY_TYPE_DEF(BatchLSModel), module, "BatchLSModel", 0);
        }

        void t_BatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "class_", make_descriptor(BatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "wrapfn_", make_descriptor(t_BatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSModel::initializeClass, 1)))
            return NULL;
          return t_BatchLSModel::wrap_Object(BatchLSModel(((t_BatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_BatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BatchLSModel_init_(t_BatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          BatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = BatchLSModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonFieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitFixedStepHandler::class$ = NULL;
        jmethodID *PythonFieldOrekitFixedStepHandler::mids$ = NULL;
        bool PythonFieldOrekitFixedStepHandler::live$ = false;

        jclass PythonFieldOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_52154b94d63e10ed] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_52154b94d63e10ed] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_init_2dfc984e8e112b73] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitFixedStepHandler::PythonFieldOrekitFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonFieldOrekitFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldOrekitFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldOrekitFixedStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        static PyObject *t_PythonFieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_of_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args);
        static int t_PythonFieldOrekitFixedStepHandler_init_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_finalize(t_PythonFieldOrekitFixedStepHandler *self);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_pythonExtension(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__self(t_PythonFieldOrekitFixedStepHandler *self, void *data);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__parameters_(t_PythonFieldOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitFixedStepHandler, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonFieldOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonFieldOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitFixedStepHandler, t_PythonFieldOrekitFixedStepHandler, PythonFieldOrekitFixedStepHandler);
        PyObject *t_PythonFieldOrekitFixedStepHandler::wrap_Object(const PythonFieldOrekitFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitFixedStepHandler *self = (t_PythonFieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitFixedStepHandler *self = (t_PythonFieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitFixedStepHandler), &PY_TYPE_DEF(PythonFieldOrekitFixedStepHandler), module, "PythonFieldOrekitFixedStepHandler", 1);
        }

        void t_PythonFieldOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "class_", make_descriptor(PythonFieldOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_PythonFieldOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitFixedStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitFixedStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldOrekitFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitFixedStepHandler::wrap_Object(PythonFieldOrekitFixedStepHandler(((t_PythonFieldOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_of_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitFixedStepHandler_init_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_finalize(t_PythonFieldOrekitFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_pythonExtension(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__self(t_PythonFieldOrekitFixedStepHandler *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__parameters_(t_PythonFieldOrekitFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonMatricesHarvester.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonMatricesHarvester::class$ = NULL;
      jmethodID *PythonMatricesHarvester::mids$ = NULL;
      bool PythonMatricesHarvester::live$ = false;

      jclass PythonMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getJacobiansColumnsNames_a6156df500549a58] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getParametersJacobian_63aee3ce1e412e46] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStateTransitionMatrix_63aee3ce1e412e46] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_setReferenceState_2b88003f931f70a7] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonMatricesHarvester::PythonMatricesHarvester() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonMatricesHarvester::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonMatricesHarvester::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonMatricesHarvester::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_PythonMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonMatricesHarvester_init_(t_PythonMatricesHarvester *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonMatricesHarvester_finalize(t_PythonMatricesHarvester *self);
      static PyObject *t_PythonMatricesHarvester_pythonExtension(t_PythonMatricesHarvester *self, PyObject *args);
      static jobject JNICALL t_PythonMatricesHarvester_getJacobiansColumnsNames0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getOrbitType1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getParametersJacobian2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getStateTransitionMatrix4(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonMatricesHarvester_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonMatricesHarvester_setReferenceState6(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonMatricesHarvester_get__self(t_PythonMatricesHarvester *self, void *data);
      static PyGetSetDef t_PythonMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_PythonMatricesHarvester, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_PythonMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMatricesHarvester, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonMatricesHarvester, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonMatricesHarvester)[] = {
        { Py_tp_methods, t_PythonMatricesHarvester__methods_ },
        { Py_tp_init, (void *) t_PythonMatricesHarvester_init_ },
        { Py_tp_getset, t_PythonMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonMatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonMatricesHarvester, t_PythonMatricesHarvester, PythonMatricesHarvester);

      void t_PythonMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonMatricesHarvester), &PY_TYPE_DEF(PythonMatricesHarvester), module, "PythonMatricesHarvester", 1);
      }

      void t_PythonMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "class_", make_descriptor(PythonMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "wrapfn_", make_descriptor(t_PythonMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonMatricesHarvester::initializeClass);
        JNINativeMethod methods[] = {
          { "getJacobiansColumnsNames", "()Ljava/util/List;", (void *) t_PythonMatricesHarvester_getJacobiansColumnsNames0 },
          { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonMatricesHarvester_getOrbitType1 },
          { "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonMatricesHarvester_getParametersJacobian2 },
          { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonMatricesHarvester_getPositionAngleType3 },
          { "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonMatricesHarvester_getStateTransitionMatrix4 },
          { "pythonDecRef", "()V", (void *) t_PythonMatricesHarvester_pythonDecRef5 },
          { "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonMatricesHarvester_setReferenceState6 },
        };
        env->registerNatives(cls, methods, 7);
      }

      static PyObject *t_PythonMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_PythonMatricesHarvester::wrap_Object(PythonMatricesHarvester(((t_PythonMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_PythonMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonMatricesHarvester_init_(t_PythonMatricesHarvester *self, PyObject *args, PyObject *kwds)
      {
        PythonMatricesHarvester object((jobject) NULL);

        INT_CALL(object = PythonMatricesHarvester());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonMatricesHarvester_finalize(t_PythonMatricesHarvester *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonMatricesHarvester_pythonExtension(t_PythonMatricesHarvester *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonMatricesHarvester_getJacobiansColumnsNames0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJacobiansColumnsNames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getJacobiansColumnsNames", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonMatricesHarvester_getOrbitType1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
        {
          throwTypeError("getOrbitType", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonMatricesHarvester_getParametersJacobian2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getParametersJacobian", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
        {
          throwTypeError("getParametersJacobian", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
        {
          throwTypeError("getPositionAngleType", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonMatricesHarvester_getStateTransitionMatrix4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getStateTransitionMatrix", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
        {
          throwTypeError("getStateTransitionMatrix", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonMatricesHarvester_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonMatricesHarvester_setReferenceState6(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "setReferenceState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonMatricesHarvester_get__self(t_PythonMatricesHarvester *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/SubPlane.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SubPlane::class$ = NULL;
          jmethodID *SubPlane::mids$ = NULL;
          bool SubPlane::live$ = false;

          jclass SubPlane::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SubPlane");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ece3b6638d417579] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_split_3b0163aa85fdaa47] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_3227314555d80cc9] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubPlane::SubPlane(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_ece3b6638d417579, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubPlane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_3b0163aa85fdaa47], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_SubPlane_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubPlane_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubPlane_of_(t_SubPlane *self, PyObject *args);
          static int t_SubPlane_init_(t_SubPlane *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubPlane_split(t_SubPlane *self, PyObject *args);
          static PyObject *t_SubPlane_get__parameters_(t_SubPlane *self, void *data);
          static PyGetSetDef t_SubPlane__fields_[] = {
            DECLARE_GET_FIELD(t_SubPlane, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubPlane__methods_[] = {
            DECLARE_METHOD(t_SubPlane, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubPlane, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubPlane, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubPlane, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubPlane)[] = {
            { Py_tp_methods, t_SubPlane__methods_ },
            { Py_tp_init, (void *) t_SubPlane_init_ },
            { Py_tp_getset, t_SubPlane__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubPlane)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubPlane, t_SubPlane, SubPlane);
          PyObject *t_SubPlane::wrap_Object(const SubPlane& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubPlane::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubPlane *self = (t_SubPlane *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubPlane::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubPlane::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubPlane *self = (t_SubPlane *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubPlane::install(PyObject *module)
          {
            installType(&PY_TYPE(SubPlane), &PY_TYPE_DEF(SubPlane), module, "SubPlane", 0);
          }

          void t_SubPlane::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "class_", make_descriptor(SubPlane::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "wrapfn_", make_descriptor(t_SubPlane::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubPlane_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubPlane::initializeClass, 1)))
              return NULL;
            return t_SubPlane::wrap_Object(SubPlane(((t_SubPlane *) arg)->object.this$));
          }
          static PyObject *t_SubPlane_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubPlane::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubPlane_of_(t_SubPlane *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubPlane_init_(t_SubPlane *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubPlane object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubPlane(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubPlane_split(t_SubPlane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            return callSuper(PY_TYPE(SubPlane), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubPlane_get__parameters_(t_SubPlane *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonStateJacobian.h"
#include "org/orekit/utils/StateJacobian.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonStateJacobian::class$ = NULL;
      jmethodID *PythonStateJacobian::mids$ = NULL;
      bool PythonStateJacobian::live$ = false;

      jclass PythonStateJacobian::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonStateJacobian");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_2f2af053a5858dd9] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStateJacobian::PythonStateJacobian() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonStateJacobian::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonStateJacobian::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonStateJacobian::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonStateJacobian_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStateJacobian_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStateJacobian_init_(t_PythonStateJacobian *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStateJacobian_finalize(t_PythonStateJacobian *self);
      static PyObject *t_PythonStateJacobian_pythonExtension(t_PythonStateJacobian *self, PyObject *args);
      static void JNICALL t_PythonStateJacobian_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStateJacobian_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonStateJacobian_get__self(t_PythonStateJacobian *self, void *data);
      static PyGetSetDef t_PythonStateJacobian__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStateJacobian, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStateJacobian__methods_[] = {
        DECLARE_METHOD(t_PythonStateJacobian, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateJacobian, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateJacobian, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStateJacobian, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStateJacobian)[] = {
        { Py_tp_methods, t_PythonStateJacobian__methods_ },
        { Py_tp_init, (void *) t_PythonStateJacobian_init_ },
        { Py_tp_getset, t_PythonStateJacobian__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStateJacobian)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStateJacobian, t_PythonStateJacobian, PythonStateJacobian);

      void t_PythonStateJacobian::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStateJacobian), &PY_TYPE_DEF(PythonStateJacobian), module, "PythonStateJacobian", 1);
      }

      void t_PythonStateJacobian::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "class_", make_descriptor(PythonStateJacobian::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "wrapfn_", make_descriptor(t_PythonStateJacobian::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStateJacobian::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonStateJacobian_pythonDecRef0 },
          { "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D", (void *) t_PythonStateJacobian_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStateJacobian_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStateJacobian::initializeClass, 1)))
          return NULL;
        return t_PythonStateJacobian::wrap_Object(PythonStateJacobian(((t_PythonStateJacobian *) arg)->object.this$));
      }
      static PyObject *t_PythonStateJacobian_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStateJacobian::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStateJacobian_init_(t_PythonStateJacobian *self, PyObject *args, PyObject *kwds)
      {
        PythonStateJacobian object((jobject) NULL);

        INT_CALL(object = PythonStateJacobian());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStateJacobian_finalize(t_PythonStateJacobian *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStateJacobian_pythonExtension(t_PythonStateJacobian *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonStateJacobian_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonStateJacobian_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static PyObject *t_PythonStateJacobian_get__self(t_PythonStateJacobian *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedDoubleHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedDoubleHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedDoubleHermiteInterpolator::mids$ = NULL;
      bool TimeStampedDoubleHermiteInterpolator::live$ = false;

      jclass TimeStampedDoubleHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedDoubleHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_interpolate_739b9e2ec3c8e6a1] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedDouble;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator(jint a0, jdouble a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_of_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedDoubleHermiteInterpolator_init_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_get__parameters_(t_TimeStampedDoubleHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedDoubleHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedDoubleHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedDoubleHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedDoubleHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedDoubleHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedDoubleHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedDoubleHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedDoubleHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedDoubleHermiteInterpolator, t_TimeStampedDoubleHermiteInterpolator, TimeStampedDoubleHermiteInterpolator);
      PyObject *t_TimeStampedDoubleHermiteInterpolator::wrap_Object(const TimeStampedDoubleHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedDoubleHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedDoubleHermiteInterpolator *self = (t_TimeStampedDoubleHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedDoubleHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedDoubleHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedDoubleHermiteInterpolator *self = (t_TimeStampedDoubleHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedDoubleHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedDoubleHermiteInterpolator), &PY_TYPE_DEF(TimeStampedDoubleHermiteInterpolator), module, "TimeStampedDoubleHermiteInterpolator", 0);
      }

      void t_TimeStampedDoubleHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "class_", make_descriptor(TimeStampedDoubleHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedDoubleHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedDoubleHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedDoubleHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedDoubleHermiteInterpolator::wrap_Object(TimeStampedDoubleHermiteInterpolator(((t_TimeStampedDoubleHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedDoubleHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedDoubleHermiteInterpolator_of_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedDoubleHermiteInterpolator_init_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedDoubleHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedDoubleHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeStampedDoubleHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_get__parameters_(t_TimeStampedDoubleHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFraction$ConvergenceTest.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFraction$ConvergenceTest::class$ = NULL;
      jmethodID *BigFraction$ConvergenceTest::mids$ = NULL;
      bool BigFraction$ConvergenceTest::live$ = false;

      jclass BigFraction$ConvergenceTest::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFraction$ConvergenceTest");

          mids$ = new jmethodID[max_mid];
          mids$[mid_test_1482b4da6cbbf02c] = env->getMethodID(cls, "test", "(JJ)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigFraction$ConvergenceTest::test(jlong a0, jlong a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_test_1482b4da6cbbf02c], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction$ConvergenceTest_test(t_BigFraction$ConvergenceTest *self, PyObject *args);

      static PyMethodDef t_BigFraction$ConvergenceTest__methods_[] = {
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, test, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFraction$ConvergenceTest)[] = {
        { Py_tp_methods, t_BigFraction$ConvergenceTest__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFraction$ConvergenceTest)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigFraction$ConvergenceTest, t_BigFraction$ConvergenceTest, BigFraction$ConvergenceTest);

      void t_BigFraction$ConvergenceTest::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFraction$ConvergenceTest), &PY_TYPE_DEF(BigFraction$ConvergenceTest), module, "BigFraction$ConvergenceTest", 0);
      }

      void t_BigFraction$ConvergenceTest::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "class_", make_descriptor(BigFraction$ConvergenceTest::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "wrapfn_", make_descriptor(t_BigFraction$ConvergenceTest::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFraction$ConvergenceTest::initializeClass, 1)))
          return NULL;
        return t_BigFraction$ConvergenceTest::wrap_Object(BigFraction$ConvergenceTest(((t_BigFraction$ConvergenceTest *) arg)->object.this$));
      }
      static PyObject *t_BigFraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFraction$ConvergenceTest::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigFraction$ConvergenceTest_test(t_BigFraction$ConvergenceTest *self, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jboolean result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.test(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "test", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/PythonMessageObserver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *PythonMessageObserver::class$ = NULL;
          jmethodID *PythonMessageObserver::mids$ = NULL;
          bool PythonMessageObserver::live$ = false;

          jclass PythonMessageObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/PythonMessageObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_messageAvailable_221655a0ec01abd2] = env->getMethodID(cls, "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMessageObserver::PythonMessageObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonMessageObserver::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonMessageObserver::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonMessageObserver::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          static PyObject *t_PythonMessageObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMessageObserver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMessageObserver_init_(t_PythonMessageObserver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMessageObserver_finalize(t_PythonMessageObserver *self);
          static PyObject *t_PythonMessageObserver_pythonExtension(t_PythonMessageObserver *self, PyObject *args);
          static void JNICALL t_PythonMessageObserver_messageAvailable0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMessageObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMessageObserver_get__self(t_PythonMessageObserver *self, void *data);
          static PyGetSetDef t_PythonMessageObserver__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMessageObserver, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMessageObserver__methods_[] = {
            DECLARE_METHOD(t_PythonMessageObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageObserver, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMessageObserver, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMessageObserver)[] = {
            { Py_tp_methods, t_PythonMessageObserver__methods_ },
            { Py_tp_init, (void *) t_PythonMessageObserver_init_ },
            { Py_tp_getset, t_PythonMessageObserver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMessageObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMessageObserver, t_PythonMessageObserver, PythonMessageObserver);

          void t_PythonMessageObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMessageObserver), &PY_TYPE_DEF(PythonMessageObserver), module, "PythonMessageObserver", 1);
          }

          void t_PythonMessageObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "class_", make_descriptor(PythonMessageObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "wrapfn_", make_descriptor(t_PythonMessageObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMessageObserver::initializeClass);
            JNINativeMethod methods[] = {
              { "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V", (void *) t_PythonMessageObserver_messageAvailable0 },
              { "pythonDecRef", "()V", (void *) t_PythonMessageObserver_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMessageObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMessageObserver::initializeClass, 1)))
              return NULL;
            return t_PythonMessageObserver::wrap_Object(PythonMessageObserver(((t_PythonMessageObserver *) arg)->object.this$));
          }
          static PyObject *t_PythonMessageObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMessageObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMessageObserver_init_(t_PythonMessageObserver *self, PyObject *args, PyObject *kwds)
          {
            PythonMessageObserver object((jobject) NULL);

            INT_CALL(object = PythonMessageObserver());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMessageObserver_finalize(t_PythonMessageObserver *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMessageObserver_pythonExtension(t_PythonMessageObserver *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static void JNICALL t_PythonMessageObserver_messageAvailable0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = env->fromJString((jstring) a0, 0);
            PyObject *o1 = ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(::org::orekit::gnss::metric::messages::ParsedMessage(a1));
            PyObject *result = PyObject_CallMethod(obj, "messageAvailable", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMessageObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMessageObserver_get__self(t_PythonMessageObserver *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataProvider::class$ = NULL;
      jmethodID *DataProvider::mids$ = NULL;
      bool DataProvider::live$ = false;

      jclass DataProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataProvider");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_DataProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataProvider_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DataProvider__methods_[] = {
        DECLARE_METHOD(t_DataProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvider, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataProvider)[] = {
        { Py_tp_methods, t_DataProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataProvider, t_DataProvider, DataProvider);

      void t_DataProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(DataProvider), &PY_TYPE_DEF(DataProvider), module, "DataProvider", 0);
      }

      void t_DataProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "class_", make_descriptor(DataProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "wrapfn_", make_descriptor(t_DataProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataProvider::initializeClass, 1)))
          return NULL;
        return t_DataProvider::wrap_Object(DataProvider(((t_DataProvider *) arg)->object.this$));
      }
      static PyObject *t_DataProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/AlongTrackAiming.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *AlongTrackAiming::class$ = NULL;
          jmethodID *AlongTrackAiming::mids$ = NULL;
          bool AlongTrackAiming::live$ = false;

          jclass AlongTrackAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/AlongTrackAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ad9ae6d9b489002f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/orbits/Orbit;Z)V");
              mids$[mid_alongTileDirection_c57b22dac91cacbc] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_a6156df500549a58] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AlongTrackAiming::AlongTrackAiming(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ad9ae6d9b489002f, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AlongTrackAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_c57b22dac91cacbc], a0.this$, a1.this$));
          }

          ::java::util::List AlongTrackAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_a6156df500549a58]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {
          static PyObject *t_AlongTrackAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AlongTrackAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AlongTrackAiming_init_(t_AlongTrackAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AlongTrackAiming_alongTileDirection(t_AlongTrackAiming *self, PyObject *args);
          static PyObject *t_AlongTrackAiming_getSingularPoints(t_AlongTrackAiming *self);
          static PyObject *t_AlongTrackAiming_get__singularPoints(t_AlongTrackAiming *self, void *data);
          static PyGetSetDef t_AlongTrackAiming__fields_[] = {
            DECLARE_GET_FIELD(t_AlongTrackAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AlongTrackAiming__methods_[] = {
            DECLARE_METHOD(t_AlongTrackAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AlongTrackAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AlongTrackAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_AlongTrackAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AlongTrackAiming)[] = {
            { Py_tp_methods, t_AlongTrackAiming__methods_ },
            { Py_tp_init, (void *) t_AlongTrackAiming_init_ },
            { Py_tp_getset, t_AlongTrackAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AlongTrackAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AlongTrackAiming, t_AlongTrackAiming, AlongTrackAiming);

          void t_AlongTrackAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(AlongTrackAiming), &PY_TYPE_DEF(AlongTrackAiming), module, "AlongTrackAiming", 0);
          }

          void t_AlongTrackAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "class_", make_descriptor(AlongTrackAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "wrapfn_", make_descriptor(t_AlongTrackAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AlongTrackAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AlongTrackAiming::initializeClass, 1)))
              return NULL;
            return t_AlongTrackAiming::wrap_Object(AlongTrackAiming(((t_AlongTrackAiming *) arg)->object.this$));
          }
          static PyObject *t_AlongTrackAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AlongTrackAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AlongTrackAiming_init_(t_AlongTrackAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            jboolean a2;
            AlongTrackAiming object((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AlongTrackAiming(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AlongTrackAiming_alongTileDirection(t_AlongTrackAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_AlongTrackAiming_getSingularPoints(t_AlongTrackAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_AlongTrackAiming_get__singularPoints(t_AlongTrackAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunctionGradient.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *ObjectiveFunctionGradient::class$ = NULL;
          jmethodID *ObjectiveFunctionGradient::mids$ = NULL;
          bool ObjectiveFunctionGradient::live$ = false;

          jclass ObjectiveFunctionGradient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/ObjectiveFunctionGradient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_29c934b96c35263d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;)V");
              mids$[mid_getObjectiveFunctionGradient_aaef55ff59f9c00e] = env->getMethodID(cls, "getObjectiveFunctionGradient", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObjectiveFunctionGradient::ObjectiveFunctionGradient(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_29c934b96c35263d, a0.this$)) {}

          ::org::hipparchus::analysis::MultivariateVectorFunction ObjectiveFunctionGradient::getObjectiveFunctionGradient() const
          {
            return ::org::hipparchus::analysis::MultivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunctionGradient_aaef55ff59f9c00e]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_ObjectiveFunctionGradient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObjectiveFunctionGradient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObjectiveFunctionGradient_init_(t_ObjectiveFunctionGradient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObjectiveFunctionGradient_getObjectiveFunctionGradient(t_ObjectiveFunctionGradient *self);
          static PyObject *t_ObjectiveFunctionGradient_get__objectiveFunctionGradient(t_ObjectiveFunctionGradient *self, void *data);
          static PyGetSetDef t_ObjectiveFunctionGradient__fields_[] = {
            DECLARE_GET_FIELD(t_ObjectiveFunctionGradient, objectiveFunctionGradient),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObjectiveFunctionGradient__methods_[] = {
            DECLARE_METHOD(t_ObjectiveFunctionGradient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunctionGradient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunctionGradient, getObjectiveFunctionGradient, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObjectiveFunctionGradient)[] = {
            { Py_tp_methods, t_ObjectiveFunctionGradient__methods_ },
            { Py_tp_init, (void *) t_ObjectiveFunctionGradient_init_ },
            { Py_tp_getset, t_ObjectiveFunctionGradient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObjectiveFunctionGradient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObjectiveFunctionGradient, t_ObjectiveFunctionGradient, ObjectiveFunctionGradient);

          void t_ObjectiveFunctionGradient::install(PyObject *module)
          {
            installType(&PY_TYPE(ObjectiveFunctionGradient), &PY_TYPE_DEF(ObjectiveFunctionGradient), module, "ObjectiveFunctionGradient", 0);
          }

          void t_ObjectiveFunctionGradient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "class_", make_descriptor(ObjectiveFunctionGradient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "wrapfn_", make_descriptor(t_ObjectiveFunctionGradient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObjectiveFunctionGradient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObjectiveFunctionGradient::initializeClass, 1)))
              return NULL;
            return t_ObjectiveFunctionGradient::wrap_Object(ObjectiveFunctionGradient(((t_ObjectiveFunctionGradient *) arg)->object.this$));
          }
          static PyObject *t_ObjectiveFunctionGradient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObjectiveFunctionGradient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObjectiveFunctionGradient_init_(t_ObjectiveFunctionGradient *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
            ObjectiveFunctionGradient object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0))
            {
              INT_CALL(object = ObjectiveFunctionGradient(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObjectiveFunctionGradient_getObjectiveFunctionGradient(t_ObjectiveFunctionGradient *self)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getObjectiveFunctionGradient());
            return ::org::hipparchus::analysis::t_MultivariateVectorFunction::wrap_Object(result);
          }

          static PyObject *t_ObjectiveFunctionGradient_get__objectiveFunctionGradient(t_ObjectiveFunctionGradient *self, void *data)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction value((jobject) NULL);
            OBJ_CALL(value = self->object.getObjectiveFunctionGradient());
            return ::org::hipparchus::analysis::t_MultivariateVectorFunction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpMath.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpMath::class$ = NULL;
      jmethodID *DfpMath::mids$ = NULL;
      bool DfpMath::live$ = false;

      jclass DfpMath::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpMath");

          mids$ = new jmethodID[max_mid];
          mids$[mid_acos_f0d5166eeb6b0680] = env->getStaticMethodID(cls, "acos", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asin_f0d5166eeb6b0680] = env->getStaticMethodID(cls, "asin", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan_f0d5166eeb6b0680] = env->getStaticMethodID(cls, "atan", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cos_f0d5166eeb6b0680] = env->getStaticMethodID(cls, "cos", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_exp_f0d5166eeb6b0680] = env->getStaticMethodID(cls, "exp", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log_f0d5166eeb6b0680] = env->getStaticMethodID(cls, "log", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_5f4c8a207222b7cd] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_b9ffa5c4c3b32a9f] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sin_f0d5166eeb6b0680] = env->getStaticMethodID(cls, "sin", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tan_f0d5166eeb6b0680] = env->getStaticMethodID(cls, "tan", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitMult_84f7175cc422b62a] = env->getStaticMethodID(cls, "splitMult", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitDiv_84f7175cc422b62a] = env->getStaticMethodID(cls, "splitDiv", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitPow_68bcd12c4c1e245b] = env->getStaticMethodID(cls, "splitPow", "([Lorg/hipparchus/dfp/Dfp;I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_expInternal_f0d5166eeb6b0680] = env->getStaticMethodID(cls, "expInternal", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_logInternal_c2ca673750c4dd02] = env->getStaticMethodID(cls, "logInternal", "([Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinInternal_0f848135eb17ee81] = env->getStaticMethodID(cls, "sinInternal", "([Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cosInternal_0f848135eb17ee81] = env->getStaticMethodID(cls, "cosInternal", "([Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atanInternal_f0d5166eeb6b0680] = env->getStaticMethodID(cls, "atanInternal", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_split_942ce37806556d8f] = env->getStaticMethodID(cls, "split", "(Lorg/hipparchus/dfp/DfpField;Ljava/lang/String;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_split_940fad32318872ec] = env->getStaticMethodID(cls, "split", "(Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::dfp::Dfp DfpMath::acos(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_acos_f0d5166eeb6b0680], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::asin(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_asin_f0d5166eeb6b0680], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::atan(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_atan_f0d5166eeb6b0680], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::cos(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_cos_f0d5166eeb6b0680], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::exp(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_exp_f0d5166eeb6b0680], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::log(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_log_f0d5166eeb6b0680], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::pow(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_pow_5f4c8a207222b7cd], a0.this$, a1.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::pow(const ::org::hipparchus::dfp::Dfp & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_pow_b9ffa5c4c3b32a9f], a0.this$, a1));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::sin(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_sin_f0d5166eeb6b0680], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::tan(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_tan_f0d5166eeb6b0680], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpMath_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_acos(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_asin(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_atan(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_cos(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_exp(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_log(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpMath_sin(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_tan(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DfpMath__methods_[] = {
        DECLARE_METHOD(t_DfpMath, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, acos, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, asin, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, atan, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, cos, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, exp, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, log, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, sin, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, tan, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpMath)[] = {
        { Py_tp_methods, t_DfpMath__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpMath)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DfpMath, t_DfpMath, DfpMath);

      void t_DfpMath::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpMath), &PY_TYPE_DEF(DfpMath), module, "DfpMath", 0);
      }

      void t_DfpMath::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "class_", make_descriptor(DfpMath::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "wrapfn_", make_descriptor(t_DfpMath::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DfpMath_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpMath::initializeClass, 1)))
          return NULL;
        return t_DfpMath::wrap_Object(DfpMath(((t_DfpMath *) arg)->object.this$));
      }
      static PyObject *t_DfpMath_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpMath::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DfpMath_acos(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::acos(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "acos", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_asin(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::asin(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "asin", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_atan(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::atan(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "atan", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_cos(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::cos(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "cos", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_exp(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::exp(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "exp", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_log(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::log(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "log", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::pow(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::pow(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_DfpMath_sin(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::sin(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sin", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_tan(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::tan(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "tan", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/BasicConstantThrustPropulsionModel.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *BasicConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *BasicConstantThrustPropulsionModel::mids$ = NULL;
          bool BasicConstantThrustPropulsionModel::live$ = false;
          ::java::lang::String *BasicConstantThrustPropulsionModel::FLOW_RATE = NULL;
          jdouble BasicConstantThrustPropulsionModel::FLOW_RATE_SCALE = (jdouble) 0;
          ::java::lang::String *BasicConstantThrustPropulsionModel::THRUST = NULL;
          jdouble BasicConstantThrustPropulsionModel::THRUST_SCALE = (jdouble) 0;

          jclass BasicConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/BasicConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0f1efbd8efdc5b6d] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_init$_341fcef9a4126498] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getFlowRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_05c598bf3375e090] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_e912d21057defe63] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_17a952530a808943] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_0afb6e76c9566061] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_31ec2b6903b76c9e] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_71c51b45829333ce] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FLOW_RATE = new ::java::lang::String(env->getStaticObjectField(cls, "FLOW_RATE", "Ljava/lang/String;"));
              FLOW_RATE_SCALE = env->getStaticDoubleField(cls, "FLOW_RATE_SCALE");
              THRUST = new ::java::lang::String(env->getStaticObjectField(cls, "THRUST", "Ljava/lang/String;"));
              THRUST_SCALE = env->getStaticDoubleField(cls, "THRUST_SCALE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BasicConstantThrustPropulsionModel::BasicConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_0f1efbd8efdc5b6d, a0, a1, a2.this$, a3.this$)) {}

          BasicConstantThrustPropulsionModel::BasicConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_341fcef9a4126498, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          jdouble BasicConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_456d9a2f64d6b28d]);
          }

          jdouble BasicConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_f05cb8c6dfd5e0b9], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement BasicConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_05c598bf3375e090], a0.this$));
          }

          jdouble BasicConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_e912d21057defe63], a0.this$);
          }

          ::java::util::List BasicConstantThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_0afb6e76c9566061], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BasicConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_31ec2b6903b76c9e], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_71c51b45829333ce], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_BasicConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BasicConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BasicConstantThrustPropulsionModel_init_(t_BasicConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BasicConstantThrustPropulsionModel_getFlowRate(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_getParametersDrivers(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_getThrustVector(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__flowRate(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__parametersDrivers(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__thrustVector(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_BasicConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BasicConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BasicConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_BasicConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_BasicConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_BasicConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BasicConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(BasicConstantThrustPropulsionModel, t_BasicConstantThrustPropulsionModel, BasicConstantThrustPropulsionModel);

          void t_BasicConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(BasicConstantThrustPropulsionModel), &PY_TYPE_DEF(BasicConstantThrustPropulsionModel), module, "BasicConstantThrustPropulsionModel", 0);
          }

          void t_BasicConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "class_", make_descriptor(BasicConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_BasicConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(BasicConstantThrustPropulsionModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "FLOW_RATE", make_descriptor(j2p(*BasicConstantThrustPropulsionModel::FLOW_RATE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "FLOW_RATE_SCALE", make_descriptor(BasicConstantThrustPropulsionModel::FLOW_RATE_SCALE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "THRUST", make_descriptor(j2p(*BasicConstantThrustPropulsionModel::THRUST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "THRUST_SCALE", make_descriptor(BasicConstantThrustPropulsionModel::THRUST_SCALE));
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BasicConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_BasicConstantThrustPropulsionModel::wrap_Object(BasicConstantThrustPropulsionModel(((t_BasicConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_BasicConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BasicConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BasicConstantThrustPropulsionModel_init_(t_BasicConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                BasicConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = BasicConstantThrustPropulsionModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                BasicConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
                {
                  INT_CALL(object = BasicConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_getFlowRate(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getFlowRate", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_getParametersDrivers(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_getThrustVector(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getThrustVector", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__flowRate(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__parametersDrivers(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__thrustVector(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FixedTransformProvider.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FixedTransformProvider::class$ = NULL;
      jmethodID *FixedTransformProvider::mids$ = NULL;
      bool FixedTransformProvider::live$ = false;

      jclass FixedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FixedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_438ebd2c38ce3e7b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Transform;)V");
          mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedTransformProvider::FixedTransformProvider(const ::org::orekit::frames::Transform & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_438ebd2c38ce3e7b, a0.this$)) {}

      ::org::orekit::frames::Transform FixedTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_d55545a64ea4a9a7], a0.this$));
      }

      ::org::orekit::frames::FieldTransform FixedTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_0b4f24249033b631], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_FixedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedTransformProvider_init_(t_FixedTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedTransformProvider_getTransform(t_FixedTransformProvider *self, PyObject *args);

      static PyMethodDef t_FixedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_FixedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedTransformProvider)[] = {
        { Py_tp_methods, t_FixedTransformProvider__methods_ },
        { Py_tp_init, (void *) t_FixedTransformProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedTransformProvider, t_FixedTransformProvider, FixedTransformProvider);

      void t_FixedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedTransformProvider), &PY_TYPE_DEF(FixedTransformProvider), module, "FixedTransformProvider", 0);
      }

      void t_FixedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "class_", make_descriptor(FixedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "wrapfn_", make_descriptor(t_FixedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_FixedTransformProvider::wrap_Object(FixedTransformProvider(((t_FixedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_FixedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedTransformProvider_init_(t_FixedTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Transform a0((jobject) NULL);
        FixedTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Transform::initializeClass, &a0))
        {
          INT_CALL(object = FixedTransformProvider(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedTransformProvider_getTransform(t_FixedTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AbstractMultipleShooting.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbstractMultipleShooting::class$ = NULL;
      jmethodID *AbstractMultipleShooting::mids$ = NULL;
      bool AbstractMultipleShooting::live$ = false;

      jclass AbstractMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbstractMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addConstraint_78e41e7b5124a628] = env->getMethodID(cls, "addConstraint", "(IID)V");
          mids$[mid_compute_a6156df500549a58] = env->getMethodID(cls, "compute", "()Ljava/util/List;");
          mids$[mid_setEpochFreedom_bc79bc153a2b3c2e] = env->getMethodID(cls, "setEpochFreedom", "(IZ)V");
          mids$[mid_setPatchPointComponentFreedom_175ef6117ed1e5b6] = env->getMethodID(cls, "setPatchPointComponentFreedom", "(IIZ)V");
          mids$[mid_setScaleLength_77e0f9a1f260e2e5] = env->getMethodID(cls, "setScaleLength", "(D)V");
          mids$[mid_setScaleTime_77e0f9a1f260e2e5] = env->getMethodID(cls, "setScaleTime", "(D)V");
          mids$[mid_getPatchPoint_881fd9055e653db3] = env->getMethodID(cls, "getPatchPoint", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_computeEpochJacobianMatrix_8b899bcca8eef41a] = env->getMethodID(cls, "computeEpochJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_updateAdditionalConstraints_7d4f41c65056f174] = env->getMethodID(cls, "updateAdditionalConstraints", "(I[D)V");
          mids$[mid_computeAdditionalConstraints_5c4ec51dfa4e445c] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_8b899bcca8eef41a] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_getAugmentedInitialState_881fd9055e653db3] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getNumberOfFreeComponents_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfFreeComponents", "()I");
          mids$[mid_getNumberOfConstraints_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfConstraints", "()I");
          mids$[mid_getFreeCompsMap_e998aa0f1d876d6f] = env->getMethodID(cls, "getFreeCompsMap", "()[Z");
          mids$[mid_getConstraintsMap_d6753b7055940a54] = env->getMethodID(cls, "getConstraintsMap", "()Ljava/util/Map;");
          mids$[mid_getPatchedSpacecraftState_a6156df500549a58] = env->getMethodID(cls, "getPatchedSpacecraftState", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractMultipleShooting::addConstraint(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addConstraint_78e41e7b5124a628], a0, a1, a2);
      }

      ::java::util::List AbstractMultipleShooting::compute() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_compute_a6156df500549a58]));
      }

      void AbstractMultipleShooting::setEpochFreedom(jint a0, jboolean a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEpochFreedom_bc79bc153a2b3c2e], a0, a1);
      }

      void AbstractMultipleShooting::setPatchPointComponentFreedom(jint a0, jint a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setPatchPointComponentFreedom_175ef6117ed1e5b6], a0, a1, a2);
      }

      void AbstractMultipleShooting::setScaleLength(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScaleLength_77e0f9a1f260e2e5], a0);
      }

      void AbstractMultipleShooting::setScaleTime(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScaleTime_77e0f9a1f260e2e5], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_AbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_addConstraint(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_compute(t_AbstractMultipleShooting *self);
      static PyObject *t_AbstractMultipleShooting_setEpochFreedom(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_setPatchPointComponentFreedom(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_setScaleLength(t_AbstractMultipleShooting *self, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_setScaleTime(t_AbstractMultipleShooting *self, PyObject *arg);
      static int t_AbstractMultipleShooting_set__scaleLength(t_AbstractMultipleShooting *self, PyObject *arg, void *data);
      static int t_AbstractMultipleShooting_set__scaleTime(t_AbstractMultipleShooting *self, PyObject *arg, void *data);
      static PyGetSetDef t_AbstractMultipleShooting__fields_[] = {
        DECLARE_SET_FIELD(t_AbstractMultipleShooting, scaleLength),
        DECLARE_SET_FIELD(t_AbstractMultipleShooting, scaleTime),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_AbstractMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMultipleShooting, addConstraint, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, compute, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setEpochFreedom, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setPatchPointComponentFreedom, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setScaleLength, METH_O),
        DECLARE_METHOD(t_AbstractMultipleShooting, setScaleTime, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractMultipleShooting)[] = {
        { Py_tp_methods, t_AbstractMultipleShooting__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractMultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractMultipleShooting, t_AbstractMultipleShooting, AbstractMultipleShooting);

      void t_AbstractMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractMultipleShooting), &PY_TYPE_DEF(AbstractMultipleShooting), module, "AbstractMultipleShooting", 0);
      }

      void t_AbstractMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "class_", make_descriptor(AbstractMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "wrapfn_", make_descriptor(t_AbstractMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_AbstractMultipleShooting::wrap_Object(AbstractMultipleShooting(((t_AbstractMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_AbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractMultipleShooting_addConstraint(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addConstraint(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addConstraint", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_compute(t_AbstractMultipleShooting *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.compute());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
      }

      static PyObject *t_AbstractMultipleShooting_setEpochFreedom(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jboolean a1;

        if (!parseArgs(args, "IZ", &a0, &a1))
        {
          OBJ_CALL(self->object.setEpochFreedom(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEpochFreedom", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setPatchPointComponentFreedom(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jboolean a2;

        if (!parseArgs(args, "IIZ", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setPatchPointComponentFreedom(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setPatchPointComponentFreedom", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setScaleLength(t_AbstractMultipleShooting *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScaleLength(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScaleLength", arg);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setScaleTime(t_AbstractMultipleShooting *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScaleTime(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScaleTime", arg);
        return NULL;
      }

      static int t_AbstractMultipleShooting_set__scaleLength(t_AbstractMultipleShooting *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScaleLength(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scaleLength", arg);
        return -1;
      }

      static int t_AbstractMultipleShooting_set__scaleTime(t_AbstractMultipleShooting *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScaleTime(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scaleTime", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplexField::class$ = NULL;
      jmethodID *FieldComplexField::mids$ = NULL;
      bool FieldComplexField::live$ = false;

      jclass FieldComplexField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplexField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getField_903a1718777f286c] = env->getStaticMethodID(cls, "getField", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplexField;");
          mids$[mid_getOne_fe347867d3dfbc81] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_fe347867d3dfbc81] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean FieldComplexField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      FieldComplexField FieldComplexField::getField(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplexField(env->callStaticObjectMethod(cls, mids$[mid_getField_903a1718777f286c], a0.this$));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexField::getOne() const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_getOne_fe347867d3dfbc81]));
      }

      ::java::lang::Class FieldComplexField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexField::getZero() const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_getZero_fe347867d3dfbc81]));
      }

      jint FieldComplexField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_FieldComplexField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_of_(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_equals(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_getField(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_getOne(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_getRuntimeClass(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_getZero(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_hashCode(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_get__one(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__runtimeClass(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__zero(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__parameters_(t_FieldComplexField *self, void *data);
      static PyGetSetDef t_FieldComplexField__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplexField, one),
        DECLARE_GET_FIELD(t_FieldComplexField, runtimeClass),
        DECLARE_GET_FIELD(t_FieldComplexField, zero),
        DECLARE_GET_FIELD(t_FieldComplexField, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplexField__methods_[] = {
        DECLARE_METHOD(t_FieldComplexField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexField, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexField, getField, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplexField)[] = {
        { Py_tp_methods, t_FieldComplexField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldComplexField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplexField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplexField, t_FieldComplexField, FieldComplexField);
      PyObject *t_FieldComplexField::wrap_Object(const FieldComplexField& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexField::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexField *self = (t_FieldComplexField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplexField::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexField::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexField *self = (t_FieldComplexField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplexField::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplexField), &PY_TYPE_DEF(FieldComplexField), module, "FieldComplexField", 0);
      }

      void t_FieldComplexField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "class_", make_descriptor(FieldComplexField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "wrapfn_", make_descriptor(t_FieldComplexField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplexField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplexField::initializeClass, 1)))
          return NULL;
        return t_FieldComplexField::wrap_Object(FieldComplexField(((t_FieldComplexField *) arg)->object.this$));
      }
      static PyObject *t_FieldComplexField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplexField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplexField_of_(t_FieldComplexField *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldComplexField_equals(t_FieldComplexField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldComplexField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldComplexField_getField(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplexField result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplexField::getField(a0));
          return t_FieldComplexField::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getField", arg);
        return NULL;
      }

      static PyObject *t_FieldComplexField_getOne(t_FieldComplexField *self)
      {
        ::org::hipparchus::complex::FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplexField_getRuntimeClass(t_FieldComplexField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result);
      }

      static PyObject *t_FieldComplexField_getZero(t_FieldComplexField *self)
      {
        ::org::hipparchus::complex::FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplexField_hashCode(t_FieldComplexField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldComplexField), (PyObject *) self, "hashCode", args, 2);
      }
      static PyObject *t_FieldComplexField_get__parameters_(t_FieldComplexField *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldComplexField_get__one(t_FieldComplexField *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(value);
      }

      static PyObject *t_FieldComplexField_get__runtimeClass(t_FieldComplexField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_FieldComplexField_get__zero(t_FieldComplexField *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummaryValues.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalSummaryValues::class$ = NULL;
        jmethodID *StatisticalSummaryValues::mids$ = NULL;
        bool StatisticalSummaryValues::live$ = false;

        jclass StatisticalSummaryValues::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalSummaryValues");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1c403465fcb9a8fb] = env->getMethodID(cls, "<init>", "(DDJDDD)V");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_456d9a2f64d6b28d] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_456d9a2f64d6b28d] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StatisticalSummaryValues::StatisticalSummaryValues(jdouble a0, jdouble a1, jlong a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1c403465fcb9a8fb, a0, a1, a2, a3, a4, a5)) {}

        jboolean StatisticalSummaryValues::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        jdouble StatisticalSummaryValues::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_456d9a2f64d6b28d]);
        }

        jdouble StatisticalSummaryValues::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_456d9a2f64d6b28d]);
        }

        jdouble StatisticalSummaryValues::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_456d9a2f64d6b28d]);
        }

        jlong StatisticalSummaryValues::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        jdouble StatisticalSummaryValues::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_456d9a2f64d6b28d]);
        }

        jdouble StatisticalSummaryValues::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_456d9a2f64d6b28d]);
        }

        jdouble StatisticalSummaryValues::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_456d9a2f64d6b28d]);
        }

        jint StatisticalSummaryValues::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        ::java::lang::String StatisticalSummaryValues::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        static PyObject *t_StatisticalSummaryValues_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalSummaryValues_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StatisticalSummaryValues_init_(t_StatisticalSummaryValues *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StatisticalSummaryValues_equals(t_StatisticalSummaryValues *self, PyObject *args);
        static PyObject *t_StatisticalSummaryValues_getMax(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getMean(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getMin(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getN(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getStandardDeviation(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getSum(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getVariance(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_hashCode(t_StatisticalSummaryValues *self, PyObject *args);
        static PyObject *t_StatisticalSummaryValues_toString(t_StatisticalSummaryValues *self, PyObject *args);
        static PyObject *t_StatisticalSummaryValues_get__max(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__mean(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__min(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__n(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__standardDeviation(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__sum(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__variance(t_StatisticalSummaryValues *self, void *data);
        static PyGetSetDef t_StatisticalSummaryValues__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, max),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, mean),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, min),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, n),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, sum),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalSummaryValues__methods_[] = {
          DECLARE_METHOD(t_StatisticalSummaryValues, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummaryValues, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummaryValues, equals, METH_VARARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalSummaryValues)[] = {
          { Py_tp_methods, t_StatisticalSummaryValues__methods_ },
          { Py_tp_init, (void *) t_StatisticalSummaryValues_init_ },
          { Py_tp_getset, t_StatisticalSummaryValues__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalSummaryValues)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalSummaryValues, t_StatisticalSummaryValues, StatisticalSummaryValues);

        void t_StatisticalSummaryValues::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalSummaryValues), &PY_TYPE_DEF(StatisticalSummaryValues), module, "StatisticalSummaryValues", 0);
        }

        void t_StatisticalSummaryValues::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummaryValues), "class_", make_descriptor(StatisticalSummaryValues::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummaryValues), "wrapfn_", make_descriptor(t_StatisticalSummaryValues::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummaryValues), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalSummaryValues_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalSummaryValues::initializeClass, 1)))
            return NULL;
          return t_StatisticalSummaryValues::wrap_Object(StatisticalSummaryValues(((t_StatisticalSummaryValues *) arg)->object.this$));
        }
        static PyObject *t_StatisticalSummaryValues_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalSummaryValues::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StatisticalSummaryValues_init_(t_StatisticalSummaryValues *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jlong a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          StatisticalSummaryValues object((jobject) NULL);

          if (!parseArgs(args, "DDJDDD", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = StatisticalSummaryValues(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StatisticalSummaryValues_equals(t_StatisticalSummaryValues *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(StatisticalSummaryValues), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_StatisticalSummaryValues_getMax(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getMean(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getMin(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getN(t_StatisticalSummaryValues *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalSummaryValues_getStandardDeviation(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getSum(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getVariance(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_hashCode(t_StatisticalSummaryValues *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StatisticalSummaryValues), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_StatisticalSummaryValues_toString(t_StatisticalSummaryValues *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(StatisticalSummaryValues), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_StatisticalSummaryValues_get__max(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__mean(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__min(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__n(t_StatisticalSummaryValues *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__standardDeviation(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__sum(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__variance(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UT1Scale::class$ = NULL;
      jmethodID *UT1Scale::mids$ = NULL;
      bool UT1Scale::live$ = false;

      jclass UT1Scale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UT1Scale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_1266c6198e5d43dd] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getUTCScale_ed870393143e8ecb] = env->getMethodID(cls, "getUTCScale", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory UT1Scale::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_1266c6198e5d43dd]));
      }

      ::java::lang::String UT1Scale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::org::orekit::time::UTCScale UT1Scale::getUTCScale() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTCScale_ed870393143e8ecb]));
      }

      jdouble UT1Scale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UT1Scale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      ::java::lang::String UT1Scale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UT1Scale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UT1Scale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UT1Scale_getEOPHistory(t_UT1Scale *self);
      static PyObject *t_UT1Scale_getName(t_UT1Scale *self);
      static PyObject *t_UT1Scale_getUTCScale(t_UT1Scale *self);
      static PyObject *t_UT1Scale_offsetFromTAI(t_UT1Scale *self, PyObject *args);
      static PyObject *t_UT1Scale_toString(t_UT1Scale *self, PyObject *args);
      static PyObject *t_UT1Scale_get__eOPHistory(t_UT1Scale *self, void *data);
      static PyObject *t_UT1Scale_get__name(t_UT1Scale *self, void *data);
      static PyObject *t_UT1Scale_get__uTCScale(t_UT1Scale *self, void *data);
      static PyGetSetDef t_UT1Scale__fields_[] = {
        DECLARE_GET_FIELD(t_UT1Scale, eOPHistory),
        DECLARE_GET_FIELD(t_UT1Scale, name),
        DECLARE_GET_FIELD(t_UT1Scale, uTCScale),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UT1Scale__methods_[] = {
        DECLARE_METHOD(t_UT1Scale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UT1Scale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UT1Scale, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, getName, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, getUTCScale, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_UT1Scale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UT1Scale)[] = {
        { Py_tp_methods, t_UT1Scale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UT1Scale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UT1Scale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UT1Scale, t_UT1Scale, UT1Scale);

      void t_UT1Scale::install(PyObject *module)
      {
        installType(&PY_TYPE(UT1Scale), &PY_TYPE_DEF(UT1Scale), module, "UT1Scale", 0);
      }

      void t_UT1Scale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "class_", make_descriptor(UT1Scale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "wrapfn_", make_descriptor(t_UT1Scale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UT1Scale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UT1Scale::initializeClass, 1)))
          return NULL;
        return t_UT1Scale::wrap_Object(UT1Scale(((t_UT1Scale *) arg)->object.this$));
      }
      static PyObject *t_UT1Scale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UT1Scale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UT1Scale_getEOPHistory(t_UT1Scale *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_UT1Scale_getName(t_UT1Scale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_UT1Scale_getUTCScale(t_UT1Scale *self)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTCScale());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_UT1Scale_offsetFromTAI(t_UT1Scale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_UT1Scale_toString(t_UT1Scale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(UT1Scale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_UT1Scale_get__eOPHistory(t_UT1Scale *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_UT1Scale_get__name(t_UT1Scale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_UT1Scale_get__uTCScale(t_UT1Scale *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTCScale());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *NonLinearProcess::class$ = NULL;
          jmethodID *NonLinearProcess::mids$ = NULL;
          bool NonLinearProcess::live$ = false;

          jclass NonLinearProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/NonLinearProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_45951e8f5aa99d9f] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
              mids$[mid_getInnovation_e7c98fc90efeccad] = env->getMethodID(cls, "getInnovation", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution NonLinearProcess::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::filtering::kalman::Measurement & a2) const
          {
            return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_45951e8f5aa99d9f], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::linear::RealVector NonLinearProcess::getInnovation(const ::org::hipparchus::filtering::kalman::Measurement & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_e7c98fc90efeccad], a0.this$, a1.this$, a2.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {
          static PyObject *t_NonLinearProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearProcess_of_(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_getEvolution(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_getInnovation(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_get__parameters_(t_NonLinearProcess *self, void *data);
          static PyGetSetDef t_NonLinearProcess__fields_[] = {
            DECLARE_GET_FIELD(t_NonLinearProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NonLinearProcess__methods_[] = {
            DECLARE_METHOD(t_NonLinearProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_NonLinearProcess, getEvolution, METH_VARARGS),
            DECLARE_METHOD(t_NonLinearProcess, getInnovation, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NonLinearProcess)[] = {
            { Py_tp_methods, t_NonLinearProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NonLinearProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NonLinearProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NonLinearProcess, t_NonLinearProcess, NonLinearProcess);
          PyObject *t_NonLinearProcess::wrap_Object(const NonLinearProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NonLinearProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NonLinearProcess *self = (t_NonLinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NonLinearProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NonLinearProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NonLinearProcess *self = (t_NonLinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NonLinearProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(NonLinearProcess), &PY_TYPE_DEF(NonLinearProcess), module, "NonLinearProcess", 0);
          }

          void t_NonLinearProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "class_", make_descriptor(NonLinearProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "wrapfn_", make_descriptor(t_NonLinearProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NonLinearProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NonLinearProcess::initializeClass, 1)))
              return NULL;
            return t_NonLinearProcess::wrap_Object(NonLinearProcess(((t_NonLinearProcess *) arg)->object.this$));
          }
          static PyObject *t_NonLinearProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NonLinearProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NonLinearProcess_of_(t_NonLinearProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NonLinearProcess_getEvolution(t_NonLinearProcess *self, PyObject *args)
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a2((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

            if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
              return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
            return NULL;
          }

          static PyObject *t_NonLinearProcess_getInnovation(t_NonLinearProcess *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
            return NULL;
          }
          static PyObject *t_NonLinearProcess_get__parameters_(t_NonLinearProcess *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/RandomPercentile.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/rank/RandomPercentile.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *RandomPercentile::class$ = NULL;
          jmethodID *RandomPercentile::mids$ = NULL;
          bool RandomPercentile::live$ = false;
          jdouble RandomPercentile::DEFAULT_EPSILON = (jdouble) 0;

          jclass RandomPercentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/RandomPercentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_bb31e8cbfaf41e63] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
              mids$[mid_init$_313f2327697bef05] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/random/RandomGenerator;)V");
              mids$[mid_aggregate_d05e55c7836d5599] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/RandomPercentile;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_86f662ee598b8165] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/RandomPercentile;");
              mids$[mid_evaluate_618a40a0b95154fa] = env->getMethodID(cls, "evaluate", "(D[D)D");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_52f299e1e5aa92be] = env->getMethodID(cls, "evaluate", "(D[DII)D");
              mids$[mid_getAggregateN_a00f51a898ec07ff] = env->getMethodID(cls, "getAggregateN", "(Ljava/util/Collection;)D");
              mids$[mid_getAggregateQuantileRank_bbcaca5ce440726d] = env->getMethodID(cls, "getAggregateQuantileRank", "(DLjava/util/Collection;)D");
              mids$[mid_getAggregateRank_bbcaca5ce440726d] = env->getMethodID(cls, "getAggregateRank", "(DLjava/util/Collection;)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getQuantileRank_0ba5fed9597b693e] = env->getMethodID(cls, "getQuantileRank", "(D)D");
              mids$[mid_getRank_0ba5fed9597b693e] = env->getMethodID(cls, "getRank", "(D)D");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_getResult_0ba5fed9597b693e] = env->getMethodID(cls, "getResult", "(D)D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_maxValuesRetained_7920263ad8deab44] = env->getStaticMethodID(cls, "maxValuesRetained", "(D)J");
              mids$[mid_reduce_bbcaca5ce440726d] = env->getMethodID(cls, "reduce", "(DLjava/util/Collection;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RandomPercentile::RandomPercentile() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          RandomPercentile::RandomPercentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          RandomPercentile::RandomPercentile(const ::org::hipparchus::random::RandomGenerator & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_bb31e8cbfaf41e63, a0.this$)) {}

          RandomPercentile::RandomPercentile(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_313f2327697bef05, a0, a1.this$)) {}

          void RandomPercentile::aggregate(const RandomPercentile & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_d05e55c7836d5599], a0.this$);
          }

          void RandomPercentile::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          RandomPercentile RandomPercentile::copy() const
          {
            return RandomPercentile(env->callObjectMethod(this$, mids$[mid_copy_86f662ee598b8165]));
          }

          jdouble RandomPercentile::evaluate(jdouble a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_618a40a0b95154fa], a0, a1.this$);
          }

          jdouble RandomPercentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jdouble RandomPercentile::evaluate(jdouble a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_52f299e1e5aa92be], a0, a1.this$, a2, a3);
          }

          jdouble RandomPercentile::getAggregateN(const ::java::util::Collection & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateN_a00f51a898ec07ff], a0.this$);
          }

          jdouble RandomPercentile::getAggregateQuantileRank(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateQuantileRank_bbcaca5ce440726d], a0, a1.this$);
          }

          jdouble RandomPercentile::getAggregateRank(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateRank_bbcaca5ce440726d], a0, a1.this$);
          }

          jlong RandomPercentile::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble RandomPercentile::getQuantileRank(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantileRank_0ba5fed9597b693e], a0);
          }

          jdouble RandomPercentile::getRank(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRank_0ba5fed9597b693e], a0);
          }

          jdouble RandomPercentile::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          jdouble RandomPercentile::getResult(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_0ba5fed9597b693e], a0);
          }

          void RandomPercentile::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
          }

          jlong RandomPercentile::maxValuesRetained(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticLongMethod(cls, mids$[mid_maxValuesRetained_7920263ad8deab44], a0);
          }

          jdouble RandomPercentile::reduce(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_reduce_bbcaca5ce440726d], a0, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {
          static PyObject *t_RandomPercentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RandomPercentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RandomPercentile_init_(t_RandomPercentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RandomPercentile_aggregate(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_clear(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_copy(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_evaluate(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getAggregateN(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getAggregateQuantileRank(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getAggregateRank(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getN(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getQuantileRank(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getRank(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getResult(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_increment(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_maxValuesRetained(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RandomPercentile_reduce(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_get__n(t_RandomPercentile *self, void *data);
          static PyObject *t_RandomPercentile_get__result(t_RandomPercentile *self, void *data);
          static PyGetSetDef t_RandomPercentile__fields_[] = {
            DECLARE_GET_FIELD(t_RandomPercentile, n),
            DECLARE_GET_FIELD(t_RandomPercentile, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RandomPercentile__methods_[] = {
            DECLARE_METHOD(t_RandomPercentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, aggregate, METH_O),
            DECLARE_METHOD(t_RandomPercentile, clear, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getAggregateN, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getAggregateQuantileRank, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getAggregateRank, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getN, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getQuantileRank, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getRank, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getResult, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, increment, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, maxValuesRetained, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, reduce, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RandomPercentile)[] = {
            { Py_tp_methods, t_RandomPercentile__methods_ },
            { Py_tp_init, (void *) t_RandomPercentile_init_ },
            { Py_tp_getset, t_RandomPercentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RandomPercentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(RandomPercentile, t_RandomPercentile, RandomPercentile);

          void t_RandomPercentile::install(PyObject *module)
          {
            installType(&PY_TYPE(RandomPercentile), &PY_TYPE_DEF(RandomPercentile), module, "RandomPercentile", 0);
          }

          void t_RandomPercentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "class_", make_descriptor(RandomPercentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "wrapfn_", make_descriptor(t_RandomPercentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "boxfn_", make_descriptor(boxObject));
            env->getClass(RandomPercentile::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "DEFAULT_EPSILON", make_descriptor(RandomPercentile::DEFAULT_EPSILON));
          }

          static PyObject *t_RandomPercentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RandomPercentile::initializeClass, 1)))
              return NULL;
            return t_RandomPercentile::wrap_Object(RandomPercentile(((t_RandomPercentile *) arg)->object.this$));
          }
          static PyObject *t_RandomPercentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RandomPercentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RandomPercentile_init_(t_RandomPercentile *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RandomPercentile object((jobject) NULL);

                INT_CALL(object = RandomPercentile());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = RandomPercentile(a0));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
                {
                  INT_CALL(object = RandomPercentile(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = RandomPercentile(a0, a1));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RandomPercentile_aggregate(t_RandomPercentile *self, PyObject *arg)
          {
            RandomPercentile a0((jobject) NULL);

            if (!parseArg(arg, "k", RandomPercentile::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_clear(t_RandomPercentile *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_RandomPercentile_copy(t_RandomPercentile *self, PyObject *args)
          {
            RandomPercentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_RandomPercentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_RandomPercentile_evaluate(t_RandomPercentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "D[D", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                jdouble a0;
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_RandomPercentile_getAggregateN(t_RandomPercentile *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateN(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateN", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getAggregateQuantileRank(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateQuantileRank(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateQuantileRank", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getAggregateRank(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateRank(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateRank", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getN(t_RandomPercentile *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_RandomPercentile_getQuantileRank(t_RandomPercentile *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getQuantileRank(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getQuantileRank", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getRank(t_RandomPercentile *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getRank(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRank", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getResult(t_RandomPercentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getResult());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.getResult(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_RandomPercentile_increment(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_RandomPercentile_maxValuesRetained(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            jlong result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::RandomPercentile::maxValuesRetained(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError(type, "maxValuesRetained", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_reduce(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.reduce(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "reduce", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_get__n(t_RandomPercentile *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_RandomPercentile_get__result(t_RandomPercentile *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/AbstractFieldOfView.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *AbstractFieldOfView::class$ = NULL;
        jmethodID *AbstractFieldOfView::mids$ = NULL;
        bool AbstractFieldOfView::live$ = false;

        jclass AbstractFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/AbstractFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMargin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMargin", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractFieldOfView::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_456d9a2f64d6b28d]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        static PyObject *t_AbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldOfView_getMargin(t_AbstractFieldOfView *self);
        static PyObject *t_AbstractFieldOfView_get__margin(t_AbstractFieldOfView *self, void *data);
        static PyGetSetDef t_AbstractFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldOfView, margin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldOfView__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldOfView, getMargin, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldOfView)[] = {
          { Py_tp_methods, t_AbstractFieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldOfView, t_AbstractFieldOfView, AbstractFieldOfView);

        void t_AbstractFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldOfView), &PY_TYPE_DEF(AbstractFieldOfView), module, "AbstractFieldOfView", 0);
        }

        void t_AbstractFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "class_", make_descriptor(AbstractFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "wrapfn_", make_descriptor(t_AbstractFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldOfView::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldOfView::wrap_Object(AbstractFieldOfView(((t_AbstractFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldOfView_getMargin(t_AbstractFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractFieldOfView_get__margin(t_AbstractFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *S1Point::class$ = NULL;
          jmethodID *S1Point::mids$ = NULL;
          bool S1Point::live$ = false;
          S1Point *S1Point::NaN = NULL;

          jclass S1Point::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/S1Point");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_distance_726dc963fac3505e] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_5bb41e4cdd049545] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;Lorg/hipparchus/geometry/spherical/oned/S1Point;)D");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_229c87223f486349] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlpha", "()D");
              mids$[mid_getSpace_0438ef5f9a5edb53] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getVector_6d781af269bebe5e] = env->getMethodID(cls, "getVector", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NaN = new S1Point(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/spherical/oned/S1Point;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          S1Point::S1Point(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          jdouble S1Point::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_726dc963fac3505e], a0.this$);
          }

          jdouble S1Point::distance(const S1Point & a0, const S1Point & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_5bb41e4cdd049545], a0.this$, a1.this$);
          }

          jboolean S1Point::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          jboolean S1Point::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_229c87223f486349], a0.this$);
          }

          jdouble S1Point::getAlpha() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::Space S1Point::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_0438ef5f9a5edb53]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D S1Point::getVector() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getVector_6d781af269bebe5e]));
          }

          jint S1Point::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          jboolean S1Point::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          static PyObject *t_S1Point_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_S1Point_instance_(PyTypeObject *type, PyObject *arg);
          static int t_S1Point_init_(t_S1Point *self, PyObject *args, PyObject *kwds);
          static PyObject *t_S1Point_distance(t_S1Point *self, PyObject *arg);
          static PyObject *t_S1Point_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_S1Point_equals(t_S1Point *self, PyObject *args);
          static PyObject *t_S1Point_equalsIeee754(t_S1Point *self, PyObject *arg);
          static PyObject *t_S1Point_getAlpha(t_S1Point *self);
          static PyObject *t_S1Point_getSpace(t_S1Point *self);
          static PyObject *t_S1Point_getVector(t_S1Point *self);
          static PyObject *t_S1Point_hashCode(t_S1Point *self, PyObject *args);
          static PyObject *t_S1Point_isNaN(t_S1Point *self);
          static PyObject *t_S1Point_get__alpha(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__naN(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__space(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__vector(t_S1Point *self, void *data);
          static PyGetSetDef t_S1Point__fields_[] = {
            DECLARE_GET_FIELD(t_S1Point, alpha),
            DECLARE_GET_FIELD(t_S1Point, naN),
            DECLARE_GET_FIELD(t_S1Point, space),
            DECLARE_GET_FIELD(t_S1Point, vector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_S1Point__methods_[] = {
            DECLARE_METHOD(t_S1Point, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S1Point, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S1Point, distance, METH_O),
            DECLARE_METHOD(t_S1Point, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_S1Point, equals, METH_VARARGS),
            DECLARE_METHOD(t_S1Point, equalsIeee754, METH_O),
            DECLARE_METHOD(t_S1Point, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, getVector, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_S1Point, isNaN, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(S1Point)[] = {
            { Py_tp_methods, t_S1Point__methods_ },
            { Py_tp_init, (void *) t_S1Point_init_ },
            { Py_tp_getset, t_S1Point__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(S1Point)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(S1Point, t_S1Point, S1Point);

          void t_S1Point::install(PyObject *module)
          {
            installType(&PY_TYPE(S1Point), &PY_TYPE_DEF(S1Point), module, "S1Point", 0);
          }

          void t_S1Point::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "class_", make_descriptor(S1Point::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "wrapfn_", make_descriptor(t_S1Point::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "boxfn_", make_descriptor(boxObject));
            env->getClass(S1Point::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "NaN", make_descriptor(t_S1Point::wrap_Object(*S1Point::NaN)));
          }

          static PyObject *t_S1Point_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, S1Point::initializeClass, 1)))
              return NULL;
            return t_S1Point::wrap_Object(S1Point(((t_S1Point *) arg)->object.this$));
          }
          static PyObject *t_S1Point_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, S1Point::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_S1Point_init_(t_S1Point *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            S1Point object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = S1Point(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_S1Point_distance(t_S1Point *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_S1Point_distance_(PyTypeObject *type, PyObject *args)
          {
            S1Point a0((jobject) NULL);
            S1Point a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", S1Point::initializeClass, S1Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::oned::S1Point::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_S1Point_equals(t_S1Point *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(S1Point), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_S1Point_equalsIeee754(t_S1Point *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_S1Point_getAlpha(t_S1Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S1Point_getSpace(t_S1Point *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_S1Point_getVector(t_S1Point *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_S1Point_hashCode(t_S1Point *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(S1Point), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_S1Point_isNaN(t_S1Point *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_S1Point_get__alpha(t_S1Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S1Point_get__naN(t_S1Point *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_S1Point_get__space(t_S1Point *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_S1Point_get__vector(t_S1Point *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateFunction::class$ = NULL;
      jmethodID *MultivariateFunction::mids$ = NULL;
      bool MultivariateFunction::live$ = false;

      jclass MultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "value", "([D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultivariateFunction::value(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_f05cb8c6dfd5e0b9], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_MultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateFunction_value(t_MultivariateFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateFunction)[] = {
        { Py_tp_methods, t_MultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateFunction, t_MultivariateFunction, MultivariateFunction);

      void t_MultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateFunction), &PY_TYPE_DEF(MultivariateFunction), module, "MultivariateFunction", 0);
      }

      void t_MultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "class_", make_descriptor(MultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "wrapfn_", make_descriptor(t_MultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateFunction::wrap_Object(MultivariateFunction(((t_MultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateFunction_value(t_MultivariateFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ThreeEighthesIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ThreeEighthesIntegrator::class$ = NULL;
        jmethodID *ThreeEighthesIntegrator::mids$ = NULL;
        bool ThreeEighthesIntegrator::live$ = false;

        jclass ThreeEighthesIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ThreeEighthesIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_43de1192439efa92] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_7cdc325af0834901] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_7cdc325af0834901] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_ff0f97f9197beced] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/ThreeEighthesStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesIntegrator::ThreeEighthesIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        JArray< JArray< jdouble > > ThreeEighthesIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_43de1192439efa92]));
        }

        JArray< jdouble > ThreeEighthesIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_7cdc325af0834901]));
        }

        JArray< jdouble > ThreeEighthesIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_7cdc325af0834901]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_ThreeEighthesIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThreeEighthesIntegrator_init_(t_ThreeEighthesIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesIntegrator_getA(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_getB(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_getC(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_get__a(t_ThreeEighthesIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesIntegrator_get__b(t_ThreeEighthesIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesIntegrator_get__c(t_ThreeEighthesIntegrator *self, void *data);
        static PyGetSetDef t_ThreeEighthesIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, a),
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, b),
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesIntegrator__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesIntegrator)[] = {
          { Py_tp_methods, t_ThreeEighthesIntegrator__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesIntegrator_init_ },
          { Py_tp_getset, t_ThreeEighthesIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesIntegrator, t_ThreeEighthesIntegrator, ThreeEighthesIntegrator);

        void t_ThreeEighthesIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesIntegrator), &PY_TYPE_DEF(ThreeEighthesIntegrator), module, "ThreeEighthesIntegrator", 0);
        }

        void t_ThreeEighthesIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "class_", make_descriptor(ThreeEighthesIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "wrapfn_", make_descriptor(t_ThreeEighthesIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesIntegrator::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesIntegrator::wrap_Object(ThreeEighthesIntegrator(((t_ThreeEighthesIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThreeEighthesIntegrator_init_(t_ThreeEighthesIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ThreeEighthesIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ThreeEighthesIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesIntegrator_getA(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_getB(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_getC(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_get__a(t_ThreeEighthesIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ThreeEighthesIntegrator_get__b(t_ThreeEighthesIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ThreeEighthesIntegrator_get__c(t_ThreeEighthesIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenZonalLinear.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenZonalLinear::class$ = NULL;
              jmethodID *FieldHansenZonalLinear::mids$ = NULL;
              bool FieldHansenZonalLinear::live$ = false;

              jclass FieldHansenZonalLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenZonalLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7953b5ef04592715] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_03a16642f77779e7] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_ee7db4b2ec7048ce] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_ee7db4b2ec7048ce] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenZonalLinear::FieldHansenZonalLinear(jint a0, jint a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7953b5ef04592715, a0, a1, a2.this$)) {}

              void FieldHansenZonalLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_03a16642f77779e7], a0.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenZonalLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_ee7db4b2ec7048ce], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenZonalLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_ee7db4b2ec7048ce], a0, a1.this$));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_FieldHansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_of_(t_FieldHansenZonalLinear *self, PyObject *args);
              static int t_FieldHansenZonalLinear_init_(t_FieldHansenZonalLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenZonalLinear_computeInitValues(t_FieldHansenZonalLinear *self, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_getDerivative(t_FieldHansenZonalLinear *self, PyObject *args);
              static PyObject *t_FieldHansenZonalLinear_getValue(t_FieldHansenZonalLinear *self, PyObject *args);
              static PyObject *t_FieldHansenZonalLinear_get__parameters_(t_FieldHansenZonalLinear *self, void *data);
              static PyGetSetDef t_FieldHansenZonalLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenZonalLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenZonalLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenZonalLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, computeInitValues, METH_O),
                DECLARE_METHOD(t_FieldHansenZonalLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenZonalLinear)[] = {
                { Py_tp_methods, t_FieldHansenZonalLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenZonalLinear_init_ },
                { Py_tp_getset, t_FieldHansenZonalLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenZonalLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenZonalLinear, t_FieldHansenZonalLinear, FieldHansenZonalLinear);
              PyObject *t_FieldHansenZonalLinear::wrap_Object(const FieldHansenZonalLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenZonalLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenZonalLinear *self = (t_FieldHansenZonalLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenZonalLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenZonalLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenZonalLinear *self = (t_FieldHansenZonalLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenZonalLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenZonalLinear), &PY_TYPE_DEF(FieldHansenZonalLinear), module, "FieldHansenZonalLinear", 0);
              }

              void t_FieldHansenZonalLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "class_", make_descriptor(FieldHansenZonalLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "wrapfn_", make_descriptor(t_FieldHansenZonalLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenZonalLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenZonalLinear::wrap_Object(FieldHansenZonalLinear(((t_FieldHansenZonalLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenZonalLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenZonalLinear_of_(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenZonalLinear_init_(t_FieldHansenZonalLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                FieldHansenZonalLinear object((jobject) NULL);

                if (!parseArgs(args, "IIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenZonalLinear(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenZonalLinear_computeInitValues(t_FieldHansenZonalLinear *self, PyObject *arg)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", arg);
                return NULL;
              }

              static PyObject *t_FieldHansenZonalLinear_getDerivative(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenZonalLinear_getValue(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenZonalLinear_get__parameters_(t_FieldHansenZonalLinear *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldRecordAndContinue::class$ = NULL;
          jmethodID *FieldRecordAndContinue::mids$ = NULL;
          bool FieldRecordAndContinue::live$ = false;

          jclass FieldRecordAndContinue::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldRecordAndContinue");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_eventOccurred_9bc9ae10f590e312] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getEvents_a6156df500549a58] = env->getMethodID(cls, "getEvents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldRecordAndContinue::FieldRecordAndContinue() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          FieldRecordAndContinue::FieldRecordAndContinue(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

          void FieldRecordAndContinue::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          ::org::hipparchus::ode::events::Action FieldRecordAndContinue::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_9bc9ae10f590e312], a0.this$, a1.this$, a2));
          }

          ::java::util::List FieldRecordAndContinue::getEvents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEvents_a6156df500549a58]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          static PyObject *t_FieldRecordAndContinue_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue_of_(t_FieldRecordAndContinue *self, PyObject *args);
          static int t_FieldRecordAndContinue_init_(t_FieldRecordAndContinue *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldRecordAndContinue_clear(t_FieldRecordAndContinue *self);
          static PyObject *t_FieldRecordAndContinue_eventOccurred(t_FieldRecordAndContinue *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue_getEvents(t_FieldRecordAndContinue *self);
          static PyObject *t_FieldRecordAndContinue_get__events(t_FieldRecordAndContinue *self, void *data);
          static PyObject *t_FieldRecordAndContinue_get__parameters_(t_FieldRecordAndContinue *self, void *data);
          static PyGetSetDef t_FieldRecordAndContinue__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRecordAndContinue, events),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRecordAndContinue__methods_[] = {
            DECLARE_METHOD(t_FieldRecordAndContinue, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, clear, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, getEvents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRecordAndContinue)[] = {
            { Py_tp_methods, t_FieldRecordAndContinue__methods_ },
            { Py_tp_init, (void *) t_FieldRecordAndContinue_init_ },
            { Py_tp_getset, t_FieldRecordAndContinue__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRecordAndContinue)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRecordAndContinue, t_FieldRecordAndContinue, FieldRecordAndContinue);
          PyObject *t_FieldRecordAndContinue::wrap_Object(const FieldRecordAndContinue& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue *self = (t_FieldRecordAndContinue *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRecordAndContinue::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue *self = (t_FieldRecordAndContinue *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRecordAndContinue::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRecordAndContinue), &PY_TYPE_DEF(FieldRecordAndContinue), module, "FieldRecordAndContinue", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "Event", make_descriptor(&PY_TYPE_DEF(FieldRecordAndContinue$Event)));
          }

          void t_FieldRecordAndContinue::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "class_", make_descriptor(FieldRecordAndContinue::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "wrapfn_", make_descriptor(t_FieldRecordAndContinue::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRecordAndContinue_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRecordAndContinue::initializeClass, 1)))
              return NULL;
            return t_FieldRecordAndContinue::wrap_Object(FieldRecordAndContinue(((t_FieldRecordAndContinue *) arg)->object.this$));
          }
          static PyObject *t_FieldRecordAndContinue_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRecordAndContinue::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRecordAndContinue_of_(t_FieldRecordAndContinue *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldRecordAndContinue_init_(t_FieldRecordAndContinue *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                FieldRecordAndContinue object((jobject) NULL);

                INT_CALL(object = FieldRecordAndContinue());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRecordAndContinue object((jobject) NULL);

                if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = FieldRecordAndContinue(a0));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldRecordAndContinue_clear(t_FieldRecordAndContinue *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_FieldRecordAndContinue_eventOccurred(t_FieldRecordAndContinue *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_FieldRecordAndContinue_getEvents(t_FieldRecordAndContinue *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(result);
          }
          static PyObject *t_FieldRecordAndContinue_get__parameters_(t_FieldRecordAndContinue *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRecordAndContinue_get__events(t_FieldRecordAndContinue *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationEvent::class$ = NULL;
      jmethodID *IterationEvent::mids$ = NULL;
      bool IterationEvent::live$ = false;

      jclass IterationEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_de63e03d5189e405] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;I)V");
          mids$[mid_getIterations_f2f64475e4580546] = env->getMethodID(cls, "getIterations", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterationEvent::IterationEvent(const ::java::lang::Object & a0, jint a1) : ::java::util::EventObject(env->newObject(initializeClass, &mids$, mid_init$_de63e03d5189e405, a0.this$, a1)) {}

      jint IterationEvent::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_f2f64475e4580546]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_IterationEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterationEvent_init_(t_IterationEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterationEvent_getIterations(t_IterationEvent *self);
      static PyObject *t_IterationEvent_get__iterations(t_IterationEvent *self, void *data);
      static PyGetSetDef t_IterationEvent__fields_[] = {
        DECLARE_GET_FIELD(t_IterationEvent, iterations),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterationEvent__methods_[] = {
        DECLARE_METHOD(t_IterationEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationEvent, getIterations, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationEvent)[] = {
        { Py_tp_methods, t_IterationEvent__methods_ },
        { Py_tp_init, (void *) t_IterationEvent_init_ },
        { Py_tp_getset, t_IterationEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationEvent)[] = {
        &PY_TYPE_DEF(::java::util::EventObject),
        NULL
      };

      DEFINE_TYPE(IterationEvent, t_IterationEvent, IterationEvent);

      void t_IterationEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationEvent), &PY_TYPE_DEF(IterationEvent), module, "IterationEvent", 0);
      }

      void t_IterationEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "class_", make_descriptor(IterationEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "wrapfn_", make_descriptor(t_IterationEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationEvent::initializeClass, 1)))
          return NULL;
        return t_IterationEvent::wrap_Object(IterationEvent(((t_IterationEvent *) arg)->object.this$));
      }
      static PyObject *t_IterationEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterationEvent_init_(t_IterationEvent *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        jint a1;
        IterationEvent object((jobject) NULL);

        if (!parseArgs(args, "oI", &a0, &a1))
        {
          INT_CALL(object = IterationEvent(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_IterationEvent_getIterations(t_IterationEvent *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationEvent_get__iterations(t_IterationEvent *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/GenericTimeStampedCache.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/lang/IllegalStateException.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *GenericTimeStampedCache::class$ = NULL;
      jmethodID *GenericTimeStampedCache::mids$ = NULL;
      bool GenericTimeStampedCache::live$ = false;
      jint GenericTimeStampedCache::DEFAULT_CACHED_SLOTS_NUMBER = (jint) 0;

      jclass GenericTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/GenericTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fa9ad4845ee8a7ca] = env->getMethodID(cls, "<init>", "(IIDDLorg/orekit/utils/TimeStampedGenerator;)V");
          mids$[mid_init$_6afdb9308cfd17c0] = env->getMethodID(cls, "<init>", "(IIDDLorg/orekit/utils/TimeStampedGenerator;D)V");
          mids$[mid_getEarliest_b6273cee359d7146] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getEntries_f2f64475e4580546] = env->getMethodID(cls, "getEntries", "()I");
          mids$[mid_getGenerateCalls_f2f64475e4580546] = env->getMethodID(cls, "getGenerateCalls", "()I");
          mids$[mid_getGenerator_aaa86a4e6cb88059] = env->getMethodID(cls, "getGenerator", "()Lorg/orekit/utils/TimeStampedGenerator;");
          mids$[mid_getGetNeighborsCalls_f2f64475e4580546] = env->getMethodID(cls, "getGetNeighborsCalls", "()I");
          mids$[mid_getLatest_b6273cee359d7146] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_f2f64475e4580546] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getMaxSlots_f2f64475e4580546] = env->getMethodID(cls, "getMaxSlots", "()I");
          mids$[mid_getMaxSpan_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxSpan", "()D");
          mids$[mid_getNeighbors_1f145bd0decc1d0c] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_getNewSlotQuantumGap_456d9a2f64d6b28d] = env->getMethodID(cls, "getNewSlotQuantumGap", "()D");
          mids$[mid_getSlots_f2f64475e4580546] = env->getMethodID(cls, "getSlots", "()I");
          mids$[mid_getSlotsEvictions_f2f64475e4580546] = env->getMethodID(cls, "getSlotsEvictions", "()I");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_CACHED_SLOTS_NUMBER = env->getStaticIntField(cls, "DEFAULT_CACHED_SLOTS_NUMBER");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GenericTimeStampedCache::GenericTimeStampedCache(jint a0, jint a1, jdouble a2, jdouble a3, const ::org::orekit::utils::TimeStampedGenerator & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9ad4845ee8a7ca, a0, a1, a2, a3, a4.this$)) {}

      GenericTimeStampedCache::GenericTimeStampedCache(jint a0, jint a1, jdouble a2, jdouble a3, const ::org::orekit::utils::TimeStampedGenerator & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6afdb9308cfd17c0, a0, a1, a2, a3, a4.this$, a5)) {}

      ::org::orekit::time::TimeStamped GenericTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_b6273cee359d7146]));
      }

      jint GenericTimeStampedCache::getEntries() const
      {
        return env->callIntMethod(this$, mids$[mid_getEntries_f2f64475e4580546]);
      }

      jint GenericTimeStampedCache::getGenerateCalls() const
      {
        return env->callIntMethod(this$, mids$[mid_getGenerateCalls_f2f64475e4580546]);
      }

      ::org::orekit::utils::TimeStampedGenerator GenericTimeStampedCache::getGenerator() const
      {
        return ::org::orekit::utils::TimeStampedGenerator(env->callObjectMethod(this$, mids$[mid_getGenerator_aaa86a4e6cb88059]));
      }

      jint GenericTimeStampedCache::getGetNeighborsCalls() const
      {
        return env->callIntMethod(this$, mids$[mid_getGetNeighborsCalls_f2f64475e4580546]);
      }

      ::org::orekit::time::TimeStamped GenericTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_b6273cee359d7146]));
      }

      jint GenericTimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_f2f64475e4580546]);
      }

      jint GenericTimeStampedCache::getMaxSlots() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxSlots_f2f64475e4580546]);
      }

      jdouble GenericTimeStampedCache::getMaxSpan() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxSpan_456d9a2f64d6b28d]);
      }

      ::java::util::stream::Stream GenericTimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_1f145bd0decc1d0c], a0.this$, a1));
      }

      jdouble GenericTimeStampedCache::getNewSlotQuantumGap() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNewSlotQuantumGap_456d9a2f64d6b28d]);
      }

      jint GenericTimeStampedCache::getSlots() const
      {
        return env->callIntMethod(this$, mids$[mid_getSlots_f2f64475e4580546]);
      }

      jint GenericTimeStampedCache::getSlotsEvictions() const
      {
        return env->callIntMethod(this$, mids$[mid_getSlotsEvictions_f2f64475e4580546]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_GenericTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GenericTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GenericTimeStampedCache_of_(t_GenericTimeStampedCache *self, PyObject *args);
      static int t_GenericTimeStampedCache_init_(t_GenericTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GenericTimeStampedCache_getEarliest(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getEntries(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGenerateCalls(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGenerator(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGetNeighborsCalls(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getLatest(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxNeighborsSize(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxSlots(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxSpan(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getNeighbors(t_GenericTimeStampedCache *self, PyObject *args);
      static PyObject *t_GenericTimeStampedCache_getNewSlotQuantumGap(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getSlots(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getSlotsEvictions(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_get__earliest(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__entries(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__generateCalls(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__generator(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__getNeighborsCalls(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__latest(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxNeighborsSize(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxSlots(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxSpan(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__newSlotQuantumGap(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__slots(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__slotsEvictions(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__parameters_(t_GenericTimeStampedCache *self, void *data);
      static PyGetSetDef t_GenericTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, entries),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, generateCalls),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, generator),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, getNeighborsCalls),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxSlots),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxSpan),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, newSlotQuantumGap),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, slots),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, slotsEvictions),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GenericTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_GenericTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GenericTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GenericTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getEntries, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGenerateCalls, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGenerator, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGetNeighborsCalls, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxSlots, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxSpan, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getNeighbors, METH_VARARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getNewSlotQuantumGap, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getSlots, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getSlotsEvictions, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GenericTimeStampedCache)[] = {
        { Py_tp_methods, t_GenericTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_GenericTimeStampedCache_init_ },
        { Py_tp_getset, t_GenericTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GenericTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GenericTimeStampedCache, t_GenericTimeStampedCache, GenericTimeStampedCache);
      PyObject *t_GenericTimeStampedCache::wrap_Object(const GenericTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_GenericTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_GenericTimeStampedCache *self = (t_GenericTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_GenericTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_GenericTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_GenericTimeStampedCache *self = (t_GenericTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_GenericTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(GenericTimeStampedCache), &PY_TYPE_DEF(GenericTimeStampedCache), module, "GenericTimeStampedCache", 0);
      }

      void t_GenericTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "class_", make_descriptor(GenericTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "wrapfn_", make_descriptor(t_GenericTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        env->getClass(GenericTimeStampedCache::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "DEFAULT_CACHED_SLOTS_NUMBER", make_descriptor(GenericTimeStampedCache::DEFAULT_CACHED_SLOTS_NUMBER));
      }

      static PyObject *t_GenericTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GenericTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_GenericTimeStampedCache::wrap_Object(GenericTimeStampedCache(((t_GenericTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_GenericTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GenericTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GenericTimeStampedCache_of_(t_GenericTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_GenericTimeStampedCache_init_(t_GenericTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::utils::TimeStampedGenerator a4((jobject) NULL);
            PyTypeObject **p4;
            GenericTimeStampedCache object((jobject) NULL);

            if (!parseArgs(args, "IIDDK", ::org::orekit::utils::TimeStampedGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_TimeStampedGenerator::parameters_))
            {
              INT_CALL(object = GenericTimeStampedCache(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::utils::TimeStampedGenerator a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            GenericTimeStampedCache object((jobject) NULL);

            if (!parseArgs(args, "IIDDKD", ::org::orekit::utils::TimeStampedGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_TimeStampedGenerator::parameters_, &a5))
            {
              INT_CALL(object = GenericTimeStampedCache(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GenericTimeStampedCache_getEarliest(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_GenericTimeStampedCache_getEntries(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEntries());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getGenerateCalls(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGenerateCalls());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getGenerator(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::utils::TimeStampedGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGenerator());
        return ::org::orekit::utils::t_TimeStampedGenerator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_GenericTimeStampedCache_getGetNeighborsCalls(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGetNeighborsCalls());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getLatest(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxNeighborsSize(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxSlots(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxSlots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxSpan(t_GenericTimeStampedCache *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxSpan());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GenericTimeStampedCache_getNeighbors(t_GenericTimeStampedCache *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }

      static PyObject *t_GenericTimeStampedCache_getNewSlotQuantumGap(t_GenericTimeStampedCache *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNewSlotQuantumGap());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GenericTimeStampedCache_getSlots(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSlots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getSlotsEvictions(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSlotsEvictions());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_GenericTimeStampedCache_get__parameters_(t_GenericTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_GenericTimeStampedCache_get__earliest(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__entries(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEntries());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__generateCalls(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGenerateCalls());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__generator(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::utils::TimeStampedGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGenerator());
        return ::org::orekit::utils::t_TimeStampedGenerator::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__getNeighborsCalls(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGetNeighborsCalls());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__latest(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxNeighborsSize(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxSlots(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxSlots());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxSpan(t_GenericTimeStampedCache *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxSpan());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__newSlotQuantumGap(t_GenericTimeStampedCache *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNewSlotQuantumGap());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__slots(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSlots());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__slotsEvictions(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSlotsEvictions());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
