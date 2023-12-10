#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c0a7ac3a2f6ec5e0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Line;)V");
              mids$[mid_init$_972c17f71377e474] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_distance_09691e2da2b6004b] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_getEnd_6d781af269bebe5e] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getLength_456d9a2f64d6b28d] = env->getMethodID(cls, "getLength", "()D");
              mids$[mid_getLine_1c3be7522a7ffc91] = env->getMethodID(cls, "getLine", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_getStart_6d781af269bebe5e] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::geometry::euclidean::twod::Line & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c0a7ac3a2f6ec5e0, a0.this$, a1.this$, a2.this$)) {}

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_972c17f71377e474, a0.this$, a1.this$, a2)) {}

          jdouble Segment::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_09691e2da2b6004b], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Segment::getEnd() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getEnd_6d781af269bebe5e]));
          }

          jdouble Segment::getLength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLength_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Line Segment::getLine() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Line(env->callObjectMethod(this$, mids$[mid_getLine_1c3be7522a7ffc91]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Segment::getStart() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getStart_6d781af269bebe5e]));
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
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_distance(t_Segment *self, PyObject *arg);
          static PyObject *t_Segment_getEnd(t_Segment *self);
          static PyObject *t_Segment_getLength(t_Segment *self);
          static PyObject *t_Segment_getLine(t_Segment *self);
          static PyObject *t_Segment_getStart(t_Segment *self);
          static PyObject *t_Segment_get__end(t_Segment *self, void *data);
          static PyObject *t_Segment_get__length(t_Segment *self, void *data);
          static PyObject *t_Segment_get__line(t_Segment *self, void *data);
          static PyObject *t_Segment_get__start(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, end),
            DECLARE_GET_FIELD(t_Segment, length),
            DECLARE_GET_FIELD(t_Segment, line),
            DECLARE_GET_FIELD(t_Segment, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, distance, METH_O),
            DECLARE_METHOD(t_Segment, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getLength, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getLine, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Segment)[] = {
            { Py_tp_methods, t_Segment__methods_ },
            { Py_tp_init, (void *) t_Segment_init_ },
            { Py_tp_getset, t_Segment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Segment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Segment, t_Segment, Segment);

          void t_Segment::install(PyObject *module)
          {
            installType(&PY_TYPE(Segment), &PY_TYPE_DEF(Segment), module, "Segment", 0);
          }

          void t_Segment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "class_", make_descriptor(Segment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "wrapfn_", make_descriptor(t_Segment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Segment::initializeClass, 1)))
              return NULL;
            return t_Segment::wrap_Object(Segment(((t_Segment *) arg)->object.this$));
          }
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Segment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Line a2((jobject) NULL);
                Segment object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Line::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Segment(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                Segment object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Segment(a0, a1, a2));
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

          static PyObject *t_Segment_distance(t_Segment *self, PyObject *arg)
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

          static PyObject *t_Segment_getEnd(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Segment_getLength(t_Segment *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLength());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Segment_getLine(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::twod::t_Line::wrap_Object(result);
          }

          static PyObject *t_Segment_getStart(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Segment_get__end(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }

          static PyObject *t_Segment_get__length(t_Segment *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLength());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Segment_get__line(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::twod::t_Line::wrap_Object(value);
          }

          static PyObject *t_Segment_get__start(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *FieldShortTermEncounter2DDefinition::class$ = NULL;
              jmethodID *FieldShortTermEncounter2DDefinition::mids$ = NULL;
              bool FieldShortTermEncounter2DDefinition::live$ = false;

              jclass FieldShortTermEncounter2DDefinition::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_cbf513bc9302670f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_init$_15dcfdb5ff14d6af] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_init$_8359ecda26c1451a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_init$_f30a8d41195015cd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_computeCombinedCovarianceInEncounterFrame_c95f6876e2bce52e] = env->getMethodID(cls, "computeCombinedCovarianceInEncounterFrame", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_computeCombinedCovarianceInReferenceTNW_c95f6876e2bce52e] = env->getMethodID(cls, "computeCombinedCovarianceInReferenceTNW", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_computeCoppolaEncounterDuration_e6d4d3215c30992a] = env->getMethodID(cls, "computeCoppolaEncounterDuration", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMahalanobisDistance_e6d4d3215c30992a] = env->getMethodID(cls, "computeMahalanobisDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMahalanobisDistance_cc0a3d6abf820939] = env->getMethodID(cls, "computeMahalanobisDistance", "(D)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMissDistance_e6d4d3215c30992a] = env->getMethodID(cls, "computeMissDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeOtherPositionInCollisionPlane_1f4b20c9530c3106] = env->getMethodID(cls, "computeOtherPositionInCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_1f4b20c9530c3106] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_d585e03ae746190d] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "(D)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_239ccd4fbdc5d04d] = env->getMethodID(cls, "computeOtherRelativeToReferencePVInReferenceInertial", "()Lorg/orekit/utils/FieldPVCoordinates;");
                  mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_cc77900a647586cf] = env->getMethodID(cls, "computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_cc77900a647586cf] = env->getMethodID(cls, "computeProjectedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_cc77900a647586cf] = env->getMethodID(cls, "computeReferenceInertialToCollisionPlaneProjectionMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeSquaredMahalanobisDistance_e6d4d3215c30992a] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_cc0a3d6abf820939] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "(D)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_4c2be837be7de03e] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_0062d53dab8088fa] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getCombinedRadius_e6d4d3215c30992a] = env->getMethodID(cls, "getCombinedRadius", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getEncounterFrame_b6be411bef36c8d5] = env->getMethodID(cls, "getEncounterFrame", "()Lorg/orekit/frames/encounter/EncounterLOF;");
                  mids$[mid_getOtherAtTCA_2f26cad5f478f007] = env->getMethodID(cls, "getOtherAtTCA", "()Lorg/orekit/orbits/FieldOrbit;");
                  mids$[mid_getOtherCovariance_c95f6876e2bce52e] = env->getMethodID(cls, "getOtherCovariance", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_getReferenceAtTCA_2f26cad5f478f007] = env->getMethodID(cls, "getReferenceAtTCA", "()Lorg/orekit/orbits/FieldOrbit;");
                  mids$[mid_getReferenceCovariance_c95f6876e2bce52e] = env->getMethodID(cls, "getReferenceCovariance", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_getTca_09b0a926600dfc14] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/FieldAbsoluteDate;");
                  mids$[mid_toEncounter_d5da1a7ce212932e] = env->getMethodID(cls, "toEncounter", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cbf513bc9302670f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15dcfdb5ff14d6af, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::encounter::EncounterLOFType & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8359ecda26c1451a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::frames::encounter::EncounterLOFType & a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f30a8d41195015cd, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7)) {}

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::computeCombinedCovarianceInEncounterFrame() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInEncounterFrame_c95f6876e2bce52e]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::computeCombinedCovarianceInReferenceTNW() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInReferenceTNW_c95f6876e2bce52e]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeCoppolaEncounterDuration() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeCoppolaEncounterDuration_e6d4d3215c30992a]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMahalanobisDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMahalanobisDistance_e6d4d3215c30992a]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMahalanobisDistance(jdouble a0) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMahalanobisDistance_cc0a3d6abf820939], a0));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMissDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMissDistance_e6d4d3215c30992a]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInCollisionPlane_1f4b20c9530c3106]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_1f4b20c9530c3106]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane(jdouble a0) const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_d585e03ae746190d], a0));
              }

              ::org::orekit::utils::FieldPVCoordinates FieldShortTermEncounter2DDefinition::computeOtherRelativeToReferencePVInReferenceInertial() const
              {
                return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_239ccd4fbdc5d04d]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_cc77900a647586cf]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeProjectedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_cc77900a647586cf]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeReferenceInertialToCollisionPlaneProjectionMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_cc77900a647586cf]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_e6d4d3215c30992a]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_cc0a3d6abf820939], a0));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0, const ::org::hipparchus::linear::FieldMatrix & a1)
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_4c2be837be7de03e], a0.this$, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_0062d53dab8088fa], a0.this$, a1.this$, a2.this$, a3.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::getCombinedRadius() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCombinedRadius_e6d4d3215c30992a]));
              }

              ::org::orekit::frames::encounter::EncounterLOF FieldShortTermEncounter2DDefinition::getEncounterFrame() const
              {
                return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getEncounterFrame_b6be411bef36c8d5]));
              }

              ::org::orekit::orbits::FieldOrbit FieldShortTermEncounter2DDefinition::getOtherAtTCA() const
              {
                return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOtherAtTCA_2f26cad5f478f007]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::getOtherCovariance() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_getOtherCovariance_c95f6876e2bce52e]));
              }

              ::org::orekit::orbits::FieldOrbit FieldShortTermEncounter2DDefinition::getReferenceAtTCA() const
              {
                return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getReferenceAtTCA_2f26cad5f478f007]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::getReferenceCovariance() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_getReferenceCovariance_c95f6876e2bce52e]));
              }

              ::org::orekit::time::FieldAbsoluteDate FieldShortTermEncounter2DDefinition::getTca() const
              {
                return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_09b0a926600dfc14]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition FieldShortTermEncounter2DDefinition::toEncounter() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition(env->callObjectMethod(this$, mids$[mid_toEncounter_d5da1a7ce212932e]));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_FieldShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldShortTermEncounter2DDefinition_of_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static int t_FieldShortTermEncounter2DDefinition_init_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMissDistance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getCombinedRadius(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getEncounterFrame(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherAtTCA(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherCovariance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceAtTCA(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceCovariance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getTca(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_toEncounter(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__combinedRadius(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__encounterFrame(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__tca(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__parameters_(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyGetSetDef t_FieldShortTermEncounter2DDefinition__fields_[] = {
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, combinedRadius),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, encounterFrame),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, otherAtTCA),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, otherCovariance),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, referenceAtTCA),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, referenceCovariance),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, tca),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldShortTermEncounter2DDefinition__methods_[] = {
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCombinedCovarianceInEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCombinedCovarianceInReferenceTNW, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCoppolaEncounterDuration, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeMissDistance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherPositionInCollisionPlane, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherPositionInRotatedCollisionPlane, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherRelativeToReferencePVInReferenceInertial, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeProjectedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeReferenceInertialToCollisionPlaneProjectionMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance_, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getCombinedRadius, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getOtherAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getOtherCovariance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getReferenceAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getReferenceCovariance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getTca, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, toEncounter, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldShortTermEncounter2DDefinition)[] = {
                { Py_tp_methods, t_FieldShortTermEncounter2DDefinition__methods_ },
                { Py_tp_init, (void *) t_FieldShortTermEncounter2DDefinition_init_ },
                { Py_tp_getset, t_FieldShortTermEncounter2DDefinition__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldShortTermEncounter2DDefinition)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldShortTermEncounter2DDefinition, t_FieldShortTermEncounter2DDefinition, FieldShortTermEncounter2DDefinition);
              PyObject *t_FieldShortTermEncounter2DDefinition::wrap_Object(const FieldShortTermEncounter2DDefinition& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldShortTermEncounter2DDefinition::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldShortTermEncounter2DDefinition *self = (t_FieldShortTermEncounter2DDefinition *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldShortTermEncounter2DDefinition::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldShortTermEncounter2DDefinition::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldShortTermEncounter2DDefinition *self = (t_FieldShortTermEncounter2DDefinition *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldShortTermEncounter2DDefinition::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldShortTermEncounter2DDefinition), &PY_TYPE_DEF(FieldShortTermEncounter2DDefinition), module, "FieldShortTermEncounter2DDefinition", 0);
              }

              void t_FieldShortTermEncounter2DDefinition::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "class_", make_descriptor(FieldShortTermEncounter2DDefinition::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "wrapfn_", make_descriptor(t_FieldShortTermEncounter2DDefinition::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldShortTermEncounter2DDefinition::initializeClass, 1)))
                  return NULL;
                return t_FieldShortTermEncounter2DDefinition::wrap_Object(FieldShortTermEncounter2DDefinition(((t_FieldShortTermEncounter2DDefinition *) arg)->object.this$));
              }
              static PyObject *t_FieldShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldShortTermEncounter2DDefinition::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_of_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldShortTermEncounter2DDefinition_init_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 7:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::frames::encounter::EncounterLOFType a5((jobject) NULL);
                    PyTypeObject **p5;
                    jdouble a6;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a6))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 8:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    ::org::orekit::frames::encounter::EncounterLOFType a6((jobject) NULL);
                    PyTypeObject **p6;
                    jdouble a7;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a7))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6, a7));
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

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInEncounterFrame());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInReferenceTNW());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCoppolaEncounterDuration());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeMahalanobisDistance());
                    return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeMahalanobisDistance(a0));
                      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMissDistance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.computeMissDistance());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherPositionInCollisionPlane());
                return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane());
                    return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane(a0));
                      return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeOtherPositionInRotatedCollisionPlane", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherRelativeToReferencePVInReferenceInertial());
                return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeReferenceInertialToCollisionPlaneProjectionMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance());
                    return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance(a0));
                      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeSquaredMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                  break;
                 case 4:
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1, a2, a3));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError(type, "computeSquaredMahalanobisDistance_", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getCombinedRadius(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.getCombinedRadius());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getEncounterFrame(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);
                OBJ_CALL(result = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherAtTCA(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherCovariance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceAtTCA(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceCovariance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getTca(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTca());
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_toEncounter(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition result((jobject) NULL);
                OBJ_CALL(result = self->object.toEncounter());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DDefinition::wrap_Object(result);
              }
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__parameters_(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__combinedRadius(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
                OBJ_CALL(value = self->object.getCombinedRadius());
                return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__encounterFrame(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::frames::encounter::EncounterLOF value((jobject) NULL);
                OBJ_CALL(value = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::FieldStateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::FieldStateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__tca(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTca());
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
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
#include "org/orekit/gnss/rflink/gps/SubFrame4A1.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A1::class$ = NULL;
          jmethodID *SubFrame4A1::mids$ = NULL;
          bool SubFrame4A1::live$ = false;

          jclass SubFrame4A1::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A1");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4A1_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A1_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrame4A1__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A1, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A1, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A1)[] = {
            { Py_tp_methods, t_SubFrame4A1__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A1)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame4A),
            NULL
          };

          DEFINE_TYPE(SubFrame4A1, t_SubFrame4A1, SubFrame4A1);

          void t_SubFrame4A1::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A1), &PY_TYPE_DEF(SubFrame4A1), module, "SubFrame4A1", 0);
          }

          void t_SubFrame4A1::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "class_", make_descriptor(SubFrame4A1::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "wrapfn_", make_descriptor(t_SubFrame4A1::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A1_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A1::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A1::wrap_Object(SubFrame4A1(((t_SubFrame4A1 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A1_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A1::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative2Field::class$ = NULL;
        jmethodID *UnivariateDerivative2Field::mids$ = NULL;
        bool UnivariateDerivative2Field::live$ = false;

        jclass UnivariateDerivative2Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative2Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getInstance_416e8ca9aac6db67] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2Field;");
            mids$[mid_getOne_347b0c8405a5a6a6] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_347b0c8405a5a6a6] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean UnivariateDerivative2Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        UnivariateDerivative2Field UnivariateDerivative2Field::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative2Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_416e8ca9aac6db67]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 UnivariateDerivative2Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getOne_347b0c8405a5a6a6]));
        }

        ::java::lang::Class UnivariateDerivative2Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 UnivariateDerivative2Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getZero_347b0c8405a5a6a6]));
        }

        jint UnivariateDerivative2Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
    namespace analysis {
      namespace differentiation {
        static PyObject *t_UnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2Field_equals(t_UnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2Field_getInstance(PyTypeObject *type);
        static PyObject *t_UnivariateDerivative2Field_getOne(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_getRuntimeClass(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_getZero(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_hashCode(t_UnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2Field_get__instance(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__one(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__runtimeClass(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__zero(t_UnivariateDerivative2Field *self, void *data);
        static PyGetSetDef t_UnivariateDerivative2Field__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, instance),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, one),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, runtimeClass),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative2Field__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative2Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative2Field)[] = {
          { Py_tp_methods, t_UnivariateDerivative2Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateDerivative2Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative2Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative2Field, t_UnivariateDerivative2Field, UnivariateDerivative2Field);

        void t_UnivariateDerivative2Field::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative2Field), &PY_TYPE_DEF(UnivariateDerivative2Field), module, "UnivariateDerivative2Field", 0);
        }

        void t_UnivariateDerivative2Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "class_", make_descriptor(UnivariateDerivative2Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "wrapfn_", make_descriptor(t_UnivariateDerivative2Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative2Field::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative2Field::wrap_Object(UnivariateDerivative2Field(((t_UnivariateDerivative2Field *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative2Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative2Field_equals(t_UnivariateDerivative2Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative2Field_getInstance(PyTypeObject *type)
        {
          UnivariateDerivative2Field result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field::getInstance());
          return t_UnivariateDerivative2Field::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_getOne(t_UnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_getRuntimeClass(t_UnivariateDerivative2Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
        }

        static PyObject *t_UnivariateDerivative2Field_getZero(t_UnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_hashCode(t_UnivariateDerivative2Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2Field), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative2Field_get__instance(t_UnivariateDerivative2Field *self, void *data)
        {
          UnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_UnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__one(t_UnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__runtimeClass(t_UnivariateDerivative2Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__zero(t_UnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCombinedCorrectionData::class$ = NULL;
              jmethodID *RtcmCombinedCorrectionData::mids$ = NULL;
              bool RtcmCombinedCorrectionData::live$ = false;

              jclass RtcmCombinedCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_ca1c0bf5185bdc62] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_getGnssIod_f2f64475e4580546] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_7cd8e64b85aa1635] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setClockCorrection_a1424ed96e1e854b] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");
                  mids$[mid_setGnssIod_0a2a1ac2721c0336] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_d62793cb3669987a] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCombinedCorrectionData::RtcmCombinedCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection RtcmCombinedCorrectionData::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_ca1c0bf5185bdc62]));
              }

              jint RtcmCombinedCorrectionData::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_f2f64475e4580546]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection RtcmCombinedCorrectionData::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_7cd8e64b85aa1635]));
              }

              void RtcmCombinedCorrectionData::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_a1424ed96e1e854b], a0.this$);
              }

              void RtcmCombinedCorrectionData::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_0a2a1ac2721c0336], a0);
              }

              void RtcmCombinedCorrectionData::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_d62793cb3669987a], a0.this$);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmCombinedCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCombinedCorrectionData_init_(t_RtcmCombinedCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCombinedCorrectionData_getClockCorrection(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_getGnssIod(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_getOrbitCorrection(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_setClockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_setGnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_setOrbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_get__clockCorrection(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__clockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCombinedCorrectionData_get__gnssIod(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__gnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCombinedCorrectionData_get__orbitCorrection(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__orbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCombinedCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, clockCorrection),
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, gnssIod),
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCombinedCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setClockCorrection, METH_O),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setGnssIod, METH_O),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCombinedCorrectionData)[] = {
                { Py_tp_methods, t_RtcmCombinedCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmCombinedCorrectionData_init_ },
                { Py_tp_getset, t_RtcmCombinedCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCombinedCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmCombinedCorrectionData, t_RtcmCombinedCorrectionData, RtcmCombinedCorrectionData);

              void t_RtcmCombinedCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCombinedCorrectionData), &PY_TYPE_DEF(RtcmCombinedCorrectionData), module, "RtcmCombinedCorrectionData", 0);
              }

              void t_RtcmCombinedCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "class_", make_descriptor(RtcmCombinedCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "wrapfn_", make_descriptor(t_RtcmCombinedCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCombinedCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCombinedCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmCombinedCorrectionData::wrap_Object(RtcmCombinedCorrectionData(((t_RtcmCombinedCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmCombinedCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCombinedCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCombinedCorrectionData_init_(t_RtcmCombinedCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmCombinedCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmCombinedCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCombinedCorrectionData_getClockCorrection(t_RtcmCombinedCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_getGnssIod(t_RtcmCombinedCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_getOrbitCorrection(t_RtcmCombinedCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_setClockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmCombinedCorrectionData_setGnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_RtcmCombinedCorrectionData_setOrbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmCombinedCorrectionData_get__clockCorrection(t_RtcmCombinedCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_RtcmCombinedCorrectionData_set__clockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
                return -1;
              }

              static PyObject *t_RtcmCombinedCorrectionData_get__gnssIod(t_RtcmCombinedCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCombinedCorrectionData_set__gnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_RtcmCombinedCorrectionData_get__orbitCorrection(t_RtcmCombinedCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_RtcmCombinedCorrectionData_set__orbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
                return -1;
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
#include "org/hipparchus/stat/descriptive/vector/VectorialCovariance.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          ::java::lang::Class *VectorialCovariance::class$ = NULL;
          jmethodID *VectorialCovariance::mids$ = NULL;
          bool VectorialCovariance::live$ = false;

          jclass VectorialCovariance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/vector/VectorialCovariance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bc79bc153a2b3c2e] = env->getMethodID(cls, "<init>", "(IZ)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_7116bbecdd8ceb21] = env->getMethodID(cls, "getResult", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_ebc26dcaf4761286] = env->getMethodID(cls, "increment", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          VectorialCovariance::VectorialCovariance(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc79bc153a2b3c2e, a0, a1)) {}

          void VectorialCovariance::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          jboolean VectorialCovariance::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          jlong VectorialCovariance::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          ::org::hipparchus::linear::RealMatrix VectorialCovariance::getResult() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getResult_7116bbecdd8ceb21]));
          }

          jint VectorialCovariance::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          void VectorialCovariance::increment(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_ebc26dcaf4761286], a0.this$);
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
        namespace vector {
          static PyObject *t_VectorialCovariance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_VectorialCovariance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_VectorialCovariance_init_(t_VectorialCovariance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_VectorialCovariance_clear(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_equals(t_VectorialCovariance *self, PyObject *args);
          static PyObject *t_VectorialCovariance_getN(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_getResult(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_hashCode(t_VectorialCovariance *self, PyObject *args);
          static PyObject *t_VectorialCovariance_increment(t_VectorialCovariance *self, PyObject *arg);
          static PyObject *t_VectorialCovariance_get__n(t_VectorialCovariance *self, void *data);
          static PyObject *t_VectorialCovariance_get__result(t_VectorialCovariance *self, void *data);
          static PyGetSetDef t_VectorialCovariance__fields_[] = {
            DECLARE_GET_FIELD(t_VectorialCovariance, n),
            DECLARE_GET_FIELD(t_VectorialCovariance, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_VectorialCovariance__methods_[] = {
            DECLARE_METHOD(t_VectorialCovariance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialCovariance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialCovariance, clear, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, equals, METH_VARARGS),
            DECLARE_METHOD(t_VectorialCovariance, getN, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, getResult, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_VectorialCovariance, increment, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(VectorialCovariance)[] = {
            { Py_tp_methods, t_VectorialCovariance__methods_ },
            { Py_tp_init, (void *) t_VectorialCovariance_init_ },
            { Py_tp_getset, t_VectorialCovariance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(VectorialCovariance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(VectorialCovariance, t_VectorialCovariance, VectorialCovariance);

          void t_VectorialCovariance::install(PyObject *module)
          {
            installType(&PY_TYPE(VectorialCovariance), &PY_TYPE_DEF(VectorialCovariance), module, "VectorialCovariance", 0);
          }

          void t_VectorialCovariance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "class_", make_descriptor(VectorialCovariance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "wrapfn_", make_descriptor(t_VectorialCovariance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_VectorialCovariance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, VectorialCovariance::initializeClass, 1)))
              return NULL;
            return t_VectorialCovariance::wrap_Object(VectorialCovariance(((t_VectorialCovariance *) arg)->object.this$));
          }
          static PyObject *t_VectorialCovariance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, VectorialCovariance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_VectorialCovariance_init_(t_VectorialCovariance *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jboolean a1;
            VectorialCovariance object((jobject) NULL);

            if (!parseArgs(args, "IZ", &a0, &a1))
            {
              INT_CALL(object = VectorialCovariance(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_VectorialCovariance_clear(t_VectorialCovariance *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_VectorialCovariance_equals(t_VectorialCovariance *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(VectorialCovariance), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_VectorialCovariance_getN(t_VectorialCovariance *self)
          {
            jlong result;
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }

          static PyObject *t_VectorialCovariance_getResult(t_VectorialCovariance *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getResult());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_VectorialCovariance_hashCode(t_VectorialCovariance *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(VectorialCovariance), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_VectorialCovariance_increment(t_VectorialCovariance *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "increment", arg);
            return NULL;
          }

          static PyObject *t_VectorialCovariance_get__n(t_VectorialCovariance *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_VectorialCovariance_get__result(t_VectorialCovariance *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getResult());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Tuple.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/Tuple.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Tuple::class$ = NULL;
      jmethodID *Tuple::mids$ = NULL;
      bool Tuple::live$ = false;

      jclass Tuple::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Tuple");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_abs_963b4d2ebe4fb63a] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_acos_963b4d2ebe4fb63a] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_acosh_963b4d2ebe4fb63a] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_add_c7f42f4b622b3d8f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_add_98e8fb71f9cf92f0] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_asin_963b4d2ebe4fb63a] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_asinh_963b4d2ebe4fb63a] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_atan_963b4d2ebe4fb63a] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_atan2_c7f42f4b622b3d8f] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_atanh_963b4d2ebe4fb63a] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_cbrt_963b4d2ebe4fb63a] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_ceil_963b4d2ebe4fb63a] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_copySign_c7f42f4b622b3d8f] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_copySign_98e8fb71f9cf92f0] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_cos_963b4d2ebe4fb63a] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_cosh_963b4d2ebe4fb63a] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_divide_c7f42f4b622b3d8f] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_divide_98e8fb71f9cf92f0] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_963b4d2ebe4fb63a] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_expm1_963b4d2ebe4fb63a] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_floor_963b4d2ebe4fb63a] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_getComponent_b772323fc98b7293] = env->getMethodID(cls, "getComponent", "(I)D");
          mids$[mid_getComponents_7cdc325af0834901] = env->getMethodID(cls, "getComponents", "()[D");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_963b4d2ebe4fb63a] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_c7f42f4b622b3d8f] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_bfc561e080507c13] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_cd5908fe60eab4dc] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/Tuple;[Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_d12a4653f404e86e] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_8ff90fae2977f9f8] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_da4ab078c018e53e] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_18ac515651db94ce] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_c745d1a5b4e505bd] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_296ab47b79aef07f] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_log_963b4d2ebe4fb63a] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_log10_963b4d2ebe4fb63a] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_log1p_963b4d2ebe4fb63a] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_c7f42f4b622b3d8f] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_98e8fb71f9cf92f0] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_3c2eb2f03dc9bc61] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_negate_963b4d2ebe4fb63a] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_newInstance_98e8fb71f9cf92f0] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_c7f42f4b622b3d8f] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_98e8fb71f9cf92f0] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_3c2eb2f03dc9bc61] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_reciprocal_963b4d2ebe4fb63a] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_remainder_c7f42f4b622b3d8f] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_remainder_98e8fb71f9cf92f0] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_rint_963b4d2ebe4fb63a] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_rootN_3c2eb2f03dc9bc61] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_scalb_3c2eb2f03dc9bc61] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_sign_963b4d2ebe4fb63a] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sin_963b4d2ebe4fb63a] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_963b4d2ebe4fb63a] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_963b4d2ebe4fb63a] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_subtract_c7f42f4b622b3d8f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_subtract_98e8fb71f9cf92f0] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_tan_963b4d2ebe4fb63a] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_tanh_963b4d2ebe4fb63a] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_toDegrees_963b4d2ebe4fb63a] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_toRadians_963b4d2ebe4fb63a] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_ulp_963b4d2ebe4fb63a] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/Tuple;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Tuple::Tuple(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

      Tuple Tuple::abs() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_abs_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::acos() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_acos_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::acosh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_acosh_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::add(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_add_c7f42f4b622b3d8f], a0.this$));
      }

      Tuple Tuple::add(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_add_98e8fb71f9cf92f0], a0));
      }

      Tuple Tuple::asin() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_asin_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::asinh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_asinh_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::atan() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atan_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::atan2(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atan2_c7f42f4b622b3d8f], a0.this$));
      }

      Tuple Tuple::atanh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atanh_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::cbrt() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cbrt_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::ceil() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_ceil_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::copySign(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_copySign_c7f42f4b622b3d8f], a0.this$));
      }

      Tuple Tuple::copySign(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_copySign_98e8fb71f9cf92f0], a0));
      }

      Tuple Tuple::cos() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cos_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::cosh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cosh_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::divide(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_divide_c7f42f4b622b3d8f], a0.this$));
      }

      Tuple Tuple::divide(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_divide_98e8fb71f9cf92f0], a0));
      }

      jboolean Tuple::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      Tuple Tuple::exp() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_exp_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::expm1() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_expm1_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::floor() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_floor_963b4d2ebe4fb63a]));
      }

      jdouble Tuple::getComponent(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getComponent_b772323fc98b7293], a0);
      }

      JArray< jdouble > Tuple::getComponents() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getComponents_7cdc325af0834901]));
      }

      jint Tuple::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::Field Tuple::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      Tuple Tuple::getPi() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_getPi_963b4d2ebe4fb63a]));
      }

      jdouble Tuple::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
      }

      jint Tuple::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      Tuple Tuple::hypot(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_hypot_c7f42f4b622b3d8f], a0.this$));
      }

      Tuple Tuple::linearCombination(const JArray< jdouble > & a0, const JArray< Tuple > & a1) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_bfc561e080507c13], a0.this$, a1.this$));
      }

      Tuple Tuple::linearCombination(const JArray< Tuple > & a0, const JArray< Tuple > & a1) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_cd5908fe60eab4dc], a0.this$, a1.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_d12a4653f404e86e], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_8ff90fae2977f9f8], a0, a1.this$, a2, a3.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3, const Tuple & a4, const Tuple & a5) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_da4ab078c018e53e], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3, jdouble a4, const Tuple & a5) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_18ac515651db94ce], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3, const Tuple & a4, const Tuple & a5, const Tuple & a6, const Tuple & a7) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_c745d1a5b4e505bd], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3, jdouble a4, const Tuple & a5, jdouble a6, const Tuple & a7) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_296ab47b79aef07f], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Tuple Tuple::log() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::log10() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log10_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::log1p() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log1p_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::multiply(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_c7f42f4b622b3d8f], a0.this$));
      }

      Tuple Tuple::multiply(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_98e8fb71f9cf92f0], a0));
      }

      Tuple Tuple::multiply(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_3c2eb2f03dc9bc61], a0));
      }

      Tuple Tuple::negate() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_negate_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::newInstance(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_newInstance_98e8fb71f9cf92f0], a0));
      }

      Tuple Tuple::pow(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_c7f42f4b622b3d8f], a0.this$));
      }

      Tuple Tuple::pow(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_98e8fb71f9cf92f0], a0));
      }

      Tuple Tuple::pow(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_3c2eb2f03dc9bc61], a0));
      }

      Tuple Tuple::reciprocal() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_reciprocal_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::remainder(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_remainder_c7f42f4b622b3d8f], a0.this$));
      }

      Tuple Tuple::remainder(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_remainder_98e8fb71f9cf92f0], a0));
      }

      Tuple Tuple::rint() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_rint_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::rootN(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_rootN_3c2eb2f03dc9bc61], a0));
      }

      Tuple Tuple::scalb(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_scalb_3c2eb2f03dc9bc61], a0));
      }

      Tuple Tuple::sign() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sign_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::sin() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sin_963b4d2ebe4fb63a]));
      }

      ::org::hipparchus::util::FieldSinCos Tuple::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
      }

      Tuple Tuple::sinh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sinh_963b4d2ebe4fb63a]));
      }

      ::org::hipparchus::util::FieldSinhCosh Tuple::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
      }

      Tuple Tuple::sqrt() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sqrt_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::subtract(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_subtract_c7f42f4b622b3d8f], a0.this$));
      }

      Tuple Tuple::subtract(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_subtract_98e8fb71f9cf92f0], a0));
      }

      Tuple Tuple::tan() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_tan_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::tanh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_tanh_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::toDegrees() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_toDegrees_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::toRadians() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_toRadians_963b4d2ebe4fb63a]));
      }

      Tuple Tuple::ulp() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_ulp_963b4d2ebe4fb63a]));
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
      static PyObject *t_Tuple_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Tuple_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Tuple_init_(t_Tuple *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Tuple_abs(t_Tuple *self);
      static PyObject *t_Tuple_acos(t_Tuple *self);
      static PyObject *t_Tuple_acosh(t_Tuple *self);
      static PyObject *t_Tuple_add(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_asin(t_Tuple *self);
      static PyObject *t_Tuple_asinh(t_Tuple *self);
      static PyObject *t_Tuple_atan(t_Tuple *self);
      static PyObject *t_Tuple_atan2(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_atanh(t_Tuple *self);
      static PyObject *t_Tuple_cbrt(t_Tuple *self);
      static PyObject *t_Tuple_ceil(t_Tuple *self);
      static PyObject *t_Tuple_copySign(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_cos(t_Tuple *self);
      static PyObject *t_Tuple_cosh(t_Tuple *self);
      static PyObject *t_Tuple_divide(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_equals(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_exp(t_Tuple *self);
      static PyObject *t_Tuple_expm1(t_Tuple *self);
      static PyObject *t_Tuple_floor(t_Tuple *self);
      static PyObject *t_Tuple_getComponent(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_getComponents(t_Tuple *self);
      static PyObject *t_Tuple_getDimension(t_Tuple *self);
      static PyObject *t_Tuple_getField(t_Tuple *self);
      static PyObject *t_Tuple_getPi(t_Tuple *self);
      static PyObject *t_Tuple_getReal(t_Tuple *self);
      static PyObject *t_Tuple_hashCode(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_hypot(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_linearCombination(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_log(t_Tuple *self);
      static PyObject *t_Tuple_log10(t_Tuple *self);
      static PyObject *t_Tuple_log1p(t_Tuple *self);
      static PyObject *t_Tuple_multiply(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_negate(t_Tuple *self);
      static PyObject *t_Tuple_newInstance(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_pow(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_reciprocal(t_Tuple *self);
      static PyObject *t_Tuple_remainder(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_rint(t_Tuple *self);
      static PyObject *t_Tuple_rootN(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_scalb(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_sign(t_Tuple *self);
      static PyObject *t_Tuple_sin(t_Tuple *self);
      static PyObject *t_Tuple_sinCos(t_Tuple *self);
      static PyObject *t_Tuple_sinh(t_Tuple *self);
      static PyObject *t_Tuple_sinhCosh(t_Tuple *self);
      static PyObject *t_Tuple_sqrt(t_Tuple *self);
      static PyObject *t_Tuple_subtract(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_tan(t_Tuple *self);
      static PyObject *t_Tuple_tanh(t_Tuple *self);
      static PyObject *t_Tuple_toDegrees(t_Tuple *self);
      static PyObject *t_Tuple_toRadians(t_Tuple *self);
      static PyObject *t_Tuple_ulp(t_Tuple *self);
      static PyObject *t_Tuple_get__components(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__dimension(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__field(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__pi(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__real(t_Tuple *self, void *data);
      static PyGetSetDef t_Tuple__fields_[] = {
        DECLARE_GET_FIELD(t_Tuple, components),
        DECLARE_GET_FIELD(t_Tuple, dimension),
        DECLARE_GET_FIELD(t_Tuple, field),
        DECLARE_GET_FIELD(t_Tuple, pi),
        DECLARE_GET_FIELD(t_Tuple, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Tuple__methods_[] = {
        DECLARE_METHOD(t_Tuple, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Tuple, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Tuple, abs, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, acos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, add, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, asin, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, atan, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, atan2, METH_O),
        DECLARE_METHOD(t_Tuple, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, cos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, divide, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, equals, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, exp, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, floor, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getComponent, METH_O),
        DECLARE_METHOD(t_Tuple, getComponents, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getField, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, hypot, METH_O),
        DECLARE_METHOD(t_Tuple, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, log, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, log10, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, negate, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, newInstance, METH_O),
        DECLARE_METHOD(t_Tuple, pow, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, rint, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, rootN, METH_O),
        DECLARE_METHOD(t_Tuple, scalb, METH_O),
        DECLARE_METHOD(t_Tuple, sign, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sin, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, tan, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Tuple)[] = {
        { Py_tp_methods, t_Tuple__methods_ },
        { Py_tp_init, (void *) t_Tuple_init_ },
        { Py_tp_getset, t_Tuple__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Tuple)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Tuple, t_Tuple, Tuple);

      void t_Tuple::install(PyObject *module)
      {
        installType(&PY_TYPE(Tuple), &PY_TYPE_DEF(Tuple), module, "Tuple", 0);
      }

      void t_Tuple::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "class_", make_descriptor(Tuple::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "wrapfn_", make_descriptor(t_Tuple::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Tuple_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Tuple::initializeClass, 1)))
          return NULL;
        return t_Tuple::wrap_Object(Tuple(((t_Tuple *) arg)->object.this$));
      }
      static PyObject *t_Tuple_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Tuple::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Tuple_init_(t_Tuple *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        Tuple object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = Tuple(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Tuple_abs(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_acos(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_acosh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_add(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Tuple_asin(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_asinh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_atan(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_atan2(t_Tuple *self, PyObject *arg)
      {
        Tuple a0((jobject) NULL);
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "k", Tuple::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Tuple_atanh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_cbrt(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_ceil(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_copySign(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Tuple_cos(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_cosh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_divide(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Tuple_equals(t_Tuple *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Tuple), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Tuple_exp(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_expm1(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_floor(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_getComponent(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getComponent(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getComponent", arg);
        return NULL;
      }

      static PyObject *t_Tuple_getComponents(t_Tuple *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getComponents());
        return result.wrap();
      }

      static PyObject *t_Tuple_getDimension(t_Tuple *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Tuple_getField(t_Tuple *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_getPi(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_getReal(t_Tuple *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Tuple_hashCode(t_Tuple *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Tuple), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Tuple_hypot(t_Tuple *self, PyObject *arg)
      {
        Tuple a0((jobject) NULL);
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "k", Tuple::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Tuple_linearCombination(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Tuple > a1((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Tuple::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            JArray< Tuple > a0((jobject) NULL);
            JArray< Tuple > a1((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Tuple::initializeClass, Tuple::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple a4((jobject) NULL);
            Tuple a5((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            jdouble a4;
            Tuple a5((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple a4((jobject) NULL);
            Tuple a5((jobject) NULL);
            Tuple a6((jobject) NULL);
            Tuple a7((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            jdouble a4;
            Tuple a5((jobject) NULL);
            jdouble a6;
            Tuple a7((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Tuple_log(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_log10(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_log1p(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_multiply(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jint a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Tuple_negate(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_newInstance(t_Tuple *self, PyObject *arg)
      {
        jdouble a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Tuple_pow(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jint a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Tuple_reciprocal(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_remainder(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Tuple_rint(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_rootN(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Tuple_scalb(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Tuple_sign(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sin(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sinCos(t_Tuple *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_sinh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sinhCosh(t_Tuple *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_sqrt(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_subtract(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Tuple_tan(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_tanh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_toDegrees(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_toRadians(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_ulp(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_get__components(t_Tuple *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getComponents());
        return value.wrap();
      }

      static PyObject *t_Tuple_get__dimension(t_Tuple *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Tuple_get__field(t_Tuple *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_Tuple_get__pi(t_Tuple *self, void *data)
      {
        Tuple value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Tuple::wrap_Object(value);
      }

      static PyObject *t_Tuple_get__real(t_Tuple *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *DenseOutputModel::class$ = NULL;
      jmethodID *DenseOutputModel::mids$ = NULL;
      bool DenseOutputModel::live$ = false;

      jclass DenseOutputModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/DenseOutputModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_append_2d53ab9c410c1d8f] = env->getMethodID(cls, "append", "(Lorg/hipparchus/ode/DenseOutputModel;)V");
          mids$[mid_finish_100c57fd45963f6d] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
          mids$[mid_getFinalTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getFinalTime", "()D");
          mids$[mid_getInitialTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getInitialTime", "()D");
          mids$[mid_getInterpolatedState_05e60c2c1f1796ae] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_handleStep_7f7ea329b6669cd2] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
          mids$[mid_init_85808f3d6374b436] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DenseOutputModel::DenseOutputModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void DenseOutputModel::append(const DenseOutputModel & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_append_2d53ab9c410c1d8f], a0.this$);
      }

      void DenseOutputModel::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_finish_100c57fd45963f6d], a0.this$);
      }

      jdouble DenseOutputModel::getFinalTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFinalTime_456d9a2f64d6b28d]);
      }

      jdouble DenseOutputModel::getInitialTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getInitialTime_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::ode::ODEStateAndDerivative DenseOutputModel::getInterpolatedState(jdouble a0) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_05e60c2c1f1796ae], a0));
      }

      void DenseOutputModel::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_handleStep_7f7ea329b6669cd2], a0.this$);
      }

      void DenseOutputModel::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_85808f3d6374b436], a0.this$, a1);
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
      static PyObject *t_DenseOutputModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DenseOutputModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DenseOutputModel_init_(t_DenseOutputModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DenseOutputModel_append(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_finish(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_getFinalTime(t_DenseOutputModel *self);
      static PyObject *t_DenseOutputModel_getInitialTime(t_DenseOutputModel *self);
      static PyObject *t_DenseOutputModel_getInterpolatedState(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_handleStep(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_init(t_DenseOutputModel *self, PyObject *args);
      static PyObject *t_DenseOutputModel_get__finalTime(t_DenseOutputModel *self, void *data);
      static PyObject *t_DenseOutputModel_get__initialTime(t_DenseOutputModel *self, void *data);
      static PyGetSetDef t_DenseOutputModel__fields_[] = {
        DECLARE_GET_FIELD(t_DenseOutputModel, finalTime),
        DECLARE_GET_FIELD(t_DenseOutputModel, initialTime),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DenseOutputModel__methods_[] = {
        DECLARE_METHOD(t_DenseOutputModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DenseOutputModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DenseOutputModel, append, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, finish, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, getFinalTime, METH_NOARGS),
        DECLARE_METHOD(t_DenseOutputModel, getInitialTime, METH_NOARGS),
        DECLARE_METHOD(t_DenseOutputModel, getInterpolatedState, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, handleStep, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DenseOutputModel)[] = {
        { Py_tp_methods, t_DenseOutputModel__methods_ },
        { Py_tp_init, (void *) t_DenseOutputModel_init_ },
        { Py_tp_getset, t_DenseOutputModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DenseOutputModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DenseOutputModel, t_DenseOutputModel, DenseOutputModel);

      void t_DenseOutputModel::install(PyObject *module)
      {
        installType(&PY_TYPE(DenseOutputModel), &PY_TYPE_DEF(DenseOutputModel), module, "DenseOutputModel", 0);
      }

      void t_DenseOutputModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "class_", make_descriptor(DenseOutputModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "wrapfn_", make_descriptor(t_DenseOutputModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DenseOutputModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DenseOutputModel::initializeClass, 1)))
          return NULL;
        return t_DenseOutputModel::wrap_Object(DenseOutputModel(((t_DenseOutputModel *) arg)->object.this$));
      }
      static PyObject *t_DenseOutputModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DenseOutputModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DenseOutputModel_init_(t_DenseOutputModel *self, PyObject *args, PyObject *kwds)
      {
        DenseOutputModel object((jobject) NULL);

        INT_CALL(object = DenseOutputModel());
        self->object = object;

        return 0;
      }

      static PyObject *t_DenseOutputModel_append(t_DenseOutputModel *self, PyObject *arg)
      {
        DenseOutputModel a0((jobject) NULL);

        if (!parseArg(arg, "k", DenseOutputModel::initializeClass, &a0))
        {
          OBJ_CALL(self->object.append(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "append", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_finish(t_DenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
        {
          OBJ_CALL(self->object.finish(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "finish", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_getFinalTime(t_DenseOutputModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFinalTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DenseOutputModel_getInitialTime(t_DenseOutputModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getInitialTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DenseOutputModel_getInterpolatedState(t_DenseOutputModel *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getInterpolatedState(a0));
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_handleStep(t_DenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
        {
          OBJ_CALL(self->object.handleStep(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_init(t_DenseOutputModel *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_get__finalTime(t_DenseOutputModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFinalTime());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DenseOutputModel_get__initialTime(t_DenseOutputModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getInitialTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/NeQuickModel.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *NeQuickModel::class$ = NULL;
          jmethodID *NeQuickModel::mids$ = NULL;
          bool NeQuickModel::live$ = false;

          jclass NeQuickModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/NeQuickModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_2ae226802b046a42] = env->getMethodID(cls, "<init>", "([DLorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_c824fdb3e595a2ae] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_78d4f8498e981bf5] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_stec_48aa5255a3f91d82] = env->getMethodID(cls, "stec", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)D");
              mids$[mid_stec_954bb2cd32818988] = env->getMethodID(cls, "stec", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NeQuickModel::NeQuickModel(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

          NeQuickModel::NeQuickModel(const JArray< jdouble > & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ae226802b046a42, a0.this$, a1.this$)) {}

          ::java::util::List NeQuickModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          jdouble NeQuickModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_c824fdb3e595a2ae], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement NeQuickModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_78d4f8498e981bf5], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble NeQuickModel::stec(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::GeodeticPoint & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_stec_48aa5255a3f91d82], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement NeQuickModel::stec(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::bodies::FieldGeodeticPoint & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_stec_954bb2cd32818988], a0.this$, a1.this$, a2.this$));
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
        namespace ionosphere {
          static PyObject *t_NeQuickModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NeQuickModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NeQuickModel_init_(t_NeQuickModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NeQuickModel_getParametersDrivers(t_NeQuickModel *self);
          static PyObject *t_NeQuickModel_pathDelay(t_NeQuickModel *self, PyObject *args);
          static PyObject *t_NeQuickModel_stec(t_NeQuickModel *self, PyObject *args);
          static PyObject *t_NeQuickModel_get__parametersDrivers(t_NeQuickModel *self, void *data);
          static PyGetSetDef t_NeQuickModel__fields_[] = {
            DECLARE_GET_FIELD(t_NeQuickModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NeQuickModel__methods_[] = {
            DECLARE_METHOD(t_NeQuickModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NeQuickModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NeQuickModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_NeQuickModel, pathDelay, METH_VARARGS),
            DECLARE_METHOD(t_NeQuickModel, stec, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NeQuickModel)[] = {
            { Py_tp_methods, t_NeQuickModel__methods_ },
            { Py_tp_init, (void *) t_NeQuickModel_init_ },
            { Py_tp_getset, t_NeQuickModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NeQuickModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NeQuickModel, t_NeQuickModel, NeQuickModel);

          void t_NeQuickModel::install(PyObject *module)
          {
            installType(&PY_TYPE(NeQuickModel), &PY_TYPE_DEF(NeQuickModel), module, "NeQuickModel", 0);
          }

          void t_NeQuickModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "class_", make_descriptor(NeQuickModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "wrapfn_", make_descriptor(t_NeQuickModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NeQuickModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NeQuickModel::initializeClass, 1)))
              return NULL;
            return t_NeQuickModel::wrap_Object(NeQuickModel(((t_NeQuickModel *) arg)->object.this$));
          }
          static PyObject *t_NeQuickModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NeQuickModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NeQuickModel_init_(t_NeQuickModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                NeQuickModel object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = NeQuickModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::time::TimeScale a1((jobject) NULL);
                NeQuickModel object((jobject) NULL);

                if (!parseArgs(args, "[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = NeQuickModel(a0, a1));
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

          static PyObject *t_NeQuickModel_getParametersDrivers(t_NeQuickModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_NeQuickModel_pathDelay(t_NeQuickModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_NeQuickModel_stec(t_NeQuickModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::bodies::FieldGeodeticPoint a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
                {
                  OBJ_CALL(result = self->object.stec(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.stec(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "stec", args);
            return NULL;
          }

          static PyObject *t_NeQuickModel_get__parametersDrivers(t_NeQuickModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/OpenMapRealVector.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "org/hipparchus/linear/OpenMapRealVector.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OpenMapRealVector::class$ = NULL;
      jmethodID *OpenMapRealVector::mids$ = NULL;
      bool OpenMapRealVector::live$ = false;
      jdouble OpenMapRealVector::DEFAULT_ZERO_TOLERANCE = (jdouble) 0;

      jclass OpenMapRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OpenMapRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_6d211d0550baef5d] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;)V");
          mids$[mid_init$_df4ee11a06094b55] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_caadaecfce5fba2f] = env->getMethodID(cls, "<init>", "([DD)V");
          mids$[mid_init$_b6f037ff44710d52] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;D)V");
          mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_78e41e7b5124a628] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_add_3df4c0786bb92f4f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_add_a3e626dfa1abd779] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_3df4c0786bb92f4f] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_append_1b8432fd9839ffe9] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_append_61b3fd82e8e8c17c] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_copy_886c441ddd7b236c] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_ebeDivide_1b8432fd9839ffe9] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_ebeMultiply_1b8432fd9839ffe9] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_7f9114d371c3209e] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/OpenMapRealVector;)D");
          mids$[mid_getDistance_5ed80776077f2bda] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_b772323fc98b7293] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_7f9114d371c3209e] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/OpenMapRealVector;)D");
          mids$[mid_getL1Distance_5ed80776077f2bda] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfDistance_5ed80776077f2bda] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getSparsity_456d9a2f64d6b28d] = env->getMethodID(cls, "getSparsity", "()D");
          mids$[mid_getSubVector_5a91de7afba9af1f] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_mapAdd_61b3fd82e8e8c17c] = env->getMethodID(cls, "mapAdd", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_mapAddToSelf_61b3fd82e8e8c17c] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_set_77e0f9a1f260e2e5] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_987a5fb872043b12] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_dcd0f7fda5e9451c] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_sparseIterator_035c6167e6569aac] = env->getMethodID(cls, "sparseIterator", "()Ljava/util/Iterator;");
          mids$[mid_subtract_3df4c0786bb92f4f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_subtract_a3e626dfa1abd779] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_toArray_7cdc325af0834901] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_unitVector_886c441ddd7b236c] = env->getMethodID(cls, "unitVector", "()Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_unitize_7ae3461a92a43152] = env->getMethodID(cls, "unitize", "()V");
          mids$[mid_isDefaultValue_e18fb1101b70dcca] = env->getMethodID(cls, "isDefaultValue", "(D)Z");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ZERO_TOLERANCE = env->getStaticDoubleField(cls, "DEFAULT_ZERO_TOLERANCE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenMapRealVector::OpenMapRealVector() : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< jdouble > & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< ::java::lang::Double > & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_6d211d0550baef5d, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(const ::org::hipparchus::linear::RealVector & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_df4ee11a06094b55, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< jdouble > & a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_caadaecfce5fba2f, a0.this$, a1)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< ::java::lang::Double > & a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_b6f037ff44710d52, a0.this$, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jint a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jint a1, jdouble a2) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_78e41e7b5124a628, a0, a1, a2)) {}

      OpenMapRealVector OpenMapRealVector::add(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_add_3df4c0786bb92f4f], a0.this$));
      }

      ::org::hipparchus::linear::RealVector OpenMapRealVector::add(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_add_a3e626dfa1abd779], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_3df4c0786bb92f4f], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_1b8432fd9839ffe9], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_61b3fd82e8e8c17c], a0));
      }

      OpenMapRealVector OpenMapRealVector::copy() const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_copy_886c441ddd7b236c]));
      }

      OpenMapRealVector OpenMapRealVector::ebeDivide(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_1b8432fd9839ffe9], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::ebeMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_1b8432fd9839ffe9], a0.this$));
      }

      jboolean OpenMapRealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jint OpenMapRealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      jdouble OpenMapRealVector::getDistance(const OpenMapRealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_7f9114d371c3209e], a0.this$);
      }

      jdouble OpenMapRealVector::getDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_5ed80776077f2bda], a0.this$);
      }

      jdouble OpenMapRealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_b772323fc98b7293], a0);
      }

      jdouble OpenMapRealVector::getL1Distance(const OpenMapRealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_7f9114d371c3209e], a0.this$);
      }

      jdouble OpenMapRealVector::getL1Distance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_5ed80776077f2bda], a0.this$);
      }

      jdouble OpenMapRealVector::getLInfDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_5ed80776077f2bda], a0.this$);
      }

      jdouble OpenMapRealVector::getSparsity() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSparsity_456d9a2f64d6b28d]);
      }

      OpenMapRealVector OpenMapRealVector::getSubVector(jint a0, jint a1) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_5a91de7afba9af1f], a0, a1));
      }

      jint OpenMapRealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      jboolean OpenMapRealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
      }

      jboolean OpenMapRealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
      }

      OpenMapRealVector OpenMapRealVector::mapAdd(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_mapAdd_61b3fd82e8e8c17c], a0));
      }

      OpenMapRealVector OpenMapRealVector::mapAddToSelf(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_61b3fd82e8e8c17c], a0));
      }

      void OpenMapRealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_77e0f9a1f260e2e5], a0);
      }

      void OpenMapRealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_987a5fb872043b12], a0, a1);
      }

      void OpenMapRealVector::setSubVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_dcd0f7fda5e9451c], a0, a1.this$);
      }

      ::java::util::Iterator OpenMapRealVector::sparseIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_sparseIterator_035c6167e6569aac]));
      }

      OpenMapRealVector OpenMapRealVector::subtract(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_subtract_3df4c0786bb92f4f], a0.this$));
      }

      ::org::hipparchus::linear::RealVector OpenMapRealVector::subtract(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_subtract_a3e626dfa1abd779], a0.this$));
      }

      JArray< jdouble > OpenMapRealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_7cdc325af0834901]));
      }

      OpenMapRealVector OpenMapRealVector::unitVector() const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_unitVector_886c441ddd7b236c]));
      }

      void OpenMapRealVector::unitize() const
      {
        env->callVoidMethod(this$, mids$[mid_unitize_7ae3461a92a43152]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_OpenMapRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenMapRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenMapRealVector_init_(t_OpenMapRealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenMapRealVector_add(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_append(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_copy(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_ebeDivide(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_ebeMultiply(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_equals(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getDimension(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getDistance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getEntry(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getL1Distance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getLInfDistance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getSparsity(t_OpenMapRealVector *self);
      static PyObject *t_OpenMapRealVector_getSubVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_hashCode(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_isInfinite(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_isNaN(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_mapAdd(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_mapAddToSelf(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_set(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_setEntry(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_setSubVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_sparseIterator(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_subtract(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_toArray(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_unitVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_unitize(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_get__dimension(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__infinite(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__naN(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__sparsity(t_OpenMapRealVector *self, void *data);
      static PyGetSetDef t_OpenMapRealVector__fields_[] = {
        DECLARE_GET_FIELD(t_OpenMapRealVector, dimension),
        DECLARE_GET_FIELD(t_OpenMapRealVector, infinite),
        DECLARE_GET_FIELD(t_OpenMapRealVector, naN),
        DECLARE_GET_FIELD(t_OpenMapRealVector, sparsity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenMapRealVector__methods_[] = {
        DECLARE_METHOD(t_OpenMapRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealVector, add, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, copy, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getDimension, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getDistance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getL1Distance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getLInfDistance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getSparsity, METH_NOARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, isInfinite, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, isNaN, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, mapAdd, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, mapAddToSelf, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, set, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, sparseIterator, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, toArray, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, unitVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, unitize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenMapRealVector)[] = {
        { Py_tp_methods, t_OpenMapRealVector__methods_ },
        { Py_tp_init, (void *) t_OpenMapRealVector_init_ },
        { Py_tp_getset, t_OpenMapRealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenMapRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::SparseRealVector),
        NULL
      };

      DEFINE_TYPE(OpenMapRealVector, t_OpenMapRealVector, OpenMapRealVector);

      void t_OpenMapRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenMapRealVector), &PY_TYPE_DEF(OpenMapRealVector), module, "OpenMapRealVector", 0);
      }

      void t_OpenMapRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "class_", make_descriptor(OpenMapRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "wrapfn_", make_descriptor(t_OpenMapRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "boxfn_", make_descriptor(boxObject));
        env->getClass(OpenMapRealVector::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "DEFAULT_ZERO_TOLERANCE", make_descriptor(OpenMapRealVector::DEFAULT_ZERO_TOLERANCE));
      }

      static PyObject *t_OpenMapRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenMapRealVector::initializeClass, 1)))
          return NULL;
        return t_OpenMapRealVector::wrap_Object(OpenMapRealVector(((t_OpenMapRealVector *) arg)->object.this$));
      }
      static PyObject *t_OpenMapRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenMapRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenMapRealVector_init_(t_OpenMapRealVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OpenMapRealVector object((jobject) NULL);

            INT_CALL(object = OpenMapRealVector());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[O", ::java::lang::PY_TYPE(Double), &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[OD", ::java::lang::PY_TYPE(Double), &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1, a2));
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

      static PyObject *t_OpenMapRealVector_add(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_OpenMapRealVector_append(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "append", args, 2);
      }

      static PyObject *t_OpenMapRealVector_copy(t_OpenMapRealVector *self, PyObject *args)
      {
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_OpenMapRealVector_ebeDivide(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "ebeDivide", args, 2);
      }

      static PyObject *t_OpenMapRealVector_ebeMultiply(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "ebeMultiply", args, 2);
      }

      static PyObject *t_OpenMapRealVector_equals(t_OpenMapRealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getDimension(t_OpenMapRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getDimension", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getDistance(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDistance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDistance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getDistance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getEntry(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getL1Distance(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getL1Distance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getL1Distance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getL1Distance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getLInfDistance(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getLInfDistance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getSparsity(t_OpenMapRealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSparsity());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OpenMapRealVector_getSubVector(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getSubVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_hashCode(t_OpenMapRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_OpenMapRealVector_isInfinite(t_OpenMapRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isInfinite());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "isInfinite", args, 2);
      }

      static PyObject *t_OpenMapRealVector_isNaN(t_OpenMapRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isNaN());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "isNaN", args, 2);
      }

      static PyObject *t_OpenMapRealVector_mapAdd(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "mapAdd", args, 2);
      }

      static PyObject *t_OpenMapRealVector_mapAddToSelf(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "mapAddToSelf", args, 2);
      }

      static PyObject *t_OpenMapRealVector_set(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "set", args, 2);
      }

      static PyObject *t_OpenMapRealVector_setEntry(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_OpenMapRealVector_setSubVector(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "setSubVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_sparseIterator(t_OpenMapRealVector *self, PyObject *args)
      {
        ::java::util::Iterator result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.sparseIterator());
          return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "sparseIterator", args, 2);
      }

      static PyObject *t_OpenMapRealVector_subtract(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_OpenMapRealVector_toArray(t_OpenMapRealVector *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toArray());
          return result.wrap();
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "toArray", args, 2);
      }

      static PyObject *t_OpenMapRealVector_unitVector(t_OpenMapRealVector *self, PyObject *args)
      {
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.unitVector());
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "unitVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_unitize(t_OpenMapRealVector *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.unitize());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "unitize", args, 2);
      }

      static PyObject *t_OpenMapRealVector_get__dimension(t_OpenMapRealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OpenMapRealVector_get__infinite(t_OpenMapRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_OpenMapRealVector_get__naN(t_OpenMapRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_OpenMapRealVector_get__sparsity(t_OpenMapRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSparsity());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldAttitudeInterpolator.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldAttitudeInterpolator::class$ = NULL;
      jmethodID *FieldAttitudeInterpolator::mids$ = NULL;
      bool FieldAttitudeInterpolator::live$ = false;

      jclass FieldAttitudeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldAttitudeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d489e2b73630b1ff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldTimeInterpolator;)V");
          mids$[mid_getAngularInterpolator_2f5f396dbcacba20] = env->getMethodID(cls, "getAngularInterpolator", "()Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_getReferenceFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_e0bcfc39752c866f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/attitudes/FieldAttitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAttitudeInterpolator::FieldAttitudeInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldTimeInterpolator & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d489e2b73630b1ff, a0.this$, a1.this$)) {}

      ::org::orekit::time::FieldTimeInterpolator FieldAttitudeInterpolator::getAngularInterpolator() const
      {
        return ::org::orekit::time::FieldTimeInterpolator(env->callObjectMethod(this$, mids$[mid_getAngularInterpolator_2f5f396dbcacba20]));
      }

      ::org::orekit::frames::Frame FieldAttitudeInterpolator::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_c8fe21bcdac65bf6]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_FieldAttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitudeInterpolator_of_(t_FieldAttitudeInterpolator *self, PyObject *args);
      static int t_FieldAttitudeInterpolator_init_(t_FieldAttitudeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAttitudeInterpolator_getAngularInterpolator(t_FieldAttitudeInterpolator *self);
      static PyObject *t_FieldAttitudeInterpolator_getReferenceFrame(t_FieldAttitudeInterpolator *self);
      static PyObject *t_FieldAttitudeInterpolator_get__angularInterpolator(t_FieldAttitudeInterpolator *self, void *data);
      static PyObject *t_FieldAttitudeInterpolator_get__referenceFrame(t_FieldAttitudeInterpolator *self, void *data);
      static PyObject *t_FieldAttitudeInterpolator_get__parameters_(t_FieldAttitudeInterpolator *self, void *data);
      static PyGetSetDef t_FieldAttitudeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, angularInterpolator),
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, referenceFrame),
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAttitudeInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldAttitudeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, getAngularInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, getReferenceFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAttitudeInterpolator)[] = {
        { Py_tp_methods, t_FieldAttitudeInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldAttitudeInterpolator_init_ },
        { Py_tp_getset, t_FieldAttitudeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAttitudeInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldAttitudeInterpolator, t_FieldAttitudeInterpolator, FieldAttitudeInterpolator);
      PyObject *t_FieldAttitudeInterpolator::wrap_Object(const FieldAttitudeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitudeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitudeInterpolator *self = (t_FieldAttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAttitudeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitudeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitudeInterpolator *self = (t_FieldAttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAttitudeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAttitudeInterpolator), &PY_TYPE_DEF(FieldAttitudeInterpolator), module, "FieldAttitudeInterpolator", 0);
      }

      void t_FieldAttitudeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "class_", make_descriptor(FieldAttitudeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "wrapfn_", make_descriptor(t_FieldAttitudeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAttitudeInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldAttitudeInterpolator::wrap_Object(FieldAttitudeInterpolator(((t_FieldAttitudeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldAttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAttitudeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAttitudeInterpolator_of_(t_FieldAttitudeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAttitudeInterpolator_init_(t_FieldAttitudeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::time::FieldTimeInterpolator a1((jobject) NULL);
        PyTypeObject **p1;
        FieldAttitudeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldTimeInterpolator::parameters_))
        {
          INT_CALL(object = FieldAttitudeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldAttitudeInterpolator_getAngularInterpolator(t_FieldAttitudeInterpolator *self)
      {
        ::org::orekit::time::FieldTimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_FieldTimeInterpolator::wrap_Object(result);
      }

      static PyObject *t_FieldAttitudeInterpolator_getReferenceFrame(t_FieldAttitudeInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_FieldAttitudeInterpolator_get__parameters_(t_FieldAttitudeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAttitudeInterpolator_get__angularInterpolator(t_FieldAttitudeInterpolator *self, void *data)
      {
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_FieldTimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_FieldAttitudeInterpolator_get__referenceFrame(t_FieldAttitudeInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixDecomposer::class$ = NULL;
      jmethodID *FieldMatrixDecomposer::mids$ = NULL;
      bool FieldMatrixDecomposer::live$ = false;

      jclass FieldMatrixDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_0fef744431e41279] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldMatrixDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_0fef744431e41279], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldMatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_of_(t_FieldMatrixDecomposer *self, PyObject *args);
      static PyObject *t_FieldMatrixDecomposer_decompose(t_FieldMatrixDecomposer *self, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_get__parameters_(t_FieldMatrixDecomposer *self, void *data);
      static PyGetSetDef t_FieldMatrixDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixDecomposer)[] = {
        { Py_tp_methods, t_FieldMatrixDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixDecomposer, t_FieldMatrixDecomposer, FieldMatrixDecomposer);
      PyObject *t_FieldMatrixDecomposer::wrap_Object(const FieldMatrixDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixDecomposer *self = (t_FieldMatrixDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixDecomposer *self = (t_FieldMatrixDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixDecomposer), &PY_TYPE_DEF(FieldMatrixDecomposer), module, "FieldMatrixDecomposer", 0);
      }

      void t_FieldMatrixDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "class_", make_descriptor(FieldMatrixDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "wrapfn_", make_descriptor(t_FieldMatrixDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixDecomposer::wrap_Object(FieldMatrixDecomposer(((t_FieldMatrixDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixDecomposer_of_(t_FieldMatrixDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixDecomposer_decompose(t_FieldMatrixDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldMatrixDecomposer_get__parameters_(t_FieldMatrixDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultiSatStepHandler::class$ = NULL;
        jmethodID *MultiSatStepHandler::mids$ = NULL;
        bool MultiSatStepHandler::live$ = false;

        jclass MultiSatStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultiSatStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_65de9727799c5641] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_65de9727799c5641] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_9864bb25319e03a0] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void MultiSatStepHandler::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_65de9727799c5641], a0.this$);
        }

        void MultiSatStepHandler::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_65de9727799c5641], a0.this$);
        }

        void MultiSatStepHandler::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_9864bb25319e03a0], a0.this$, a1.this$);
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
        static PyObject *t_MultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_finish(t_MultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_handleStep(t_MultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_init(t_MultiSatStepHandler *self, PyObject *args);

        static PyMethodDef t_MultiSatStepHandler__methods_[] = {
          DECLARE_METHOD(t_MultiSatStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatStepHandler, finish, METH_O),
          DECLARE_METHOD(t_MultiSatStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_MultiSatStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiSatStepHandler)[] = {
          { Py_tp_methods, t_MultiSatStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiSatStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultiSatStepHandler, t_MultiSatStepHandler, MultiSatStepHandler);

        void t_MultiSatStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiSatStepHandler), &PY_TYPE_DEF(MultiSatStepHandler), module, "MultiSatStepHandler", 0);
        }

        void t_MultiSatStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "class_", make_descriptor(MultiSatStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "wrapfn_", make_descriptor(t_MultiSatStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiSatStepHandler::initializeClass, 1)))
            return NULL;
          return t_MultiSatStepHandler::wrap_Object(MultiSatStepHandler(((t_MultiSatStepHandler *) arg)->object.this$));
        }
        static PyObject *t_MultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiSatStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiSatStepHandler_finish(t_MultiSatStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_MultiSatStepHandler_handleStep(t_MultiSatStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_MultiSatStepHandler_init(t_MultiSatStepHandler *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonAttitudeBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeBuilder::class$ = NULL;
      jmethodID *PythonAttitudeBuilder::mids$ = NULL;
      bool PythonAttitudeBuilder::live$ = false;

      jclass PythonAttitudeBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_build_46e50d643ce38532] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_d2838fa0adea33de] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeBuilder::PythonAttitudeBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonAttitudeBuilder::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonAttitudeBuilder::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAttitudeBuilder::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonAttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeBuilder_init_(t_PythonAttitudeBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeBuilder_finalize(t_PythonAttitudeBuilder *self);
      static PyObject *t_PythonAttitudeBuilder_pythonExtension(t_PythonAttitudeBuilder *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonAttitudeBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeBuilder_get__self(t_PythonAttitudeBuilder *self, void *data);
      static PyGetSetDef t_PythonAttitudeBuilder__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeBuilder, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeBuilder__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeBuilder)[] = {
        { Py_tp_methods, t_PythonAttitudeBuilder__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeBuilder_init_ },
        { Py_tp_getset, t_PythonAttitudeBuilder__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeBuilder, t_PythonAttitudeBuilder, PythonAttitudeBuilder);

      void t_PythonAttitudeBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeBuilder), &PY_TYPE_DEF(PythonAttitudeBuilder), module, "PythonAttitudeBuilder", 1);
      }

      void t_PythonAttitudeBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "class_", make_descriptor(PythonAttitudeBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "wrapfn_", make_descriptor(t_PythonAttitudeBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeBuilder::initializeClass);
        JNINativeMethod methods[] = {
          { "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeBuilder_build0 },
          { "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeBuilder_build1 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeBuilder_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonAttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeBuilder::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeBuilder::wrap_Object(PythonAttitudeBuilder(((t_PythonAttitudeBuilder *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeBuilder_init_(t_PythonAttitudeBuilder *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeBuilder object((jobject) NULL);

        INT_CALL(object = PythonAttitudeBuilder());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeBuilder_finalize(t_PythonAttitudeBuilder *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeBuilder_pythonExtension(t_PythonAttitudeBuilder *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a0));
        PyObject *o1 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a1));
        PyObject *o2 = ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(::org::orekit::utils::TimeStampedAngularCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "build", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("build", result);
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

      static jobject JNICALL t_PythonAttitudeBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a0));
        PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a1));
        PyObject *o2 = ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(::org::orekit::utils::TimeStampedFieldAngularCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "build", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("build", result);
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

      static void JNICALL t_PythonAttitudeBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeBuilder_get__self(t_PythonAttitudeBuilder *self, void *data)
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
#include "org/orekit/forces/gravity/SingleBodyAbsoluteAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SingleBodyAbsoluteAttraction::class$ = NULL;
        jmethodID *SingleBodyAbsoluteAttraction::mids$ = NULL;
        bool SingleBodyAbsoluteAttraction::live$ = false;
        ::java::lang::String *SingleBodyAbsoluteAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass SingleBodyAbsoluteAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SingleBodyAbsoluteAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_245df9da6b035d3e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SingleBodyAbsoluteAttraction::SingleBodyAbsoluteAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_245df9da6b035d3e, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SingleBodyAbsoluteAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SingleBodyAbsoluteAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        jboolean SingleBodyAbsoluteAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::java::util::List SingleBodyAbsoluteAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
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
      namespace gravity {
        static PyObject *t_SingleBodyAbsoluteAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SingleBodyAbsoluteAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SingleBodyAbsoluteAttraction_init_(t_SingleBodyAbsoluteAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SingleBodyAbsoluteAttraction_acceleration(t_SingleBodyAbsoluteAttraction *self, PyObject *args);
        static PyObject *t_SingleBodyAbsoluteAttraction_dependsOnPositionOnly(t_SingleBodyAbsoluteAttraction *self);
        static PyObject *t_SingleBodyAbsoluteAttraction_getParametersDrivers(t_SingleBodyAbsoluteAttraction *self);
        static PyObject *t_SingleBodyAbsoluteAttraction_get__parametersDrivers(t_SingleBodyAbsoluteAttraction *self, void *data);
        static PyGetSetDef t_SingleBodyAbsoluteAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_SingleBodyAbsoluteAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SingleBodyAbsoluteAttraction__methods_[] = {
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SingleBodyAbsoluteAttraction)[] = {
          { Py_tp_methods, t_SingleBodyAbsoluteAttraction__methods_ },
          { Py_tp_init, (void *) t_SingleBodyAbsoluteAttraction_init_ },
          { Py_tp_getset, t_SingleBodyAbsoluteAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SingleBodyAbsoluteAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SingleBodyAbsoluteAttraction, t_SingleBodyAbsoluteAttraction, SingleBodyAbsoluteAttraction);

        void t_SingleBodyAbsoluteAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(SingleBodyAbsoluteAttraction), &PY_TYPE_DEF(SingleBodyAbsoluteAttraction), module, "SingleBodyAbsoluteAttraction", 0);
        }

        void t_SingleBodyAbsoluteAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "class_", make_descriptor(SingleBodyAbsoluteAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "wrapfn_", make_descriptor(t_SingleBodyAbsoluteAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(SingleBodyAbsoluteAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*SingleBodyAbsoluteAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SingleBodyAbsoluteAttraction::initializeClass, 1)))
            return NULL;
          return t_SingleBodyAbsoluteAttraction::wrap_Object(SingleBodyAbsoluteAttraction(((t_SingleBodyAbsoluteAttraction *) arg)->object.this$));
        }
        static PyObject *t_SingleBodyAbsoluteAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SingleBodyAbsoluteAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SingleBodyAbsoluteAttraction_init_(t_SingleBodyAbsoluteAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          SingleBodyAbsoluteAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = SingleBodyAbsoluteAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_acceleration(t_SingleBodyAbsoluteAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_dependsOnPositionOnly(t_SingleBodyAbsoluteAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_getParametersDrivers(t_SingleBodyAbsoluteAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_get__parametersDrivers(t_SingleBodyAbsoluteAttraction *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02::class$ = NULL;
              jmethodID *SsrIgm02::mids$ = NULL;
              bool SsrIgm02::live$ = false;

              jclass SsrIgm02::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a14fa50c426740d6] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm02Data_d6753b7055940a54] = env->getMethodID(cls, "getSsrIgm02Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02::SsrIgm02(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_a14fa50c426740d6, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm02::getSsrIgm02Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm02Data_d6753b7055940a54]));
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm02_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02_of_(t_SsrIgm02 *self, PyObject *args);
              static int t_SsrIgm02_init_(t_SsrIgm02 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm02_getSsrIgm02Data(t_SsrIgm02 *self);
              static PyObject *t_SsrIgm02_get__ssrIgm02Data(t_SsrIgm02 *self, void *data);
              static PyObject *t_SsrIgm02_get__parameters_(t_SsrIgm02 *self, void *data);
              static PyGetSetDef t_SsrIgm02__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm02, ssrIgm02Data),
                DECLARE_GET_FIELD(t_SsrIgm02, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm02__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm02, getSsrIgm02Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02)[] = {
                { Py_tp_methods, t_SsrIgm02__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02_init_ },
                { Py_tp_getset, t_SsrIgm02__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm02, t_SsrIgm02, SsrIgm02);
              PyObject *t_SsrIgm02::wrap_Object(const SsrIgm02& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm02::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm02 *self = (t_SsrIgm02 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm02::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm02::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm02 *self = (t_SsrIgm02 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm02::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02), &PY_TYPE_DEF(SsrIgm02), module, "SsrIgm02", 0);
              }

              void t_SsrIgm02::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "class_", make_descriptor(SsrIgm02::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "wrapfn_", make_descriptor(t_SsrIgm02::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02::wrap_Object(SsrIgm02(((t_SsrIgm02 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm02_of_(t_SsrIgm02 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm02_init_(t_SsrIgm02 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm02 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm02(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm02Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm02Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm02_getSsrIgm02Data(t_SsrIgm02 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm02Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm02_get__parameters_(t_SsrIgm02 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm02_get__ssrIgm02Data(t_SsrIgm02 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm02Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/hipparchus/distribution/discrete/GeometricDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *GeometricDistribution::class$ = NULL;
        jmethodID *GeometricDistribution::mids$ = NULL;
        bool GeometricDistribution::live$ = false;

        jclass GeometricDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/GeometricDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_b772323fc98b7293] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_456d9a2f64d6b28d] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_inverseCumulativeProbability_12ebab281ee35c98] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_b772323fc98b7293] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_b772323fc98b7293] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeometricDistribution::GeometricDistribution(jdouble a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        jdouble GeometricDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_b772323fc98b7293], a0);
        }

        jdouble GeometricDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble GeometricDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble GeometricDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_456d9a2f64d6b28d]);
        }

        jint GeometricDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_f2f64475e4580546]);
        }

        jint GeometricDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_f2f64475e4580546]);
        }

        jint GeometricDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_12ebab281ee35c98], a0);
        }

        jboolean GeometricDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble GeometricDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_b772323fc98b7293], a0);
        }

        jdouble GeometricDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_b772323fc98b7293], a0);
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
    namespace distribution {
      namespace discrete {
        static PyObject *t_GeometricDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeometricDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeometricDistribution_init_(t_GeometricDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeometricDistribution_cumulativeProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getNumericalMean(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getNumericalVariance(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getProbabilityOfSuccess(t_GeometricDistribution *self);
        static PyObject *t_GeometricDistribution_getSupportLowerBound(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getSupportUpperBound(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_inverseCumulativeProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_isSupportConnected(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_logProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_probability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_get__numericalMean(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__numericalVariance(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__probabilityOfSuccess(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportConnected(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportLowerBound(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportUpperBound(t_GeometricDistribution *self, void *data);
        static PyGetSetDef t_GeometricDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GeometricDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GeometricDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GeometricDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeometricDistribution__methods_[] = {
          DECLARE_METHOD(t_GeometricDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeometricDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeometricDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_GeometricDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeometricDistribution)[] = {
          { Py_tp_methods, t_GeometricDistribution__methods_ },
          { Py_tp_init, (void *) t_GeometricDistribution_init_ },
          { Py_tp_getset, t_GeometricDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeometricDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(GeometricDistribution, t_GeometricDistribution, GeometricDistribution);

        void t_GeometricDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GeometricDistribution), &PY_TYPE_DEF(GeometricDistribution), module, "GeometricDistribution", 0);
        }

        void t_GeometricDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "class_", make_descriptor(GeometricDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "wrapfn_", make_descriptor(t_GeometricDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeometricDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeometricDistribution::initializeClass, 1)))
            return NULL;
          return t_GeometricDistribution::wrap_Object(GeometricDistribution(((t_GeometricDistribution *) arg)->object.this$));
        }
        static PyObject *t_GeometricDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeometricDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeometricDistribution_init_(t_GeometricDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GeometricDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GeometricDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GeometricDistribution_cumulativeProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_getNumericalMean(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GeometricDistribution_getNumericalVariance(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GeometricDistribution_getProbabilityOfSuccess(t_GeometricDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeometricDistribution_getSupportLowerBound(t_GeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GeometricDistribution_getSupportUpperBound(t_GeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GeometricDistribution_inverseCumulativeProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble a0;
          jint result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_isSupportConnected(t_GeometricDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GeometricDistribution_logProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_probability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_GeometricDistribution_get__numericalMean(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__numericalVariance(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__probabilityOfSuccess(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__supportConnected(t_GeometricDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GeometricDistribution_get__supportLowerBound(t_GeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_GeometricDistribution_get__supportUpperBound(t_GeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *AbstractRealDistribution::class$ = NULL;
        jmethodID *AbstractRealDistribution::mids$ = NULL;
        bool AbstractRealDistribution::live$ = false;

        jclass AbstractRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/AbstractRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_824133ce4aec3505] = env->getMethodID(cls, "probability", "(DD)D");
            mids$[mid_getSolverAbsoluteAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getSolverAbsoluteAccuracy", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble AbstractRealDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_0ba5fed9597b693e], a0);
        }

        jdouble AbstractRealDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_824133ce4aec3505], a0, a1);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_AbstractRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_inverseCumulativeProbability(t_AbstractRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_logDensity(t_AbstractRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_probability(t_AbstractRealDistribution *self, PyObject *args);

        static PyMethodDef t_AbstractRealDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRealDistribution, inverseCumulativeProbability, METH_O),
          DECLARE_METHOD(t_AbstractRealDistribution, logDensity, METH_O),
          DECLARE_METHOD(t_AbstractRealDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRealDistribution)[] = {
          { Py_tp_methods, t_AbstractRealDistribution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRealDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRealDistribution, t_AbstractRealDistribution, AbstractRealDistribution);

        void t_AbstractRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRealDistribution), &PY_TYPE_DEF(AbstractRealDistribution), module, "AbstractRealDistribution", 0);
        }

        void t_AbstractRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "class_", make_descriptor(AbstractRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "wrapfn_", make_descriptor(t_AbstractRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRealDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractRealDistribution::wrap_Object(AbstractRealDistribution(((t_AbstractRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRealDistribution_inverseCumulativeProbability(t_AbstractRealDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_AbstractRealDistribution_logDensity(t_AbstractRealDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "logDensity", arg);
          return NULL;
        }

        static PyObject *t_AbstractRealDistribution_probability(t_AbstractRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "probability", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/L1TransformProvider.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
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

      ::java::lang::Class *L1TransformProvider::class$ = NULL;
      jmethodID *L1TransformProvider::mids$ = NULL;
      bool L1TransformProvider::live$ = false;

      jclass L1TransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L1TransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_43ec4ee4a0809dae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");
          mids$[mid_getStaticTransform_96493aacdf1acda1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_490485462b5938a0] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L1TransformProvider::L1TransformProvider(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43ec4ee4a0809dae, a0.this$, a1.this$)) {}

      ::org::orekit::frames::StaticTransform L1TransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_96493aacdf1acda1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform L1TransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_490485462b5938a0], a0.this$));
      }

      ::org::orekit::frames::Transform L1TransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_d55545a64ea4a9a7], a0.this$));
      }

      ::org::orekit::frames::FieldTransform L1TransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
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
      static PyObject *t_L1TransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L1TransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L1TransformProvider_init_(t_L1TransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_L1TransformProvider_getStaticTransform(t_L1TransformProvider *self, PyObject *args);
      static PyObject *t_L1TransformProvider_getTransform(t_L1TransformProvider *self, PyObject *args);

      static PyMethodDef t_L1TransformProvider__methods_[] = {
        DECLARE_METHOD(t_L1TransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1TransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1TransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_L1TransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L1TransformProvider)[] = {
        { Py_tp_methods, t_L1TransformProvider__methods_ },
        { Py_tp_init, (void *) t_L1TransformProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L1TransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(L1TransformProvider, t_L1TransformProvider, L1TransformProvider);

      void t_L1TransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(L1TransformProvider), &PY_TYPE_DEF(L1TransformProvider), module, "L1TransformProvider", 0);
      }

      void t_L1TransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "class_", make_descriptor(L1TransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "wrapfn_", make_descriptor(t_L1TransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L1TransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L1TransformProvider::initializeClass, 1)))
          return NULL;
        return t_L1TransformProvider::wrap_Object(L1TransformProvider(((t_L1TransformProvider *) arg)->object.this$));
      }
      static PyObject *t_L1TransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L1TransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L1TransformProvider_init_(t_L1TransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L1TransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L1TransformProvider(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_L1TransformProvider_getStaticTransform(t_L1TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_L1TransformProvider_getTransform(t_L1TransformProvider *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistoryMetadata::class$ = NULL;
              jmethodID *OrbitCovarianceHistoryMetadata::mids$ = NULL;
              bool OrbitCovarianceHistoryMetadata::live$ = false;

              jclass OrbitCovarianceHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e82d68cd9f886886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getCovBasis_0090f7797e403f43] = env->getMethodID(cls, "getCovBasis", "()Ljava/lang/String;");
                  mids$[mid_getCovBasisID_0090f7797e403f43] = env->getMethodID(cls, "getCovBasisID", "()Ljava/lang/String;");
                  mids$[mid_getCovConfidence_456d9a2f64d6b28d] = env->getMethodID(cls, "getCovConfidence", "()D");
                  mids$[mid_getCovFrameEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getCovFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getCovID_0090f7797e403f43] = env->getMethodID(cls, "getCovID", "()Ljava/lang/String;");
                  mids$[mid_getCovNextID_0090f7797e403f43] = env->getMethodID(cls, "getCovNextID", "()Ljava/lang/String;");
                  mids$[mid_getCovOrdering_0795193bf31f41de] = env->getMethodID(cls, "getCovOrdering", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");
                  mids$[mid_getCovPrevID_0090f7797e403f43] = env->getMethodID(cls, "getCovPrevID", "()Ljava/lang/String;");
                  mids$[mid_getCovReferenceFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getCovReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getCovScaleMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getCovScaleMax", "()D");
                  mids$[mid_getCovScaleMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getCovScaleMin", "()D");
                  mids$[mid_getCovType_89f4b16f0349faa4] = env->getMethodID(cls, "getCovType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_getCovUnits_a6156df500549a58] = env->getMethodID(cls, "getCovUnits", "()Ljava/util/List;");
                  mids$[mid_setCovBasis_e939c6558ae8d313] = env->getMethodID(cls, "setCovBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setCovBasisID_e939c6558ae8d313] = env->getMethodID(cls, "setCovBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovConfidence_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCovConfidence", "(D)V");
                  mids$[mid_setCovFrameEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setCovFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setCovID_e939c6558ae8d313] = env->getMethodID(cls, "setCovID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovNextID_e939c6558ae8d313] = env->getMethodID(cls, "setCovNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovOrdering_ba8d0ff77b3d7507] = env->getMethodID(cls, "setCovOrdering", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;)V");
                  mids$[mid_setCovPrevID_e939c6558ae8d313] = env->getMethodID(cls, "setCovPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovReferenceFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setCovReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setCovScaleMax_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCovScaleMax", "(D)V");
                  mids$[mid_setCovScaleMin_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCovScaleMin", "(D)V");
                  mids$[mid_setCovType_871e4887d93fc936] = env->getMethodID(cls, "setCovType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;)V");
                  mids$[mid_setCovUnits_65de9727799c5641] = env->getMethodID(cls, "setCovUnits", "(Ljava/util/List;)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovarianceHistoryMetadata::OrbitCovarianceHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_e82d68cd9f886886, a0.this$)) {}

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasis_0090f7797e403f43]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasisID_0090f7797e403f43]));
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovConfidence() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovConfidence_456d9a2f64d6b28d]);
              }

              ::org::orekit::time::AbsoluteDate OrbitCovarianceHistoryMetadata::getCovFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCovFrameEpoch_aaa854c403487cf3]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovID_0090f7797e403f43]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovNextID_0090f7797e403f43]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering OrbitCovarianceHistoryMetadata::getCovOrdering() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering(env->callObjectMethod(this$, mids$[mid_getCovOrdering_0795193bf31f41de]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovPrevID_0090f7797e403f43]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade OrbitCovarianceHistoryMetadata::getCovReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCovReferenceFrame_aa70fdb14ae9305f]));
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovScaleMax() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovScaleMax_456d9a2f64d6b28d]);
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovScaleMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovScaleMin_456d9a2f64d6b28d]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType OrbitCovarianceHistoryMetadata::getCovType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getCovType_89f4b16f0349faa4]));
              }

              ::java::util::List OrbitCovarianceHistoryMetadata::getCovUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovUnits_a6156df500549a58]));
              }

              void OrbitCovarianceHistoryMetadata::setCovBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasis_e939c6558ae8d313], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasisID_e939c6558ae8d313], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovConfidence(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovConfidence_77e0f9a1f260e2e5], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovFrameEpoch_e82d68cd9f886886], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovID_e939c6558ae8d313], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovNextID_e939c6558ae8d313], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovOrdering(const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovOrdering_ba8d0ff77b3d7507], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovPrevID_e939c6558ae8d313], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovReferenceFrame_a455f3ff24eb0b47], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovScaleMax(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovScaleMax_77e0f9a1f260e2e5], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovScaleMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovScaleMin_77e0f9a1f260e2e5], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovType_871e4887d93fc936], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovUnits_65de9727799c5641], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovarianceHistoryMetadata_init_(t_OrbitCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasis(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasisID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovConfidence(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovNextID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovOrdering(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovPrevID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMax(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMin(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovType(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovUnits(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_validate(t_OrbitCovarianceHistoryMetadata *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasis(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasisID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covConfidence(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covNextID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covOrdering(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covPrevID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covType(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covUnits(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitCovarianceHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covBasis),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covBasisID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covConfidence),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covFrameEpoch),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covNextID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covOrdering),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covPrevID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covReferenceFrame),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covScaleMax),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covScaleMin),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covType),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covUnits),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovBasis, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovBasisID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovConfidence, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovNextID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovOrdering, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovPrevID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovScaleMax, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovScaleMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovBasis, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovBasisID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovConfidence, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovFrameEpoch, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovNextID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovOrdering, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovPrevID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovReferenceFrame, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovScaleMax, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovScaleMin, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovType, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovUnits, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistoryMetadata)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_OrbitCovarianceHistoryMetadata_init_ },
                { Py_tp_getset, t_OrbitCovarianceHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistoryMetadata, t_OrbitCovarianceHistoryMetadata, OrbitCovarianceHistoryMetadata);

              void t_OrbitCovarianceHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistoryMetadata), &PY_TYPE_DEF(OrbitCovarianceHistoryMetadata), module, "OrbitCovarianceHistoryMetadata", 0);
              }

              void t_OrbitCovarianceHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "class_", make_descriptor(OrbitCovarianceHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "wrapfn_", make_descriptor(t_OrbitCovarianceHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistoryMetadata::wrap_Object(OrbitCovarianceHistoryMetadata(((t_OrbitCovarianceHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovarianceHistoryMetadata_init_(t_OrbitCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitCovarianceHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitCovarianceHistoryMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasis(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasis());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasisID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasisID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovConfidence(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovConfidence());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovNextID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovNextID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovOrdering(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovOrdering());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovPrevID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovPrevID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMax(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovScaleMax());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMin(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovScaleMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovType(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovUnits(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasis", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasisID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovConfidence(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovConfidence", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovNextID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::parameters_))
                {
                  OBJ_CALL(self->object.setCovOrdering(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovOrdering", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovPrevID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovScaleMax(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovScaleMax", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovScaleMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovScaleMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setCovType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovType", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setCovUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovUnits", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_validate(t_OrbitCovarianceHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitCovarianceHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasis(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasis());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasis", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasisID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasisID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasisID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covConfidence(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovConfidence());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovConfidence(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covConfidence", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covNextID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovNextID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covNextID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covOrdering(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovOrdering());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovOrdering(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covOrdering", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covPrevID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovPrevID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covPrevID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovScaleMax());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovScaleMax(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covScaleMax", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovScaleMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovScaleMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covScaleMin", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covType(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covType", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covUnits(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covUnits", arg);
                return -1;
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
#include "org/hipparchus/analysis/FieldUnivariateVectorFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateVectorFunction::class$ = NULL;
      jmethodID *FieldUnivariateVectorFunction::mids$ = NULL;
      bool FieldUnivariateVectorFunction::live$ = false;

      jclass FieldUnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateVectorFunction_5a7b4edb374ba34f] = env->getMethodID(cls, "toCalculusFieldUnivariateVectorFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateVectorFunction;");
          mids$[mid_value_52822c1f74eb5aa5] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction FieldUnivariateVectorFunction::toCalculusFieldUnivariateVectorFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateVectorFunction_5a7b4edb374ba34f], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldUnivariateVectorFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_52822c1f74eb5aa5], a0.this$));
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
      static PyObject *t_FieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_toCalculusFieldUnivariateVectorFunction(t_FieldUnivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_value(t_FieldUnivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, toCalculusFieldUnivariateVectorFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateVectorFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateVectorFunction, t_FieldUnivariateVectorFunction, FieldUnivariateVectorFunction);

      void t_FieldUnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateVectorFunction), &PY_TYPE_DEF(FieldUnivariateVectorFunction), module, "FieldUnivariateVectorFunction", 0);
      }

      void t_FieldUnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "class_", make_descriptor(FieldUnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "wrapfn_", make_descriptor(t_FieldUnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateVectorFunction::wrap_Object(FieldUnivariateVectorFunction(((t_FieldUnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateVectorFunction_toCalculusFieldUnivariateVectorFunction(t_FieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateVectorFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateVectorFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateVectorFunction_value(t_FieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PoissonSeries.h"
#include "java/util/Map.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "java/lang/Class.h"
#include "org/orekit/data/PolynomialNutation.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/SeriesTerm.h"
#include "org/orekit/data/PoissonSeries.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeries::class$ = NULL;
      jmethodID *PoissonSeries::mids$ = NULL;
      bool PoissonSeries::live$ = false;

      jclass PoissonSeries::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeries");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_15261f7c2d65d14d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/PolynomialNutation;Ljava/util/Map;)V");
          mids$[mid_compile_c342c29781b1c8a8] = env->getStaticMethodID(cls, "compile", "([Lorg/orekit/data/PoissonSeries;)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getNonPolynomialSize_f2f64475e4580546] = env->getMethodID(cls, "getNonPolynomialSize", "()I");
          mids$[mid_getPolynomial_1320c5726800138e] = env->getMethodID(cls, "getPolynomial", "()Lorg/orekit/data/PolynomialNutation;");
          mids$[mid_value_68f0627d4a947675] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_value_8988cf596cc2decd] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoissonSeries::PoissonSeries(const ::org::orekit::data::PolynomialNutation & a0, const ::java::util::Map & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15261f7c2d65d14d, a0.this$, a1.this$)) {}

      ::org::orekit::data::PoissonSeries$CompiledSeries PoissonSeries::compile(const JArray< PoissonSeries > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callStaticObjectMethod(cls, mids$[mid_compile_c342c29781b1c8a8], a0.this$));
      }

      jint PoissonSeries::getNonPolynomialSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNonPolynomialSize_f2f64475e4580546]);
      }

      ::org::orekit::data::PolynomialNutation PoissonSeries::getPolynomial() const
      {
        return ::org::orekit::data::PolynomialNutation(env->callObjectMethod(this$, mids$[mid_getPolynomial_1320c5726800138e]));
      }

      jdouble PoissonSeries::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_68f0627d4a947675], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement PoissonSeries::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_8988cf596cc2decd], a0.this$));
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
      static PyObject *t_PoissonSeries_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoissonSeries_init_(t_PoissonSeries *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoissonSeries_compile(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries_getNonPolynomialSize(t_PoissonSeries *self);
      static PyObject *t_PoissonSeries_getPolynomial(t_PoissonSeries *self);
      static PyObject *t_PoissonSeries_value(t_PoissonSeries *self, PyObject *args);
      static PyObject *t_PoissonSeries_get__nonPolynomialSize(t_PoissonSeries *self, void *data);
      static PyObject *t_PoissonSeries_get__polynomial(t_PoissonSeries *self, void *data);
      static PyGetSetDef t_PoissonSeries__fields_[] = {
        DECLARE_GET_FIELD(t_PoissonSeries, nonPolynomialSize),
        DECLARE_GET_FIELD(t_PoissonSeries, polynomial),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PoissonSeries__methods_[] = {
        DECLARE_METHOD(t_PoissonSeries, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, compile, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, getNonPolynomialSize, METH_NOARGS),
        DECLARE_METHOD(t_PoissonSeries, getPolynomial, METH_NOARGS),
        DECLARE_METHOD(t_PoissonSeries, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeries)[] = {
        { Py_tp_methods, t_PoissonSeries__methods_ },
        { Py_tp_init, (void *) t_PoissonSeries_init_ },
        { Py_tp_getset, t_PoissonSeries__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeries)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeries, t_PoissonSeries, PoissonSeries);

      void t_PoissonSeries::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeries), &PY_TYPE_DEF(PoissonSeries), module, "PoissonSeries", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "CompiledSeries", make_descriptor(&PY_TYPE_DEF(PoissonSeries$CompiledSeries)));
      }

      void t_PoissonSeries::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "class_", make_descriptor(PoissonSeries::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "wrapfn_", make_descriptor(t_PoissonSeries::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeries_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeries::initializeClass, 1)))
          return NULL;
        return t_PoissonSeries::wrap_Object(PoissonSeries(((t_PoissonSeries *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeries_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeries::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoissonSeries_init_(t_PoissonSeries *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::PolynomialNutation a0((jobject) NULL);
        ::java::util::Map a1((jobject) NULL);
        PyTypeObject **p1;
        PoissonSeries object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::data::PolynomialNutation::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
        {
          INT_CALL(object = PoissonSeries(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoissonSeries_compile(PyTypeObject *type, PyObject *arg)
      {
        JArray< PoissonSeries > a0((jobject) NULL);
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);

        if (!parseArg(arg, "[k", PoissonSeries::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::data::PoissonSeries::compile(a0));
          return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compile", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeries_getNonPolynomialSize(t_PoissonSeries *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNonPolynomialSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_PoissonSeries_getPolynomial(t_PoissonSeries *self)
      {
        ::org::orekit::data::PolynomialNutation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPolynomial());
        return ::org::orekit::data::t_PolynomialNutation::wrap_Object(result);
      }

      static PyObject *t_PoissonSeries_value(t_PoissonSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }

      static PyObject *t_PoissonSeries_get__nonPolynomialSize(t_PoissonSeries *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNonPolynomialSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_PoissonSeries_get__polynomial(t_PoissonSeries *self, void *data)
      {
        ::org::orekit::data::PolynomialNutation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPolynomial());
        return ::org::orekit::data::t_PolynomialNutation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmClockCorrectionData::class$ = NULL;
              jmethodID *RtcmClockCorrectionData::mids$ = NULL;
              bool RtcmClockCorrectionData::live$ = false;

              jclass RtcmClockCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_ca1c0bf5185bdc62] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_setClockCorrection_a1424ed96e1e854b] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmClockCorrectionData::RtcmClockCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection RtcmClockCorrectionData::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_ca1c0bf5185bdc62]));
              }

              void RtcmClockCorrectionData::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_a1424ed96e1e854b], a0.this$);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmClockCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmClockCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmClockCorrectionData_init_(t_RtcmClockCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmClockCorrectionData_getClockCorrection(t_RtcmClockCorrectionData *self);
              static PyObject *t_RtcmClockCorrectionData_setClockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmClockCorrectionData_get__clockCorrection(t_RtcmClockCorrectionData *self, void *data);
              static int t_RtcmClockCorrectionData_set__clockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmClockCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmClockCorrectionData, clockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmClockCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmClockCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, setClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmClockCorrectionData)[] = {
                { Py_tp_methods, t_RtcmClockCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmClockCorrectionData_init_ },
                { Py_tp_getset, t_RtcmClockCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmClockCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmClockCorrectionData, t_RtcmClockCorrectionData, RtcmClockCorrectionData);

              void t_RtcmClockCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmClockCorrectionData), &PY_TYPE_DEF(RtcmClockCorrectionData), module, "RtcmClockCorrectionData", 0);
              }

              void t_RtcmClockCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "class_", make_descriptor(RtcmClockCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "wrapfn_", make_descriptor(t_RtcmClockCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmClockCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmClockCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmClockCorrectionData::wrap_Object(RtcmClockCorrectionData(((t_RtcmClockCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmClockCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmClockCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmClockCorrectionData_init_(t_RtcmClockCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmClockCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmClockCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmClockCorrectionData_getClockCorrection(t_RtcmClockCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmClockCorrectionData_setClockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmClockCorrectionData_get__clockCorrection(t_RtcmClockCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_RtcmClockCorrectionData_set__clockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
                return -1;
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
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap$Transition::class$ = NULL;
      jmethodID *TimeSpanMap$Transition::mids$ = NULL;
      bool TimeSpanMap$Transition::live$ = false;

      jclass TimeSpanMap$Transition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap$Transition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAfter_dfd7647d9110ac9f] = env->getMethodID(cls, "getAfter", "()Ljava/lang/Object;");
          mids$[mid_getBefore_dfd7647d9110ac9f] = env->getMethodID(cls, "getBefore", "()Ljava/lang/Object;");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getSpanAfter_39a1e35b17737f60] = env->getMethodID(cls, "getSpanAfter", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getSpanBefore_39a1e35b17737f60] = env->getMethodID(cls, "getSpanBefore", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_next_bfa1ec341cbef3d2] = env->getMethodID(cls, "next", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_previous_bfa1ec341cbef3d2] = env->getMethodID(cls, "previous", "()Lorg/orekit/utils/TimeSpanMap$Transition;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object TimeSpanMap$Transition::getAfter() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAfter_dfd7647d9110ac9f]));
      }

      ::java::lang::Object TimeSpanMap$Transition::getBefore() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getBefore_dfd7647d9110ac9f]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Transition::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap$Transition::getSpanAfter() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpanAfter_39a1e35b17737f60]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap$Transition::getSpanBefore() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpanBefore_39a1e35b17737f60]));
      }

      TimeSpanMap$Transition TimeSpanMap$Transition::next() const
      {
        return TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_next_bfa1ec341cbef3d2]));
      }

      TimeSpanMap$Transition TimeSpanMap$Transition::previous() const
      {
        return TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_previous_bfa1ec341cbef3d2]));
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
      static PyObject *t_TimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Transition_of_(t_TimeSpanMap$Transition *self, PyObject *args);
      static PyObject *t_TimeSpanMap$Transition_getAfter(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getBefore(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getDate(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getSpanAfter(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getSpanBefore(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_next(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_previous(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_get__after(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__before(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__date(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__spanAfter(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__spanBefore(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__parameters_(t_TimeSpanMap$Transition *self, void *data);
      static PyGetSetDef t_TimeSpanMap$Transition__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, after),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, before),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, date),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, spanAfter),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, spanBefore),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap$Transition__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap$Transition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getAfter, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getBefore, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getSpanAfter, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getSpanBefore, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, next, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, previous, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap$Transition)[] = {
        { Py_tp_methods, t_TimeSpanMap$Transition__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSpanMap$Transition__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(t_TimeSpanMap$Transition *)) get_generic_next< t_TimeSpanMap$Transition,t_TimeSpanMap$Transition,TimeSpanMap$Transition >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap$Transition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap$Transition, t_TimeSpanMap$Transition, TimeSpanMap$Transition);
      PyObject *t_TimeSpanMap$Transition::wrap_Object(const TimeSpanMap$Transition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Transition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Transition *self = (t_TimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap$Transition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Transition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Transition *self = (t_TimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap$Transition::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap$Transition), &PY_TYPE_DEF(TimeSpanMap$Transition), module, "TimeSpanMap$Transition", 0);
      }

      void t_TimeSpanMap$Transition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "class_", make_descriptor(TimeSpanMap$Transition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "wrapfn_", make_descriptor(t_TimeSpanMap$Transition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap$Transition::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap$Transition::wrap_Object(TimeSpanMap$Transition(((t_TimeSpanMap$Transition *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap$Transition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap$Transition_of_(t_TimeSpanMap$Transition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSpanMap$Transition_getAfter(t_TimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getAfter());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getBefore(t_TimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getBefore());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getDate(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getSpanAfter(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpanAfter());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_getSpanBefore(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpanBefore());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_next(t_TimeSpanMap$Transition *self)
      {
        TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_previous(t_TimeSpanMap$Transition *self)
      {
        TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.previous());
        return t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_TimeSpanMap$Transition_get__parameters_(t_TimeSpanMap$Transition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap$Transition_get__after(t_TimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getAfter());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__before(t_TimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getBefore());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__date(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__spanAfter(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpanAfter());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__spanBefore(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpanBefore());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *NormalizedRandomGenerator::class$ = NULL;
      jmethodID *NormalizedRandomGenerator::mids$ = NULL;
      bool NormalizedRandomGenerator::live$ = false;

      jclass NormalizedRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/NormalizedRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextNormalizedDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble NormalizedRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_456d9a2f64d6b28d]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_NormalizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NormalizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NormalizedRandomGenerator_nextNormalizedDouble(t_NormalizedRandomGenerator *self);

      static PyMethodDef t_NormalizedRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_NormalizedRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NormalizedRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NormalizedRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NormalizedRandomGenerator)[] = {
        { Py_tp_methods, t_NormalizedRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NormalizedRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(NormalizedRandomGenerator, t_NormalizedRandomGenerator, NormalizedRandomGenerator);

      void t_NormalizedRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(NormalizedRandomGenerator), &PY_TYPE_DEF(NormalizedRandomGenerator), module, "NormalizedRandomGenerator", 0);
      }

      void t_NormalizedRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "class_", make_descriptor(NormalizedRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "wrapfn_", make_descriptor(t_NormalizedRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NormalizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NormalizedRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_NormalizedRandomGenerator::wrap_Object(NormalizedRandomGenerator(((t_NormalizedRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_NormalizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NormalizedRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NormalizedRandomGenerator_nextNormalizedDouble(t_NormalizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log::class$ = NULL;
        jmethodID *Log::mids$ = NULL;
        bool Log::live$ = false;

        jclass Log::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log::Log() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Log::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
    namespace analysis {
      namespace function {
        static PyObject *t_Log_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log_init_(t_Log *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log_value(t_Log *self, PyObject *args);

        static PyMethodDef t_Log__methods_[] = {
          DECLARE_METHOD(t_Log, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log)[] = {
          { Py_tp_methods, t_Log__methods_ },
          { Py_tp_init, (void *) t_Log_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log, t_Log, Log);

        void t_Log::install(PyObject *module)
        {
          installType(&PY_TYPE(Log), &PY_TYPE_DEF(Log), module, "Log", 0);
        }

        void t_Log::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "class_", make_descriptor(Log::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "wrapfn_", make_descriptor(t_Log::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log::initializeClass, 1)))
            return NULL;
          return t_Log::wrap_Object(Log(((t_Log *) arg)->object.this$));
        }
        static PyObject *t_Log_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log_init_(t_Log *self, PyObject *args, PyObject *kwds)
        {
          Log object((jobject) NULL);

          INT_CALL(object = Log());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log_value(t_Log *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/IsotropicRadiationClassicalConvention.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationClassicalConvention::class$ = NULL;
        jmethodID *IsotropicRadiationClassicalConvention::mids$ = NULL;
        bool IsotropicRadiationClassicalConvention::live$ = false;

        jclass IsotropicRadiationClassicalConvention::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationClassicalConvention");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getRadiationParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_397d87bcad93c626] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_radiationPressureAcceleration_5efc9e86ed57c6dd] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationClassicalConvention::IsotropicRadiationClassicalConvention(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        ::java::util::List IsotropicRadiationClassicalConvention::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_a6156df500549a58]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationClassicalConvention::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_397d87bcad93c626], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationClassicalConvention::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_5efc9e86ed57c6dd], a0.this$, a1.this$, a2.this$));
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
      namespace radiation {
        static PyObject *t_IsotropicRadiationClassicalConvention_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationClassicalConvention_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationClassicalConvention_init_(t_IsotropicRadiationClassicalConvention *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationClassicalConvention_getRadiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self);
        static PyObject *t_IsotropicRadiationClassicalConvention_radiationPressureAcceleration(t_IsotropicRadiationClassicalConvention *self, PyObject *args);
        static PyObject *t_IsotropicRadiationClassicalConvention_get__radiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self, void *data);
        static PyGetSetDef t_IsotropicRadiationClassicalConvention__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationClassicalConvention, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationClassicalConvention__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationClassicalConvention)[] = {
          { Py_tp_methods, t_IsotropicRadiationClassicalConvention__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationClassicalConvention_init_ },
          { Py_tp_getset, t_IsotropicRadiationClassicalConvention__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationClassicalConvention)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationClassicalConvention, t_IsotropicRadiationClassicalConvention, IsotropicRadiationClassicalConvention);

        void t_IsotropicRadiationClassicalConvention::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationClassicalConvention), &PY_TYPE_DEF(IsotropicRadiationClassicalConvention), module, "IsotropicRadiationClassicalConvention", 0);
        }

        void t_IsotropicRadiationClassicalConvention::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "class_", make_descriptor(IsotropicRadiationClassicalConvention::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "wrapfn_", make_descriptor(t_IsotropicRadiationClassicalConvention::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationClassicalConvention::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationClassicalConvention::wrap_Object(IsotropicRadiationClassicalConvention(((t_IsotropicRadiationClassicalConvention *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationClassicalConvention_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationClassicalConvention::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationClassicalConvention_init_(t_IsotropicRadiationClassicalConvention *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          IsotropicRadiationClassicalConvention object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = IsotropicRadiationClassicalConvention(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_getRadiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_radiationPressureAcceleration(t_IsotropicRadiationClassicalConvention *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_get__radiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ProfileThrustPropulsionModel.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ProfileThrustPropulsionModel::class$ = NULL;
          jmethodID *ProfileThrustPropulsionModel::mids$ = NULL;
          bool ProfileThrustPropulsionModel::live$ = false;

          jclass ProfileThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ProfileThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4d6da41a5acbac84] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;DLorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getFlowRate_66a2f071e6ed0c06] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_79518d097c897d26] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_4368a5d862927c08] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_78226ca7935182ea] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_00aba28d3abe9a8c] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_78989e44b99f7cc2] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ProfileThrustPropulsionModel::ProfileThrustPropulsionModel(const ::org::orekit::utils::TimeSpanMap & a0, jdouble a1, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d6da41a5acbac84, a0.this$, a1, a2.this$, a3.this$)) {}

          ::org::orekit::forces::maneuvers::Control3DVectorCostType ProfileThrustPropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0]));
          }

          ::java::util::stream::Stream ProfileThrustPropulsionModel::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
          }

          ::java::util::stream::Stream ProfileThrustPropulsionModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
          }

          jdouble ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_66a2f071e6ed0c06], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_79518d097c897d26], a0.this$, a1.this$));
          }

          jdouble ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_4368a5d862927c08], a0.this$, a1.this$);
          }

          ::java::lang::String ProfileThrustPropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          ::java::util::List ProfileThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_78226ca7935182ea], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_00aba28d3abe9a8c], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_78989e44b99f7cc2], a0.this$, a1.this$));
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
          static PyObject *t_ProfileThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ProfileThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ProfileThrustPropulsionModel_init_(t_ProfileThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ProfileThrustPropulsionModel_getControl3DVectorCostType(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getEventDetectors(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getFieldEventDetectors(t_ProfileThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ProfileThrustPropulsionModel_getFlowRate(t_ProfileThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ProfileThrustPropulsionModel_getName(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getParametersDrivers(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getThrustVector(t_ProfileThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ProfileThrustPropulsionModel_get__control3DVectorCostType(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__eventDetectors(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__name(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__parametersDrivers(t_ProfileThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_ProfileThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, eventDetectors),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, name),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ProfileThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getEventDetectors, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getFieldEventDetectors, METH_O),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ProfileThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ProfileThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_ProfileThrustPropulsionModel_init_ },
            { Py_tp_getset, t_ProfileThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ProfileThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ProfileThrustPropulsionModel, t_ProfileThrustPropulsionModel, ProfileThrustPropulsionModel);

          void t_ProfileThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ProfileThrustPropulsionModel), &PY_TYPE_DEF(ProfileThrustPropulsionModel), module, "ProfileThrustPropulsionModel", 0);
          }

          void t_ProfileThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "class_", make_descriptor(ProfileThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "wrapfn_", make_descriptor(t_ProfileThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ProfileThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ProfileThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ProfileThrustPropulsionModel::wrap_Object(ProfileThrustPropulsionModel(((t_ProfileThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ProfileThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ProfileThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ProfileThrustPropulsionModel_init_(t_ProfileThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::forces::maneuvers::Control3DVectorCostType a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::lang::String a3((jobject) NULL);
            ProfileThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "KDKs", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1, &a2, &p2, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a3))
            {
              INT_CALL(object = ProfileThrustPropulsionModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getControl3DVectorCostType(t_ProfileThrustPropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_ProfileThrustPropulsionModel_getEventDetectors(t_ProfileThrustPropulsionModel *self)
          {
            ::java::util::stream::Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          static PyObject *t_ProfileThrustPropulsionModel_getFieldEventDetectors(t_ProfileThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getFlowRate(t_ProfileThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getName(t_ProfileThrustPropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ProfileThrustPropulsionModel_getParametersDrivers(t_ProfileThrustPropulsionModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ProfileThrustPropulsionModel_getThrustVector(t_ProfileThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__control3DVectorCostType(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__eventDetectors(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__name(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__parametersDrivers(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/InterSatellitesPhaseBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/util/Map.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *InterSatellitesPhaseBuilder::class$ = NULL;
          jmethodID *InterSatellitesPhaseBuilder::mids$ = NULL;
          bool InterSatellitesPhaseBuilder::live$ = false;

          jclass InterSatellitesPhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/InterSatellitesPhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d330b673c78e87a5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;DDD)V");
              mids$[mid_build_696f47d20b4de6c4] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/InterSatellitesPhase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhaseBuilder::InterSatellitesPhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::estimation::measurements::ObservableSatellite & a2, jdouble a3, jdouble a4, jdouble a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_d330b673c78e87a5, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

          ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase InterSatellitesPhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase(env->callObjectMethod(this$, mids$[mid_build_696f47d20b4de6c4], a0.this$, a1.this$));
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
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_InterSatellitesPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseBuilder_of_(t_InterSatellitesPhaseBuilder *self, PyObject *args);
          static int t_InterSatellitesPhaseBuilder_init_(t_InterSatellitesPhaseBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhaseBuilder_build(t_InterSatellitesPhaseBuilder *self, PyObject *args);
          static PyObject *t_InterSatellitesPhaseBuilder_get__parameters_(t_InterSatellitesPhaseBuilder *self, void *data);
          static PyGetSetDef t_InterSatellitesPhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhaseBuilder)[] = {
            { Py_tp_methods, t_InterSatellitesPhaseBuilder__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhaseBuilder_init_ },
            { Py_tp_getset, t_InterSatellitesPhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhaseBuilder, t_InterSatellitesPhaseBuilder, InterSatellitesPhaseBuilder);
          PyObject *t_InterSatellitesPhaseBuilder::wrap_Object(const InterSatellitesPhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhaseBuilder *self = (t_InterSatellitesPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesPhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhaseBuilder *self = (t_InterSatellitesPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesPhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhaseBuilder), &PY_TYPE_DEF(InterSatellitesPhaseBuilder), module, "InterSatellitesPhaseBuilder", 0);
          }

          void t_InterSatellitesPhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "class_", make_descriptor(InterSatellitesPhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "wrapfn_", make_descriptor(t_InterSatellitesPhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhaseBuilder::wrap_Object(InterSatellitesPhaseBuilder(((t_InterSatellitesPhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesPhaseBuilder_of_(t_InterSatellitesPhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesPhaseBuilder_init_(t_InterSatellitesPhaseBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            InterSatellitesPhaseBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDD", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = InterSatellitesPhaseBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(InterSatellitesPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhaseBuilder_build(t_InterSatellitesPhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_InterSatellitesPhase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(InterSatellitesPhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_InterSatellitesPhaseBuilder_get__parameters_(t_InterSatellitesPhaseBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
