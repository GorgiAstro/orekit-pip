#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *SphericalPolygonsSet::class$ = NULL;
          jmethodID *SphericalPolygonsSet::mids$ = NULL;
          bool SphericalPolygonsSet::live$ = false;

          jclass SphericalPolygonsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_b83ff0107ca69f11] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/geometry/spherical/twod/S2Point;)V");
              mids$[mid_init$_71a7c3cfed678f9d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_748cd2c51a955d77] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_1f4d55383238fbb5] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_e17147739aee0b14] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DID)V");
              mids$[mid_buildNew_b3112628ccbb7952] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_getBoundaryLoops_2afa36052df4765d] = env->getMethodID(cls, "getBoundaryLoops", "()Ljava/util/List;");
              mids$[mid_getEnclosingCap_a740d2831b9e3b92] = env->getMethodID(cls, "getEnclosingCap", "()Lorg/hipparchus/geometry/enclosing/EnclosingBall;");
              mids$[mid_computeGeometricalProperties_0fa09c18fee449d5] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphericalPolygonsSet::SphericalPolygonsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(jdouble a0, const JArray< ::org::hipparchus::geometry::spherical::twod::S2Point > & a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_b83ff0107ca69f11, a0, a1.this$)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_71a7c3cfed678f9d, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_748cd2c51a955d77, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1f4d55383238fbb5, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jint a3, jdouble a4) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_e17147739aee0b14, a0.this$, a1.this$, a2, a3, a4)) {}

          SphericalPolygonsSet SphericalPolygonsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_buildNew_b3112628ccbb7952], a0.this$));
          }

          ::java::util::List SphericalPolygonsSet::getBoundaryLoops() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBoundaryLoops_2afa36052df4765d]));
          }

          ::org::hipparchus::geometry::enclosing::EnclosingBall SphericalPolygonsSet::getEnclosingCap() const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_getEnclosingCap_a740d2831b9e3b92]));
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
        namespace twod {
          static PyObject *t_SphericalPolygonsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalPolygonsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalPolygonsSet_of_(t_SphericalPolygonsSet *self, PyObject *args);
          static int t_SphericalPolygonsSet_init_(t_SphericalPolygonsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphericalPolygonsSet_buildNew(t_SphericalPolygonsSet *self, PyObject *args);
          static PyObject *t_SphericalPolygonsSet_getBoundaryLoops(t_SphericalPolygonsSet *self);
          static PyObject *t_SphericalPolygonsSet_getEnclosingCap(t_SphericalPolygonsSet *self);
          static PyObject *t_SphericalPolygonsSet_get__boundaryLoops(t_SphericalPolygonsSet *self, void *data);
          static PyObject *t_SphericalPolygonsSet_get__enclosingCap(t_SphericalPolygonsSet *self, void *data);
          static PyObject *t_SphericalPolygonsSet_get__parameters_(t_SphericalPolygonsSet *self, void *data);
          static PyGetSetDef t_SphericalPolygonsSet__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, boundaryLoops),
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, enclosingCap),
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalPolygonsSet__methods_[] = {
            DECLARE_METHOD(t_SphericalPolygonsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalPolygonsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalPolygonsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, getBoundaryLoops, METH_NOARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, getEnclosingCap, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalPolygonsSet)[] = {
            { Py_tp_methods, t_SphericalPolygonsSet__methods_ },
            { Py_tp_init, (void *) t_SphericalPolygonsSet_init_ },
            { Py_tp_getset, t_SphericalPolygonsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalPolygonsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(SphericalPolygonsSet, t_SphericalPolygonsSet, SphericalPolygonsSet);
          PyObject *t_SphericalPolygonsSet::wrap_Object(const SphericalPolygonsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SphericalPolygonsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SphericalPolygonsSet *self = (t_SphericalPolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SphericalPolygonsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SphericalPolygonsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SphericalPolygonsSet *self = (t_SphericalPolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SphericalPolygonsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalPolygonsSet), &PY_TYPE_DEF(SphericalPolygonsSet), module, "SphericalPolygonsSet", 0);
          }

          void t_SphericalPolygonsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "class_", make_descriptor(SphericalPolygonsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "wrapfn_", make_descriptor(t_SphericalPolygonsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalPolygonsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalPolygonsSet::initializeClass, 1)))
              return NULL;
            return t_SphericalPolygonsSet::wrap_Object(SphericalPolygonsSet(((t_SphericalPolygonsSet *) arg)->object.this$));
          }
          static PyObject *t_SphericalPolygonsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalPolygonsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SphericalPolygonsSet_of_(t_SphericalPolygonsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SphericalPolygonsSet_init_(t_SphericalPolygonsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                JArray< ::org::hipparchus::geometry::spherical::twod::S2Point > a1((jobject) NULL);
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                jint a3;
                jdouble a4;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "kkDID", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
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

          static PyObject *t_SphericalPolygonsSet_buildNew(t_SphericalPolygonsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            SphericalPolygonsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_SphericalPolygonsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SphericalPolygonsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_SphericalPolygonsSet_getBoundaryLoops(t_SphericalPolygonsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBoundaryLoops());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Vertex));
          }

          static PyObject *t_SphericalPolygonsSet_getEnclosingCap(t_SphericalPolygonsSet *self)
          {
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnclosingCap());
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D), ::org::hipparchus::geometry::spherical::twod::PY_TYPE(S2Point));
          }
          static PyObject *t_SphericalPolygonsSet_get__parameters_(t_SphericalPolygonsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SphericalPolygonsSet_get__boundaryLoops(t_SphericalPolygonsSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBoundaryLoops());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SphericalPolygonsSet_get__enclosingCap(t_SphericalPolygonsSet *self, void *data)
          {
            ::org::hipparchus::geometry::enclosing::EnclosingBall value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnclosingCap());
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/LutherFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *LutherFieldIntegrator::class$ = NULL;
        jmethodID *LutherFieldIntegrator::mids$ = NULL;
        bool LutherFieldIntegrator::live$ = false;

        jclass LutherFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/LutherFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_79b17d518528c1b2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_1b3ae884bec31e6d] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_226a0b2040b1d2e1] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_226a0b2040b1d2e1] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_d0586f11b40e0301] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/LutherFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherFieldIntegrator::LutherFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_79b17d518528c1b2, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > LutherFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_1b3ae884bec31e6d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > LutherFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_226a0b2040b1d2e1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > LutherFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_226a0b2040b1d2e1]));
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
        static PyObject *t_LutherFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegrator_of_(t_LutherFieldIntegrator *self, PyObject *args);
        static int t_LutherFieldIntegrator_init_(t_LutherFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherFieldIntegrator_getA(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_getB(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_getC(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_get__a(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__b(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__c(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__parameters_(t_LutherFieldIntegrator *self, void *data);
        static PyGetSetDef t_LutherFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, a),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, b),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, c),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_LutherFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherFieldIntegrator)[] = {
          { Py_tp_methods, t_LutherFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_LutherFieldIntegrator_init_ },
          { Py_tp_getset, t_LutherFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(LutherFieldIntegrator, t_LutherFieldIntegrator, LutherFieldIntegrator);
        PyObject *t_LutherFieldIntegrator::wrap_Object(const LutherFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegrator *self = (t_LutherFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LutherFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegrator *self = (t_LutherFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LutherFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherFieldIntegrator), &PY_TYPE_DEF(LutherFieldIntegrator), module, "LutherFieldIntegrator", 0);
        }

        void t_LutherFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "class_", make_descriptor(LutherFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "wrapfn_", make_descriptor(t_LutherFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_LutherFieldIntegrator::wrap_Object(LutherFieldIntegrator(((t_LutherFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_LutherFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LutherFieldIntegrator_of_(t_LutherFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LutherFieldIntegrator_init_(t_LutherFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          LutherFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = LutherFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherFieldIntegrator_getA(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_LutherFieldIntegrator_getB(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_LutherFieldIntegrator_getC(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_LutherFieldIntegrator_get__parameters_(t_LutherFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LutherFieldIntegrator_get__a(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_LutherFieldIntegrator_get__b(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_LutherFieldIntegrator_get__c(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/MultiplexedMeasurementBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *MultiplexedMeasurementBuilder::class$ = NULL;
          jmethodID *MultiplexedMeasurementBuilder::mids$ = NULL;
          bool MultiplexedMeasurementBuilder::live$ = false;

          jclass MultiplexedMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/MultiplexedMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_addModifier_baf3397e6fffc21d] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_bc5f2657d91c9ded] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/MultiplexedMeasurement;");
              mids$[mid_getModifiers_2afa36052df4765d] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_f81b672126a6576d] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_a9e71d848b81c8f8] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultiplexedMeasurementBuilder::MultiplexedMeasurementBuilder(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

          void MultiplexedMeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_baf3397e6fffc21d], a0.this$);
          }

          ::org::orekit::estimation::measurements::MultiplexedMeasurement MultiplexedMeasurementBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::MultiplexedMeasurement(env->callObjectMethod(this$, mids$[mid_build_bc5f2657d91c9ded], a0.this$, a1.this$));
          }

          ::java::util::List MultiplexedMeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_2afa36052df4765d]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > MultiplexedMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_f81b672126a6576d]));
          }

          void MultiplexedMeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_a9e71d848b81c8f8], a0.this$, a1.this$);
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
          static PyObject *t_MultiplexedMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiplexedMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultiplexedMeasurementBuilder_init_(t_MultiplexedMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultiplexedMeasurementBuilder_addModifier(t_MultiplexedMeasurementBuilder *self, PyObject *arg);
          static PyObject *t_MultiplexedMeasurementBuilder_build(t_MultiplexedMeasurementBuilder *self, PyObject *args);
          static PyObject *t_MultiplexedMeasurementBuilder_getModifiers(t_MultiplexedMeasurementBuilder *self);
          static PyObject *t_MultiplexedMeasurementBuilder_getSatellites(t_MultiplexedMeasurementBuilder *self);
          static PyObject *t_MultiplexedMeasurementBuilder_init(t_MultiplexedMeasurementBuilder *self, PyObject *args);
          static PyObject *t_MultiplexedMeasurementBuilder_get__modifiers(t_MultiplexedMeasurementBuilder *self, void *data);
          static PyObject *t_MultiplexedMeasurementBuilder_get__satellites(t_MultiplexedMeasurementBuilder *self, void *data);
          static PyGetSetDef t_MultiplexedMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_MultiplexedMeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_MultiplexedMeasurementBuilder, satellites),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultiplexedMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, build, METH_VARARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultiplexedMeasurementBuilder)[] = {
            { Py_tp_methods, t_MultiplexedMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_MultiplexedMeasurementBuilder_init_ },
            { Py_tp_getset, t_MultiplexedMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultiplexedMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultiplexedMeasurementBuilder, t_MultiplexedMeasurementBuilder, MultiplexedMeasurementBuilder);

          void t_MultiplexedMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(MultiplexedMeasurementBuilder), &PY_TYPE_DEF(MultiplexedMeasurementBuilder), module, "MultiplexedMeasurementBuilder", 0);
          }

          void t_MultiplexedMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "class_", make_descriptor(MultiplexedMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "wrapfn_", make_descriptor(t_MultiplexedMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultiplexedMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultiplexedMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_MultiplexedMeasurementBuilder::wrap_Object(MultiplexedMeasurementBuilder(((t_MultiplexedMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_MultiplexedMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultiplexedMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultiplexedMeasurementBuilder_init_(t_MultiplexedMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            MultiplexedMeasurementBuilder object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = MultiplexedMeasurementBuilder(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_addModifier(t_MultiplexedMeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_build(t_MultiplexedMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::MultiplexedMeasurement result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_MultiplexedMeasurement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "build", args);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_getModifiers(t_MultiplexedMeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_getSatellites(t_MultiplexedMeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_init(t_MultiplexedMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_get__modifiers(t_MultiplexedMeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_get__satellites(t_MultiplexedMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *OrbitCorrection::class$ = NULL;
            jmethodID *OrbitCorrection::mids$ = NULL;
            bool OrbitCorrection::live$ = false;

            jclass OrbitCorrection::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/OrbitCorrection");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e42c7d2e3ddfb2c2] = env->getMethodID(cls, "<init>", "(DDDDDD)V");
                mids$[mid_getDeltaOrbitAlongTrack_dff5885c2c873297] = env->getMethodID(cls, "getDeltaOrbitAlongTrack", "()D");
                mids$[mid_getDeltaOrbitCrossTrack_dff5885c2c873297] = env->getMethodID(cls, "getDeltaOrbitCrossTrack", "()D");
                mids$[mid_getDeltaOrbitRadial_dff5885c2c873297] = env->getMethodID(cls, "getDeltaOrbitRadial", "()D");
                mids$[mid_getDotOrbitDeltaAlongTrack_dff5885c2c873297] = env->getMethodID(cls, "getDotOrbitDeltaAlongTrack", "()D");
                mids$[mid_getDotOrbitDeltaCrossTrack_dff5885c2c873297] = env->getMethodID(cls, "getDotOrbitDeltaCrossTrack", "()D");
                mids$[mid_getDotOrbitDeltaRadial_dff5885c2c873297] = env->getMethodID(cls, "getDotOrbitDeltaRadial", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OrbitCorrection::OrbitCorrection(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e42c7d2e3ddfb2c2, a0, a1, a2, a3, a4, a5)) {}

            jdouble OrbitCorrection::getDeltaOrbitAlongTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitAlongTrack_dff5885c2c873297]);
            }

            jdouble OrbitCorrection::getDeltaOrbitCrossTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitCrossTrack_dff5885c2c873297]);
            }

            jdouble OrbitCorrection::getDeltaOrbitRadial() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitRadial_dff5885c2c873297]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaAlongTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaAlongTrack_dff5885c2c873297]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaCrossTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaCrossTrack_dff5885c2c873297]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaRadial() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaRadial_dff5885c2c873297]);
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
          namespace common {
            static PyObject *t_OrbitCorrection_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OrbitCorrection_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OrbitCorrection_init_(t_OrbitCorrection *self, PyObject *args, PyObject *kwds);
            static PyObject *t_OrbitCorrection_getDeltaOrbitAlongTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDeltaOrbitCrossTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDeltaOrbitRadial(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaAlongTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaCrossTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaRadial(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_get__deltaOrbitAlongTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__deltaOrbitCrossTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__deltaOrbitRadial(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaAlongTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaCrossTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaRadial(t_OrbitCorrection *self, void *data);
            static PyGetSetDef t_OrbitCorrection__fields_[] = {
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitAlongTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitCrossTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitRadial),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaAlongTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaCrossTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaRadial),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OrbitCorrection__methods_[] = {
              DECLARE_METHOD(t_OrbitCorrection, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OrbitCorrection, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitAlongTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitCrossTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitRadial, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaAlongTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaCrossTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaRadial, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OrbitCorrection)[] = {
              { Py_tp_methods, t_OrbitCorrection__methods_ },
              { Py_tp_init, (void *) t_OrbitCorrection_init_ },
              { Py_tp_getset, t_OrbitCorrection__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OrbitCorrection)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(OrbitCorrection, t_OrbitCorrection, OrbitCorrection);

            void t_OrbitCorrection::install(PyObject *module)
            {
              installType(&PY_TYPE(OrbitCorrection), &PY_TYPE_DEF(OrbitCorrection), module, "OrbitCorrection", 0);
            }

            void t_OrbitCorrection::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "class_", make_descriptor(OrbitCorrection::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "wrapfn_", make_descriptor(t_OrbitCorrection::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OrbitCorrection_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OrbitCorrection::initializeClass, 1)))
                return NULL;
              return t_OrbitCorrection::wrap_Object(OrbitCorrection(((t_OrbitCorrection *) arg)->object.this$));
            }
            static PyObject *t_OrbitCorrection_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OrbitCorrection::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OrbitCorrection_init_(t_OrbitCorrection *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              OrbitCorrection object((jobject) NULL);

              if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = OrbitCorrection(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitAlongTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitAlongTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitCrossTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitCrossTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitRadial(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitRadial());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaAlongTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaAlongTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaCrossTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaCrossTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaRadial(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaRadial());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitAlongTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitAlongTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitCrossTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitCrossTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitRadial(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitRadial());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaAlongTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaAlongTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaCrossTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaCrossTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaRadial(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaRadial());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractGenerator.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonAbstractGenerator::class$ = NULL;
            jmethodID *PythonAbstractGenerator::mids$ = NULL;
            bool PythonAbstractGenerator::live$ = false;

            jclass PythonAbstractGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonAbstractGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_421e10c76f266368] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;DZ)V");
                mids$[mid_endMessage_d0bc48d5b00dc40c] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormat_66298c6188053be6] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_startMessage_d68f2e10a4896937] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_de3e021e7266b71e] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_ddc5f91684d983c2] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractGenerator::PythonAbstractGenerator(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, jdouble a2, jboolean a3) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_421e10c76f266368, a0.this$, a1.this$, a2, a3)) {}

            void PythonAbstractGenerator::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonAbstractGenerator::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonAbstractGenerator::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        namespace utils {
          namespace generation {
            static PyObject *t_PythonAbstractGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAbstractGenerator_init_(t_PythonAbstractGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractGenerator_finalize(t_PythonAbstractGenerator *self);
            static PyObject *t_PythonAbstractGenerator_pythonExtension(t_PythonAbstractGenerator *self, PyObject *args);
            static void JNICALL t_PythonAbstractGenerator_endMessage0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonAbstractGenerator_getFormat1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGenerator_startMessage3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static void JNICALL t_PythonAbstractGenerator_writeComments4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonAbstractGenerator_writeEntry5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static PyObject *t_PythonAbstractGenerator_get__self(t_PythonAbstractGenerator *self, void *data);
            static PyGetSetDef t_PythonAbstractGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractGenerator, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractGenerator__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGenerator, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractGenerator, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGenerator)[] = {
              { Py_tp_methods, t_PythonAbstractGenerator__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractGenerator_init_ },
              { Py_tp_getset, t_PythonAbstractGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(PythonAbstractGenerator, t_PythonAbstractGenerator, PythonAbstractGenerator);

            void t_PythonAbstractGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractGenerator), &PY_TYPE_DEF(PythonAbstractGenerator), module, "PythonAbstractGenerator", 1);
            }

            void t_PythonAbstractGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "class_", make_descriptor(PythonAbstractGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "wrapfn_", make_descriptor(t_PythonAbstractGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractGenerator::initializeClass);
              JNINativeMethod methods[] = {
                { "endMessage", "(Ljava/lang/String;)V", (void *) t_PythonAbstractGenerator_endMessage0 },
                { "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonAbstractGenerator_getFormat1 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractGenerator_pythonDecRef2 },
                { "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V", (void *) t_PythonAbstractGenerator_startMessage3 },
                { "writeComments", "(Ljava/util/List;)V", (void *) t_PythonAbstractGenerator_writeComments4 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonAbstractGenerator_writeEntry5 },
              };
              env->registerNatives(cls, methods, 6);
            }

            static PyObject *t_PythonAbstractGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractGenerator::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractGenerator::wrap_Object(PythonAbstractGenerator(((t_PythonAbstractGenerator *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAbstractGenerator_init_(t_PythonAbstractGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jboolean a3;
              PythonAbstractGenerator object((jobject) NULL);

              if (!parseArgs(args, "ksDZ", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractGenerator(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonAbstractGenerator_finalize(t_PythonAbstractGenerator *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractGenerator_pythonExtension(t_PythonAbstractGenerator *self, PyObject *args)
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

            static void JNICALL t_PythonAbstractGenerator_endMessage0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "endMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonAbstractGenerator_getFormat1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFormat", result);
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

            static void JNICALL t_PythonAbstractGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractGenerator_startMessage3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *result = PyObject_CallMethod(obj, "startMessage", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonAbstractGenerator_writeComments4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeComments", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonAbstractGenerator_writeEntry5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractGenerator_get__self(t_PythonAbstractGenerator *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAdaptableInterval::class$ = NULL;
        jmethodID *FieldAdaptableInterval::mids$ = NULL;
        bool FieldAdaptableInterval::live$ = false;

        jclass FieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_b83144ffe3b4ef29] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldAdaptableInterval::currentInterval(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_b83144ffe3b4ef29], a0.this$);
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
        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args);
        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_FieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_FieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdaptableInterval)[] = {
          { Py_tp_methods, t_FieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdaptableInterval, t_FieldAdaptableInterval, FieldAdaptableInterval);
        PyObject *t_FieldAdaptableInterval::wrap_Object(const FieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdaptableInterval), &PY_TYPE_DEF(FieldAdaptableInterval), module, "FieldAdaptableInterval", 0);
        }

        void t_FieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "class_", make_descriptor(FieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "wrapfn_", make_descriptor(t_FieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_FieldAdaptableInterval::wrap_Object(FieldAdaptableInterval(((t_FieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/JulierUnscentedTransform.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *JulierUnscentedTransform::class$ = NULL;
      jmethodID *JulierUnscentedTransform::mids$ = NULL;
      bool JulierUnscentedTransform::live$ = false;
      jdouble JulierUnscentedTransform::DEFAULT_KAPPA = (jdouble) 0;

      jclass JulierUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/JulierUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_getWc_aab4fbf77867daa8] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_aab4fbf77867daa8] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_dff5885c2c873297] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_KAPPA = env->getStaticDoubleField(cls, "DEFAULT_KAPPA");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JulierUnscentedTransform::JulierUnscentedTransform(jint a0) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      JulierUnscentedTransform::JulierUnscentedTransform(jint a0, jdouble a1) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

      ::org::hipparchus::linear::RealVector JulierUnscentedTransform::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_aab4fbf77867daa8]));
      }

      ::org::hipparchus::linear::RealVector JulierUnscentedTransform::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_aab4fbf77867daa8]));
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
      static PyObject *t_JulierUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JulierUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JulierUnscentedTransform_init_(t_JulierUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JulierUnscentedTransform_getWc(t_JulierUnscentedTransform *self, PyObject *args);
      static PyObject *t_JulierUnscentedTransform_getWm(t_JulierUnscentedTransform *self, PyObject *args);
      static PyObject *t_JulierUnscentedTransform_get__wc(t_JulierUnscentedTransform *self, void *data);
      static PyObject *t_JulierUnscentedTransform_get__wm(t_JulierUnscentedTransform *self, void *data);
      static PyGetSetDef t_JulierUnscentedTransform__fields_[] = {
        DECLARE_GET_FIELD(t_JulierUnscentedTransform, wc),
        DECLARE_GET_FIELD(t_JulierUnscentedTransform, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JulierUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_JulierUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JulierUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JulierUnscentedTransform, getWc, METH_VARARGS),
        DECLARE_METHOD(t_JulierUnscentedTransform, getWm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JulierUnscentedTransform)[] = {
        { Py_tp_methods, t_JulierUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_JulierUnscentedTransform_init_ },
        { Py_tp_getset, t_JulierUnscentedTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JulierUnscentedTransform)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::AbstractUnscentedTransform),
        NULL
      };

      DEFINE_TYPE(JulierUnscentedTransform, t_JulierUnscentedTransform, JulierUnscentedTransform);

      void t_JulierUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(JulierUnscentedTransform), &PY_TYPE_DEF(JulierUnscentedTransform), module, "JulierUnscentedTransform", 0);
      }

      void t_JulierUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "class_", make_descriptor(JulierUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "wrapfn_", make_descriptor(t_JulierUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "boxfn_", make_descriptor(boxObject));
        env->getClass(JulierUnscentedTransform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "DEFAULT_KAPPA", make_descriptor(JulierUnscentedTransform::DEFAULT_KAPPA));
      }

      static PyObject *t_JulierUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JulierUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_JulierUnscentedTransform::wrap_Object(JulierUnscentedTransform(((t_JulierUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_JulierUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JulierUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JulierUnscentedTransform_init_(t_JulierUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            JulierUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = JulierUnscentedTransform(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            JulierUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = JulierUnscentedTransform(a0, a1));
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

      static PyObject *t_JulierUnscentedTransform_getWc(t_JulierUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWc());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(JulierUnscentedTransform), (PyObject *) self, "getWc", args, 2);
      }

      static PyObject *t_JulierUnscentedTransform_getWm(t_JulierUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWm());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(JulierUnscentedTransform), (PyObject *) self, "getWm", args, 2);
      }

      static PyObject *t_JulierUnscentedTransform_get__wc(t_JulierUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_JulierUnscentedTransform_get__wm(t_JulierUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemParser::class$ = NULL;
              jmethodID *AemParser::mids$ = NULL;
              bool AemParser::live$ = false;

              jclass AemParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_b1fdeef735795f49] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/aem/Aem;");
                  mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_58c0f76fc10a27f5] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_cbb98714a27bf09f] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/adm/aem/Aem;");
                  mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::Aem AemParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::Aem(env->callObjectMethod(this$, mids$[mid_build_b1fdeef735795f49]));
              }

              jboolean AemParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_b108b35ef48e27bd]);
              }

              jboolean AemParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_b108b35ef48e27bd]);
              }

              jboolean AemParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_b108b35ef48e27bd]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader AemParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_58c0f76fc10a27f5]));
              }

              jboolean AemParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_b108b35ef48e27bd]);
              }

              jboolean AemParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_b108b35ef48e27bd]);
              }

              jboolean AemParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_b108b35ef48e27bd]);
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::Aem AemParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::Aem(env->callObjectMethod(this$, mids$[mid_parse_cbb98714a27bf09f], a0.this$));
              }

              jboolean AemParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_b108b35ef48e27bd]);
              }

              jboolean AemParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_b108b35ef48e27bd]);
              }

              jboolean AemParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_b108b35ef48e27bd]);
              }

              void AemParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_e250621f009e45db], a0.this$);
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
          namespace adm {
            namespace aem {
              static PyObject *t_AemParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemParser_of_(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_build(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_getHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_parse(t_AemParser *self, PyObject *arg);
              static PyObject *t_AemParser_prepareData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_prepareHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_prepareMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_reset(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_get__header(t_AemParser *self, void *data);
              static PyObject *t_AemParser_get__parameters_(t_AemParser *self, void *data);
              static PyGetSetDef t_AemParser__fields_[] = {
                DECLARE_GET_FIELD(t_AemParser, header),
                DECLARE_GET_FIELD(t_AemParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemParser__methods_[] = {
                DECLARE_METHOD(t_AemParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, build, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, parse, METH_O),
                DECLARE_METHOD(t_AemParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemParser)[] = {
                { Py_tp_methods, t_AemParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AemParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(AemParser, t_AemParser, AemParser);
              PyObject *t_AemParser::wrap_Object(const AemParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemParser *self = (t_AemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AemParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemParser *self = (t_AemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AemParser::install(PyObject *module)
              {
                installType(&PY_TYPE(AemParser), &PY_TYPE_DEF(AemParser), module, "AemParser", 0);
              }

              void t_AemParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "class_", make_descriptor(AemParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "wrapfn_", make_descriptor(t_AemParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemParser::initializeClass, 1)))
                  return NULL;
                return t_AemParser::wrap_Object(AemParser(((t_AemParser *) arg)->object.this$));
              }
              static PyObject *t_AemParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemParser_of_(t_AemParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AemParser_build(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::Aem result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::aem::t_Aem::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_AemParser_finalizeData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_AemParser_finalizeHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_AemParser_finalizeMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_AemParser_getHeader(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_AemParser_inData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_AemParser_inHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_AemParser_inMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_AemParser_parse(t_AemParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::Aem result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::aem::t_Aem::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_AemParser_prepareData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_AemParser_prepareHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_AemParser_prepareMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_AemParser_reset(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_AemParser_get__parameters_(t_AemParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AemParser_get__header(t_AemParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
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
#include "org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *GradientMultivariateOptimizer::class$ = NULL;
          jmethodID *GradientMultivariateOptimizer::mids$ = NULL;
          bool GradientMultivariateOptimizer::live$ = false;

          jclass GradientMultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_optimize_d70788483e9a9a2c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_parseOptimizationData_3d26e9f3a1d7e833] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
              mids$[mid_computeObjectiveGradient_ac3d742ccc742f22] = env->getMethodID(cls, "computeObjectiveGradient", "([D)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::optim::PointValuePair GradientMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
          {
            return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_d70788483e9a9a2c], a0.this$));
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
          static PyObject *t_GradientMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GradientMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GradientMultivariateOptimizer_of_(t_GradientMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_GradientMultivariateOptimizer_optimize(t_GradientMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_GradientMultivariateOptimizer_get__parameters_(t_GradientMultivariateOptimizer *self, void *data);
          static PyGetSetDef t_GradientMultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_GradientMultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GradientMultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_GradientMultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, optimize, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GradientMultivariateOptimizer)[] = {
            { Py_tp_methods, t_GradientMultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GradientMultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GradientMultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(GradientMultivariateOptimizer, t_GradientMultivariateOptimizer, GradientMultivariateOptimizer);
          PyObject *t_GradientMultivariateOptimizer::wrap_Object(const GradientMultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GradientMultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GradientMultivariateOptimizer *self = (t_GradientMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_GradientMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GradientMultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GradientMultivariateOptimizer *self = (t_GradientMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_GradientMultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(GradientMultivariateOptimizer), &PY_TYPE_DEF(GradientMultivariateOptimizer), module, "GradientMultivariateOptimizer", 0);
          }

          void t_GradientMultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "class_", make_descriptor(GradientMultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "wrapfn_", make_descriptor(t_GradientMultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GradientMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GradientMultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_GradientMultivariateOptimizer::wrap_Object(GradientMultivariateOptimizer(((t_GradientMultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_GradientMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GradientMultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GradientMultivariateOptimizer_of_(t_GradientMultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_GradientMultivariateOptimizer_optimize(t_GradientMultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GradientMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
          }
          static PyObject *t_GradientMultivariateOptimizer_get__parameters_(t_GradientMultivariateOptimizer *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PolynomialThrustSegment::class$ = NULL;
          jmethodID *PolynomialThrustSegment::mids$ = NULL;
          bool PolynomialThrustSegment::live$ = false;

          jclass PolynomialThrustSegment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9369cf81176a0f42] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
              mids$[mid_getThrustVector_24461752d0eea1e3] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_e81fa067750860a1] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolynomialThrustSegment::PolynomialThrustSegment(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a1, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a2, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9369cf81176a0f42, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D PolynomialThrustSegment::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_24461752d0eea1e3], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PolynomialThrustSegment::getThrustVector(const ::org::orekit::time::FieldAbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_e81fa067750860a1], a0.this$));
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
          static PyObject *t_PolynomialThrustSegment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolynomialThrustSegment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PolynomialThrustSegment_init_(t_PolynomialThrustSegment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolynomialThrustSegment_getThrustVector(t_PolynomialThrustSegment *self, PyObject *args);

          static PyMethodDef t_PolynomialThrustSegment__methods_[] = {
            DECLARE_METHOD(t_PolynomialThrustSegment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolynomialThrustSegment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolynomialThrustSegment, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolynomialThrustSegment)[] = {
            { Py_tp_methods, t_PolynomialThrustSegment__methods_ },
            { Py_tp_init, (void *) t_PolynomialThrustSegment_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolynomialThrustSegment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PolynomialThrustSegment, t_PolynomialThrustSegment, PolynomialThrustSegment);

          void t_PolynomialThrustSegment::install(PyObject *module)
          {
            installType(&PY_TYPE(PolynomialThrustSegment), &PY_TYPE_DEF(PolynomialThrustSegment), module, "PolynomialThrustSegment", 0);
          }

          void t_PolynomialThrustSegment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "class_", make_descriptor(PolynomialThrustSegment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "wrapfn_", make_descriptor(t_PolynomialThrustSegment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolynomialThrustSegment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolynomialThrustSegment::initializeClass, 1)))
              return NULL;
            return t_PolynomialThrustSegment::wrap_Object(PolynomialThrustSegment(((t_PolynomialThrustSegment *) arg)->object.this$));
          }
          static PyObject *t_PolynomialThrustSegment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolynomialThrustSegment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PolynomialThrustSegment_init_(t_PolynomialThrustSegment *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a1((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a2((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a3((jobject) NULL);
            PolynomialThrustSegment object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PolynomialThrustSegment(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PolynomialThrustSegment_getThrustVector(t_PolynomialThrustSegment *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonEventDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEventDetector::class$ = NULL;
        jmethodID *PythonEventDetector::mids$ = NULL;
        bool PythonEventDetector::live$ = false;

        jclass PythonEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_551c102e543538fd] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_35e5947e4e8f061c] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_dff5885c2c873297] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEventDetector::PythonEventDetector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonEventDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonEventDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonEventDetector::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEventDetector_init_(t_PythonEventDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEventDetector_finalize(t_PythonEventDetector *self);
        static PyObject *t_PythonEventDetector_pythonExtension(t_PythonEventDetector *self, PyObject *args);
        static jdouble JNICALL t_PythonEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEventDetector_getHandler1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEventDetector_get__self(t_PythonEventDetector *self, void *data);
        static PyGetSetDef t_PythonEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEventDetector, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEventDetector__methods_[] = {
          DECLARE_METHOD(t_PythonEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEventDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEventDetector)[] = {
          { Py_tp_methods, t_PythonEventDetector__methods_ },
          { Py_tp_init, (void *) t_PythonEventDetector_init_ },
          { Py_tp_getset, t_PythonEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEventDetector, t_PythonEventDetector, PythonEventDetector);

        void t_PythonEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEventDetector), &PY_TYPE_DEF(PythonEventDetector), module, "PythonEventDetector", 1);
        }

        void t_PythonEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "class_", make_descriptor(PythonEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "wrapfn_", make_descriptor(t_PythonEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEventDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "g", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonEventDetector_g0 },
            { "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;", (void *) t_PythonEventDetector_getHandler1 },
            { "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;", (void *) t_PythonEventDetector_getMaxCheckInterval2 },
            { "getMaxIterationCount", "()I", (void *) t_PythonEventDetector_getMaxIterationCount3 },
            { "getThreshold", "()D", (void *) t_PythonEventDetector_getThreshold4 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonEventDetector_init5 },
            { "pythonDecRef", "()V", (void *) t_PythonEventDetector_pythonDecRef6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEventDetector::initializeClass, 1)))
            return NULL;
          return t_PythonEventDetector::wrap_Object(PythonEventDetector(((t_PythonEventDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEventDetector_init_(t_PythonEventDetector *self, PyObject *args, PyObject *kwds)
        {
          PythonEventDetector object((jobject) NULL);

          INT_CALL(object = PythonEventDetector());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEventDetector_finalize(t_PythonEventDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEventDetector_pythonExtension(t_PythonEventDetector *self, PyObject *args)
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

        static jdouble JNICALL t_PythonEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("g", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonEventDetector_getHandler1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getHandler", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &value))
          {
            throwTypeError("getHandler", result);
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

        static jobject JNICALL t_PythonEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMaxCheckInterval", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::AdaptableInterval::initializeClass, &value))
          {
            throwTypeError("getMaxCheckInterval", result);
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

        static jint JNICALL t_PythonEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxIterationCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxIterationCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jdouble JNICALL t_PythonEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getThreshold", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getThreshold", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEventDetector_get__self(t_PythonEventDetector *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BivariateGridInterpolator::class$ = NULL;
        jmethodID *BivariateGridInterpolator::mids$ = NULL;
        bool BivariateGridInterpolator::live$ = false;

        jclass BivariateGridInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BivariateGridInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_b1b3dc6deb3b6d67] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/BivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::BivariateFunction BivariateGridInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::BivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_b1b3dc6deb3b6d67], a0.this$, a1.this$, a2.this$));
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
      namespace interpolation {
        static PyObject *t_BivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BivariateGridInterpolator_interpolate(t_BivariateGridInterpolator *self, PyObject *args);

        static PyMethodDef t_BivariateGridInterpolator__methods_[] = {
          DECLARE_METHOD(t_BivariateGridInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BivariateGridInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BivariateGridInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BivariateGridInterpolator)[] = {
          { Py_tp_methods, t_BivariateGridInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BivariateGridInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BivariateGridInterpolator, t_BivariateGridInterpolator, BivariateGridInterpolator);

        void t_BivariateGridInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BivariateGridInterpolator), &PY_TYPE_DEF(BivariateGridInterpolator), module, "BivariateGridInterpolator", 0);
        }

        void t_BivariateGridInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "class_", make_descriptor(BivariateGridInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "wrapfn_", make_descriptor(t_BivariateGridInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BivariateGridInterpolator::initializeClass, 1)))
            return NULL;
          return t_BivariateGridInterpolator::wrap_Object(BivariateGridInterpolator(((t_BivariateGridInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BivariateGridInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BivariateGridInterpolator_interpolate(t_BivariateGridInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::BivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::t_BivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *PolygonsSet::class$ = NULL;
          jmethodID *PolygonsSet::mids$ = NULL;
          bool PolygonsSet::live$ = false;

          jclass PolygonsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/PolygonsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_1ff06be7733ea843] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_748cd2c51a955d77] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_1f4d55383238fbb5] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_cf6593b07e7e8f64] = env->getMethodID(cls, "<init>", "(DDDDD)V");
              mids$[mid_buildNew_977d6495eb74d6fe] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/twod/PolygonsSet;");
              mids$[mid_getVertices_d1ff93c1a48f2b3f] = env->getMethodID(cls, "getVertices", "()[[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_computeGeometricalProperties_0fa09c18fee449d5] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolygonsSet::PolygonsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          PolygonsSet::PolygonsSet(jdouble a0, const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > & a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1ff06be7733ea843, a0, a1.this$)) {}

          PolygonsSet::PolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_748cd2c51a955d77, a0.this$, a1)) {}

          PolygonsSet::PolygonsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1f4d55383238fbb5, a0.this$, a1)) {}

          PolygonsSet::PolygonsSet(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_cf6593b07e7e8f64, a0, a1, a2, a3, a4)) {}

          PolygonsSet PolygonsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return PolygonsSet(env->callObjectMethod(this$, mids$[mid_buildNew_977d6495eb74d6fe], a0.this$));
          }

          JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > PolygonsSet::getVertices() const
          {
            return JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > >(env->callObjectMethod(this$, mids$[mid_getVertices_d1ff93c1a48f2b3f]));
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
          static PyObject *t_PolygonsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolygonsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolygonsSet_of_(t_PolygonsSet *self, PyObject *args);
          static int t_PolygonsSet_init_(t_PolygonsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolygonsSet_buildNew(t_PolygonsSet *self, PyObject *args);
          static PyObject *t_PolygonsSet_getVertices(t_PolygonsSet *self);
          static PyObject *t_PolygonsSet_get__vertices(t_PolygonsSet *self, void *data);
          static PyObject *t_PolygonsSet_get__parameters_(t_PolygonsSet *self, void *data);
          static PyGetSetDef t_PolygonsSet__fields_[] = {
            DECLARE_GET_FIELD(t_PolygonsSet, vertices),
            DECLARE_GET_FIELD(t_PolygonsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolygonsSet__methods_[] = {
            DECLARE_METHOD(t_PolygonsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolygonsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolygonsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolygonsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_PolygonsSet, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolygonsSet)[] = {
            { Py_tp_methods, t_PolygonsSet__methods_ },
            { Py_tp_init, (void *) t_PolygonsSet_init_ },
            { Py_tp_getset, t_PolygonsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolygonsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(PolygonsSet, t_PolygonsSet, PolygonsSet);
          PyObject *t_PolygonsSet::wrap_Object(const PolygonsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolygonsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolygonsSet *self = (t_PolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolygonsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolygonsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolygonsSet *self = (t_PolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolygonsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(PolygonsSet), &PY_TYPE_DEF(PolygonsSet), module, "PolygonsSet", 0);
          }

          void t_PolygonsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "class_", make_descriptor(PolygonsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "wrapfn_", make_descriptor(t_PolygonsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolygonsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolygonsSet::initializeClass, 1)))
              return NULL;
            return t_PolygonsSet::wrap_Object(PolygonsSet(((t_PolygonsSet *) arg)->object.this$));
          }
          static PyObject *t_PolygonsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolygonsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolygonsSet_of_(t_PolygonsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolygonsSet_init_(t_PolygonsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = PolygonsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > a1((jobject) NULL);
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = PolygonsSet(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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

          static PyObject *t_PolygonsSet_buildNew(t_PolygonsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            PolygonsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_PolygonsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PolygonsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_PolygonsSet_getVertices(t_PolygonsSet *self)
          {
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return JArray<jobject>(result.this$).wrap(NULL);
          }
          static PyObject *t_PolygonsSet_get__parameters_(t_PolygonsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolygonsSet_get__vertices(t_PolygonsSet *self, void *data)
          {
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return JArray<jobject>(value.this$).wrap(NULL);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/KeplerianPropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/conversion/KeplerianPropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *KeplerianPropagatorBuilder::class$ = NULL;
        jmethodID *KeplerianPropagatorBuilder::mids$ = NULL;
        bool KeplerianPropagatorBuilder::live$ = false;

        jclass KeplerianPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/KeplerianPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_24dcf7dfbd233a1e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_876e40d3b056a533] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_buildLeastSquaresModel_2eb3122719704f90] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_0c183831cad84280] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_098ffd584acb8c89] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/KeplerianPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KeplerianPropagatorBuilder::KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_24dcf7dfbd233a1e, a0.this$, a1.this$, a2)) {}

        KeplerianPropagatorBuilder::KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::attitudes::AttitudeProvider & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_876e40d3b056a533, a0.this$, a1.this$, a2, a3.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel KeplerianPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_2eb3122719704f90], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator KeplerianPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_0c183831cad84280], a0.this$));
        }

        KeplerianPropagatorBuilder KeplerianPropagatorBuilder::copy() const
        {
          return KeplerianPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_098ffd584acb8c89]));
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
      namespace conversion {
        static PyObject *t_KeplerianPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KeplerianPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KeplerianPropagatorBuilder_init_(t_KeplerianPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KeplerianPropagatorBuilder_buildLeastSquaresModel(t_KeplerianPropagatorBuilder *self, PyObject *args);
        static PyObject *t_KeplerianPropagatorBuilder_buildPropagator(t_KeplerianPropagatorBuilder *self, PyObject *args);
        static PyObject *t_KeplerianPropagatorBuilder_copy(t_KeplerianPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_KeplerianPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KeplerianPropagatorBuilder)[] = {
          { Py_tp_methods, t_KeplerianPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_KeplerianPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KeplerianPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(KeplerianPropagatorBuilder, t_KeplerianPropagatorBuilder, KeplerianPropagatorBuilder);

        void t_KeplerianPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(KeplerianPropagatorBuilder), &PY_TYPE_DEF(KeplerianPropagatorBuilder), module, "KeplerianPropagatorBuilder", 0);
        }

        void t_KeplerianPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "class_", make_descriptor(KeplerianPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "wrapfn_", make_descriptor(t_KeplerianPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KeplerianPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KeplerianPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_KeplerianPropagatorBuilder::wrap_Object(KeplerianPropagatorBuilder(((t_KeplerianPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_KeplerianPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KeplerianPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KeplerianPropagatorBuilder_init_(t_KeplerianPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              KeplerianPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
              {
                INT_CALL(object = KeplerianPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
              KeplerianPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
              {
                INT_CALL(object = KeplerianPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_KeplerianPropagatorBuilder_buildLeastSquaresModel(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_KeplerianPropagatorBuilder_buildPropagator(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_KeplerianPropagatorBuilder_copy(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          KeplerianPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_KeplerianPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/HashSet.h"
#include "java/util/Iterator.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/Spliterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *HashSet::class$ = NULL;
    jmethodID *HashSet::mids$ = NULL;
    bool HashSet::live$ = false;

    jclass HashSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/HashSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_f72f53318f80c525] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_init$_76637231e1f360e3] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_add_65c7d273e80d497a] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_65c7d273e80d497a] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_remove_65c7d273e80d497a] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_ef1070394b413a84] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    HashSet::HashSet() : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    HashSet::HashSet(jint a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    HashSet::HashSet(const ::java::util::Collection & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_f72f53318f80c525, a0.this$)) {}

    HashSet::HashSet(jint a0, jfloat a1) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_76637231e1f360e3, a0, a1)) {}

    jboolean HashSet::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_65c7d273e80d497a], a0.this$);
    }

    void HashSet::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    ::java::lang::Object HashSet::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    jboolean HashSet::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_65c7d273e80d497a], a0.this$);
    }

    jboolean HashSet::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Iterator HashSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    jboolean HashSet::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_65c7d273e80d497a], a0.this$);
    }

    jint HashSet::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    ::java::util::Spliterator HashSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_ef1070394b413a84]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_HashSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashSet_of_(t_HashSet *self, PyObject *args);
    static int t_HashSet_init_(t_HashSet *self, PyObject *args, PyObject *kwds);
    static PyObject *t_HashSet_add(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_clear(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_clone(t_HashSet *self);
    static PyObject *t_HashSet_contains(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_isEmpty(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_iterator(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_remove(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_size(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_spliterator(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_get__empty(t_HashSet *self, void *data);
    static PyObject *t_HashSet_get__parameters_(t_HashSet *self, void *data);
    static PyGetSetDef t_HashSet__fields_[] = {
      DECLARE_GET_FIELD(t_HashSet, empty),
      DECLARE_GET_FIELD(t_HashSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_HashSet__methods_[] = {
      DECLARE_METHOD(t_HashSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, add, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, clear, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, clone, METH_NOARGS),
      DECLARE_METHOD(t_HashSet, contains, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, remove, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, size, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, spliterator, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(HashSet)[] = {
      { Py_tp_methods, t_HashSet__methods_ },
      { Py_tp_init, (void *) t_HashSet_init_ },
      { Py_tp_getset, t_HashSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_HashSet *)) get_generic_iterator< t_HashSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(HashSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractSet),
      NULL
    };

    DEFINE_TYPE(HashSet, t_HashSet, HashSet);
    PyObject *t_HashSet::wrap_Object(const HashSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_HashSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashSet *self = (t_HashSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_HashSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_HashSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashSet *self = (t_HashSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_HashSet::install(PyObject *module)
    {
      installType(&PY_TYPE(HashSet), &PY_TYPE_DEF(HashSet), module, "HashSet", 0);
    }

    void t_HashSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "class_", make_descriptor(HashSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "wrapfn_", make_descriptor(t_HashSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_HashSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, HashSet::initializeClass, 1)))
        return NULL;
      return t_HashSet::wrap_Object(HashSet(((t_HashSet *) arg)->object.this$));
    }
    static PyObject *t_HashSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, HashSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_HashSet_of_(t_HashSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_HashSet_init_(t_HashSet *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          HashSet object((jobject) NULL);

          INT_CALL(object = HashSet());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = HashSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = HashSet(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          jint a0;
          jfloat a1;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            INT_CALL(object = HashSet(a0, a1));
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

    static PyObject *t_HashSet_add(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_HashSet_clear(t_HashSet *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_HashSet_clone(t_HashSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_HashSet_contains(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_HashSet_isEmpty(t_HashSet *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_HashSet_iterator(t_HashSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_HashSet_remove(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_HashSet_size(t_HashSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_HashSet_spliterator(t_HashSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "spliterator", args, 2);
    }
    static PyObject *t_HashSet_get__parameters_(t_HashSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_HashSet_get__empty(t_HashSet *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenVolumeShape::class$ = NULL;
            jmethodID *ScreenVolumeShape::mids$ = NULL;
            bool ScreenVolumeShape::live$ = false;
            ScreenVolumeShape *ScreenVolumeShape::BOX = NULL;
            ScreenVolumeShape *ScreenVolumeShape::ELLIPSOID = NULL;
            ScreenVolumeShape *ScreenVolumeShape::SPHERE = NULL;

            jclass ScreenVolumeShape::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_fcc870f7e7e8a951] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");
                mids$[mid_values_98246fcc3199a167] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                BOX = new ScreenVolumeShape(env->getStaticObjectField(cls, "BOX", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                ELLIPSOID = new ScreenVolumeShape(env->getStaticObjectField(cls, "ELLIPSOID", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                SPHERE = new ScreenVolumeShape(env->getStaticObjectField(cls, "SPHERE", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenVolumeShape ScreenVolumeShape::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenVolumeShape(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fcc870f7e7e8a951], a0.this$));
            }

            JArray< ScreenVolumeShape > ScreenVolumeShape::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenVolumeShape >(env->callStaticObjectMethod(cls, mids$[mid_values_98246fcc3199a167]));
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
          namespace cdm {
            static PyObject *t_ScreenVolumeShape_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeShape_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeShape_of_(t_ScreenVolumeShape *self, PyObject *args);
            static PyObject *t_ScreenVolumeShape_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenVolumeShape_values(PyTypeObject *type);
            static PyObject *t_ScreenVolumeShape_get__parameters_(t_ScreenVolumeShape *self, void *data);
            static PyGetSetDef t_ScreenVolumeShape__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenVolumeShape, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenVolumeShape__methods_[] = {
              DECLARE_METHOD(t_ScreenVolumeShape, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenVolumeShape, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenVolumeShape)[] = {
              { Py_tp_methods, t_ScreenVolumeShape__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenVolumeShape__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenVolumeShape)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenVolumeShape, t_ScreenVolumeShape, ScreenVolumeShape);
            PyObject *t_ScreenVolumeShape::wrap_Object(const ScreenVolumeShape& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeShape::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeShape *self = (t_ScreenVolumeShape *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenVolumeShape::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeShape::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeShape *self = (t_ScreenVolumeShape *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenVolumeShape::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenVolumeShape), &PY_TYPE_DEF(ScreenVolumeShape), module, "ScreenVolumeShape", 0);
            }

            void t_ScreenVolumeShape::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "class_", make_descriptor(ScreenVolumeShape::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "wrapfn_", make_descriptor(t_ScreenVolumeShape::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenVolumeShape::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "BOX", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::BOX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "ELLIPSOID", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::ELLIPSOID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "SPHERE", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::SPHERE)));
            }

            static PyObject *t_ScreenVolumeShape_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenVolumeShape::initializeClass, 1)))
                return NULL;
              return t_ScreenVolumeShape::wrap_Object(ScreenVolumeShape(((t_ScreenVolumeShape *) arg)->object.this$));
            }
            static PyObject *t_ScreenVolumeShape_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenVolumeShape::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenVolumeShape_of_(t_ScreenVolumeShape *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenVolumeShape_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenVolumeShape result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::valueOf(a0));
                return t_ScreenVolumeShape::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenVolumeShape_values(PyTypeObject *type)
            {
              JArray< ScreenVolumeShape > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenVolumeShape::wrap_jobject);
            }
            static PyObject *t_ScreenVolumeShape_get__parameters_(t_ScreenVolumeShape *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SymmLQ.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SymmLQ::class$ = NULL;
      jmethodID *SymmLQ::mids$ = NULL;
      bool SymmLQ::live$ = false;

      jclass SymmLQ::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SymmLQ");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e5c35461fd0d963d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;DZ)V");
          mids$[mid_init$_d84bd519b18260a3] = env->getMethodID(cls, "<init>", "(IDZ)V");
          mids$[mid_shouldCheck_b108b35ef48e27bd] = env->getMethodID(cls, "shouldCheck", "()Z");
          mids$[mid_solve_0c01ae2730abb842] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_f5ad289a93e4d7cc] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_89085f14c3881b25] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_b66895678db09891] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_d86cbaa25c2782b4] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_41b1622b2fb0a6ff] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_f5ad289a93e4d7cc] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_b66895678db09891] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_e8fb0bd158e01722] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SymmLQ::SymmLQ(const ::org::hipparchus::util::IterationManager & a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_e5c35461fd0d963d, a0.this$, a1, a2)) {}

      SymmLQ::SymmLQ(jint a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_d84bd519b18260a3, a0, a1, a2)) {}

      jboolean SymmLQ::shouldCheck() const
      {
        return env->callBooleanMethod(this$, mids$[mid_shouldCheck_b108b35ef48e27bd]);
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0c01ae2730abb842], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_f5ad289a93e4d7cc], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_89085f14c3881b25], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_b66895678db09891], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, jboolean a2, jdouble a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_d86cbaa25c2782b4], a0.this$, a1.this$, a2, a3));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, jboolean a3, jdouble a4) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_41b1622b2fb0a6ff], a0.this$, a1.this$, a2.this$, a3, a4));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_f5ad289a93e4d7cc], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_b66895678db09891], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, jboolean a4, jdouble a5) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_e8fb0bd158e01722], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
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
      static PyObject *t_SymmLQ_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SymmLQ_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SymmLQ_init_(t_SymmLQ *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SymmLQ_shouldCheck(t_SymmLQ *self);
      static PyObject *t_SymmLQ_solve(t_SymmLQ *self, PyObject *args);
      static PyObject *t_SymmLQ_solveInPlace(t_SymmLQ *self, PyObject *args);

      static PyMethodDef t_SymmLQ__methods_[] = {
        DECLARE_METHOD(t_SymmLQ, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SymmLQ, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SymmLQ, shouldCheck, METH_NOARGS),
        DECLARE_METHOD(t_SymmLQ, solve, METH_VARARGS),
        DECLARE_METHOD(t_SymmLQ, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SymmLQ)[] = {
        { Py_tp_methods, t_SymmLQ__methods_ },
        { Py_tp_init, (void *) t_SymmLQ_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SymmLQ)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::PreconditionedIterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(SymmLQ, t_SymmLQ, SymmLQ);

      void t_SymmLQ::install(PyObject *module)
      {
        installType(&PY_TYPE(SymmLQ), &PY_TYPE_DEF(SymmLQ), module, "SymmLQ", 0);
      }

      void t_SymmLQ::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "class_", make_descriptor(SymmLQ::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "wrapfn_", make_descriptor(t_SymmLQ::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SymmLQ_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SymmLQ::initializeClass, 1)))
          return NULL;
        return t_SymmLQ::wrap_Object(SymmLQ(((t_SymmLQ *) arg)->object.this$));
      }
      static PyObject *t_SymmLQ_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SymmLQ::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SymmLQ_init_(t_SymmLQ *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            SymmLQ object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::util::IterationManager::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SymmLQ(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            jboolean a2;
            SymmLQ object((jobject) NULL);

            if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = SymmLQ(a0, a1, a2));
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

      static PyObject *t_SymmLQ_shouldCheck(t_SymmLQ *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.shouldCheck());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SymmLQ_solve(t_SymmLQ *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            jboolean a3;
            jdouble a4;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SymmLQ), (PyObject *) self, "solve", args, 2);
      }

      static PyObject *t_SymmLQ_solveInPlace(t_SymmLQ *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            jboolean a4;
            jdouble a5;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3, a4, a5));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SymmLQ), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldUnivariateMatrixFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateMatrixFunction::class$ = NULL;
      jmethodID *FieldUnivariateMatrixFunction::mids$ = NULL;
      bool FieldUnivariateMatrixFunction::live$ = false;

      jclass FieldUnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateMatrixFunction_db6f0dbadebc2178] = env->getMethodID(cls, "toCalculusFieldUnivariateMatrixFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction;");
          mids$[mid_value_4c83cd715e038657] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction FieldUnivariateMatrixFunction::toCalculusFieldUnivariateMatrixFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateMatrixFunction_db6f0dbadebc2178], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldUnivariateMatrixFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_4c83cd715e038657], a0.this$));
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
      static PyObject *t_FieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_toCalculusFieldUnivariateMatrixFunction(t_FieldUnivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_value(t_FieldUnivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, toCalculusFieldUnivariateMatrixFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateMatrixFunction, t_FieldUnivariateMatrixFunction, FieldUnivariateMatrixFunction);

      void t_FieldUnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateMatrixFunction), &PY_TYPE_DEF(FieldUnivariateMatrixFunction), module, "FieldUnivariateMatrixFunction", 0);
      }

      void t_FieldUnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "class_", make_descriptor(FieldUnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "wrapfn_", make_descriptor(t_FieldUnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateMatrixFunction::wrap_Object(FieldUnivariateMatrixFunction(((t_FieldUnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateMatrixFunction_toCalculusFieldUnivariateMatrixFunction(t_FieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateMatrixFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateMatrixFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateMatrixFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateMatrixFunction_value(t_FieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PythonLibrationOrbit.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/orbits/CR3BPDifferentialCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PythonLibrationOrbit::class$ = NULL;
      jmethodID *PythonLibrationOrbit::mids$ = NULL;
      bool PythonLibrationOrbit::live$ = false;

      jclass PythonLibrationOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PythonLibrationOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6ca73a52ae88cb29] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_e2324264d8e2d238] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLibrationOrbit::PythonLibrationOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_6ca73a52ae88cb29, a0.this$, a1.this$, a2)) {}

      void PythonLibrationOrbit::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonLibrationOrbit::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonLibrationOrbit::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_PythonLibrationOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLibrationOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLibrationOrbit_init_(t_PythonLibrationOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLibrationOrbit_finalize(t_PythonLibrationOrbit *self);
      static PyObject *t_PythonLibrationOrbit_pythonExtension(t_PythonLibrationOrbit *self, PyObject *args);
      static jobject JNICALL t_PythonLibrationOrbit_applyCorrectionOnPV0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonLibrationOrbit_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonLibrationOrbit_get__self(t_PythonLibrationOrbit *self, void *data);
      static PyGetSetDef t_PythonLibrationOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLibrationOrbit, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLibrationOrbit__methods_[] = {
        DECLARE_METHOD(t_PythonLibrationOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLibrationOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLibrationOrbit, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLibrationOrbit, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLibrationOrbit)[] = {
        { Py_tp_methods, t_PythonLibrationOrbit__methods_ },
        { Py_tp_init, (void *) t_PythonLibrationOrbit_init_ },
        { Py_tp_getset, t_PythonLibrationOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLibrationOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(PythonLibrationOrbit, t_PythonLibrationOrbit, PythonLibrationOrbit);

      void t_PythonLibrationOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLibrationOrbit), &PY_TYPE_DEF(PythonLibrationOrbit), module, "PythonLibrationOrbit", 1);
      }

      void t_PythonLibrationOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "class_", make_descriptor(PythonLibrationOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "wrapfn_", make_descriptor(t_PythonLibrationOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLibrationOrbit::initializeClass);
        JNINativeMethod methods[] = {
          { "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;", (void *) t_PythonLibrationOrbit_applyCorrectionOnPV0 },
          { "pythonDecRef", "()V", (void *) t_PythonLibrationOrbit_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonLibrationOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLibrationOrbit::initializeClass, 1)))
          return NULL;
        return t_PythonLibrationOrbit::wrap_Object(PythonLibrationOrbit(((t_PythonLibrationOrbit *) arg)->object.this$));
      }
      static PyObject *t_PythonLibrationOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLibrationOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLibrationOrbit_init_(t_PythonLibrationOrbit *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
        jdouble a2;
        PythonLibrationOrbit object((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PythonLibrationOrbit(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonLibrationOrbit_finalize(t_PythonLibrationOrbit *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLibrationOrbit_pythonExtension(t_PythonLibrationOrbit *self, PyObject *args)
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

      static jobject JNICALL t_PythonLibrationOrbit_applyCorrectionOnPV0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::orbits::t_CR3BPDifferentialCorrection::wrap_Object(::org::orekit::orbits::CR3BPDifferentialCorrection(a0));
        PyObject *result = PyObject_CallMethod(obj, "applyCorrectionOnPV", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &value))
        {
          throwTypeError("applyCorrectionOnPV", result);
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

      static void JNICALL t_PythonLibrationOrbit_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonLibrationOrbit_get__self(t_PythonLibrationOrbit *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/XmlLexicalAnalyzer.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *XmlLexicalAnalyzer::class$ = NULL;
            jmethodID *XmlLexicalAnalyzer::mids$ = NULL;
            bool XmlLexicalAnalyzer::live$ = false;

            jclass XmlLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/XmlLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_579dcb2bf229954b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_accept_94f8bc3acabdf0ba] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XmlLexicalAnalyzer::XmlLexicalAnalyzer(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_579dcb2bf229954b, a0.this$)) {}

            ::java::lang::Object XmlLexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_94f8bc3acabdf0ba], a0.this$));
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
        namespace utils {
          namespace lexical {
            static PyObject *t_XmlLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XmlLexicalAnalyzer_init_(t_XmlLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XmlLexicalAnalyzer_accept(t_XmlLexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_XmlLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_XmlLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlLexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlLexicalAnalyzer)[] = {
              { Py_tp_methods, t_XmlLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_XmlLexicalAnalyzer_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(XmlLexicalAnalyzer, t_XmlLexicalAnalyzer, XmlLexicalAnalyzer);

            void t_XmlLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlLexicalAnalyzer), &PY_TYPE_DEF(XmlLexicalAnalyzer), module, "XmlLexicalAnalyzer", 0);
            }

            void t_XmlLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "class_", make_descriptor(XmlLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "wrapfn_", make_descriptor(t_XmlLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XmlLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_XmlLexicalAnalyzer::wrap_Object(XmlLexicalAnalyzer(((t_XmlLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_XmlLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XmlLexicalAnalyzer_init_(t_XmlLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              XmlLexicalAnalyzer object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = XmlLexicalAnalyzer(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XmlLexicalAnalyzer_accept(t_XmlLexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/AbstractCurveFitter.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *AbstractCurveFitter::class$ = NULL;
      jmethodID *AbstractCurveFitter::mids$ = NULL;
      bool AbstractCurveFitter::live$ = false;

      jclass AbstractCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/AbstractCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_fit_ae8024ae38144c11] = env->getMethodID(cls, "fit", "(Ljava/util/Collection;)[D");
          mids$[mid_getOptimizer_8233748a09e2a880] = env->getMethodID(cls, "getOptimizer", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer;");
          mids$[mid_getProblem_c197708a453e8034] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractCurveFitter::AbstractCurveFitter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      JArray< jdouble > AbstractCurveFitter::fit(const ::java::util::Collection & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_fit_ae8024ae38144c11], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_AbstractCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractCurveFitter_init_(t_AbstractCurveFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractCurveFitter_fit(t_AbstractCurveFitter *self, PyObject *arg);

      static PyMethodDef t_AbstractCurveFitter__methods_[] = {
        DECLARE_METHOD(t_AbstractCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractCurveFitter, fit, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractCurveFitter)[] = {
        { Py_tp_methods, t_AbstractCurveFitter__methods_ },
        { Py_tp_init, (void *) t_AbstractCurveFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractCurveFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractCurveFitter, t_AbstractCurveFitter, AbstractCurveFitter);

      void t_AbstractCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractCurveFitter), &PY_TYPE_DEF(AbstractCurveFitter), module, "AbstractCurveFitter", 0);
      }

      void t_AbstractCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "class_", make_descriptor(AbstractCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "wrapfn_", make_descriptor(t_AbstractCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractCurveFitter::initializeClass, 1)))
          return NULL;
        return t_AbstractCurveFitter::wrap_Object(AbstractCurveFitter(((t_AbstractCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_AbstractCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractCurveFitter_init_(t_AbstractCurveFitter *self, PyObject *args, PyObject *kwds)
      {
        AbstractCurveFitter object((jobject) NULL);

        INT_CALL(object = AbstractCurveFitter());
        self->object = object;

        return 0;
      }

      static PyObject *t_AbstractCurveFitter_fit(t_AbstractCurveFitter *self, PyObject *arg)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.fit(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "fit", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarD.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarC.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarN.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarS.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldJacobiElliptic::class$ = NULL;
          jmethodID *FieldJacobiElliptic::mids$ = NULL;
          bool FieldJacobiElliptic::live$ = false;

          jclass FieldJacobiElliptic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_arccd_616c74807d7607b4] = env->getMethodID(cls, "arccd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccd_a4b1871f4d29e58b] = env->getMethodID(cls, "arccd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccn_616c74807d7607b4] = env->getMethodID(cls, "arccn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccn_a4b1871f4d29e58b] = env->getMethodID(cls, "arccn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccs_616c74807d7607b4] = env->getMethodID(cls, "arccs", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccs_a4b1871f4d29e58b] = env->getMethodID(cls, "arccs", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdc_616c74807d7607b4] = env->getMethodID(cls, "arcdc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdc_a4b1871f4d29e58b] = env->getMethodID(cls, "arcdc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdn_616c74807d7607b4] = env->getMethodID(cls, "arcdn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdn_a4b1871f4d29e58b] = env->getMethodID(cls, "arcdn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcds_616c74807d7607b4] = env->getMethodID(cls, "arcds", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcds_a4b1871f4d29e58b] = env->getMethodID(cls, "arcds", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnc_616c74807d7607b4] = env->getMethodID(cls, "arcnc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnc_a4b1871f4d29e58b] = env->getMethodID(cls, "arcnc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnd_616c74807d7607b4] = env->getMethodID(cls, "arcnd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnd_a4b1871f4d29e58b] = env->getMethodID(cls, "arcnd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcns_616c74807d7607b4] = env->getMethodID(cls, "arcns", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcns_a4b1871f4d29e58b] = env->getMethodID(cls, "arcns", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsc_616c74807d7607b4] = env->getMethodID(cls, "arcsc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsc_a4b1871f4d29e58b] = env->getMethodID(cls, "arcsc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsd_616c74807d7607b4] = env->getMethodID(cls, "arcsd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsd_a4b1871f4d29e58b] = env->getMethodID(cls, "arcsd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsn_616c74807d7607b4] = env->getMethodID(cls, "arcsn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsn_a4b1871f4d29e58b] = env->getMethodID(cls, "arcsn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getM_eba8e72a22c984ac] = env->getMethodID(cls, "getM", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_valuesC_88f7757651bd3e5b] = env->getMethodID(cls, "valuesC", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarC;");
              mids$[mid_valuesC_40fcede707edc970] = env->getMethodID(cls, "valuesC", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarC;");
              mids$[mid_valuesD_4621ef4be89169e5] = env->getMethodID(cls, "valuesD", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarD;");
              mids$[mid_valuesD_2128915a3f02d132] = env->getMethodID(cls, "valuesD", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarD;");
              mids$[mid_valuesN_678147ffcbe4e15b] = env->getMethodID(cls, "valuesN", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarN;");
              mids$[mid_valuesN_1295efed17b01cb9] = env->getMethodID(cls, "valuesN", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarN;");
              mids$[mid_valuesS_87d1e9051f167b55] = env->getMethodID(cls, "valuesS", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarS;");
              mids$[mid_valuesS_494e8624d19465b8] = env->getMethodID(cls, "valuesS", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarS;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccd_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccd_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccn_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccn_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccs(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccs_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccs(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccs_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdc_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdc_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdn_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdn_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcds(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcds_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcds(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcds_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnc_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnc_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnd_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnd_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcns(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcns_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcns(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcns_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsc_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsc_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsd_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsd_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsn_616c74807d7607b4], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsn_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::getM() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM_eba8e72a22c984ac]));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC FieldJacobiElliptic::valuesC(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_88f7757651bd3e5b], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC FieldJacobiElliptic::valuesC(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_40fcede707edc970], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD FieldJacobiElliptic::valuesD(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_4621ef4be89169e5], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD FieldJacobiElliptic::valuesD(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_2128915a3f02d132], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN FieldJacobiElliptic::valuesN(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_678147ffcbe4e15b], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN FieldJacobiElliptic::valuesN(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_1295efed17b01cb9], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS FieldJacobiElliptic::valuesS(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_87d1e9051f167b55], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS FieldJacobiElliptic::valuesS(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_494e8624d19465b8], a0.this$));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldJacobiElliptic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiElliptic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiElliptic_of_(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccs(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcdc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcdn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcds(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcnc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcnd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcns(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_getM(t_FieldJacobiElliptic *self);
          static PyObject *t_FieldJacobiElliptic_valuesC(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesD(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesN(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesS(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_get__m(t_FieldJacobiElliptic *self, void *data);
          static PyObject *t_FieldJacobiElliptic_get__parameters_(t_FieldJacobiElliptic *self, void *data);
          static PyGetSetDef t_FieldJacobiElliptic__fields_[] = {
            DECLARE_GET_FIELD(t_FieldJacobiElliptic, m),
            DECLARE_GET_FIELD(t_FieldJacobiElliptic, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldJacobiElliptic__methods_[] = {
            DECLARE_METHOD(t_FieldJacobiElliptic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiElliptic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiElliptic, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccs, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcdc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcdn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcds, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcnc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcnd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcns, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, getM, METH_NOARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesC, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesD, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesN, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldJacobiElliptic)[] = {
            { Py_tp_methods, t_FieldJacobiElliptic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldJacobiElliptic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldJacobiElliptic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldJacobiElliptic, t_FieldJacobiElliptic, FieldJacobiElliptic);
          PyObject *t_FieldJacobiElliptic::wrap_Object(const FieldJacobiElliptic& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiElliptic::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiElliptic *self = (t_FieldJacobiElliptic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldJacobiElliptic::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiElliptic::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiElliptic *self = (t_FieldJacobiElliptic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldJacobiElliptic::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldJacobiElliptic), &PY_TYPE_DEF(FieldJacobiElliptic), module, "FieldJacobiElliptic", 0);
          }

          void t_FieldJacobiElliptic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "class_", make_descriptor(FieldJacobiElliptic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "wrapfn_", make_descriptor(t_FieldJacobiElliptic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldJacobiElliptic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldJacobiElliptic::initializeClass, 1)))
              return NULL;
            return t_FieldJacobiElliptic::wrap_Object(FieldJacobiElliptic(((t_FieldJacobiElliptic *) arg)->object.this$));
          }
          static PyObject *t_FieldJacobiElliptic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldJacobiElliptic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldJacobiElliptic_of_(t_FieldJacobiElliptic *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldJacobiElliptic_arccd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arccn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arccs(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccs(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccs(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccs", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcdc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcdc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcdc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcdc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcdn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcdn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcdn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcdn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcds(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcds(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcds(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcds", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcnc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcnc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcnc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcnc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcnd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcnd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcnd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcnd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcns(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcns(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcns(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcns", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_getM(t_FieldJacobiElliptic *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getM());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldJacobiElliptic_valuesC(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesC(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarC::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesC(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarC::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesC", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesD(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesD(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarD::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesD(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarD::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesD", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesN(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesN(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarN::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesN(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarN::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesN", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesS(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesS(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarS::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesS(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarS::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesS", args);
            return NULL;
          }
          static PyObject *t_FieldJacobiElliptic_get__parameters_(t_FieldJacobiElliptic *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldJacobiElliptic_get__m(t_FieldJacobiElliptic *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getM());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmHeader::class$ = NULL;
            jmethodID *OdmHeader::mids$ = NULL;
            bool OdmHeader::live$ = false;

            jclass OdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OdmHeader::OdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
            static PyObject *t_OdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OdmHeader_init_(t_OdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_OdmHeader__methods_[] = {
              DECLARE_METHOD(t_OdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmHeader)[] = {
              { Py_tp_methods, t_OdmHeader__methods_ },
              { Py_tp_init, (void *) t_OdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(OdmHeader, t_OdmHeader, OdmHeader);

            void t_OdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmHeader), &PY_TYPE_DEF(OdmHeader), module, "OdmHeader", 0);
            }

            void t_OdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "class_", make_descriptor(OdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "wrapfn_", make_descriptor(t_OdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmHeader::initializeClass, 1)))
                return NULL;
              return t_OdmHeader::wrap_Object(OdmHeader(((t_OdmHeader *) arg)->object.this$));
            }
            static PyObject *t_OdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OdmHeader_init_(t_OdmHeader *self, PyObject *args, PyObject *kwds)
            {
              OdmHeader object((jobject) NULL);

              INT_CALL(object = OdmHeader());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GroundFieldOfViewDetector.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/events/GroundFieldOfViewDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GroundFieldOfViewDetector::class$ = NULL;
        jmethodID *GroundFieldOfViewDetector::mids$ = NULL;
        bool GroundFieldOfViewDetector::live$ = false;

        jclass GroundFieldOfViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GroundFieldOfViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1159ffe950bd889c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFOV_8e0c5ec4b28dcc17] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_ca163c3511aa8748] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GroundFieldOfViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundFieldOfViewDetector::GroundFieldOfViewDetector(const ::org::orekit::frames::Frame & a0, const ::org::orekit::geometry::fov::FieldOfView & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1159ffe950bd889c, a0.this$, a1.this$)) {}

        jdouble GroundFieldOfViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::geometry::fov::FieldOfView GroundFieldOfViewDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_8e0c5ec4b28dcc17]));
        }

        ::org::orekit::frames::Frame GroundFieldOfViewDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
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
        static PyObject *t_GroundFieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundFieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundFieldOfViewDetector_of_(t_GroundFieldOfViewDetector *self, PyObject *args);
        static int t_GroundFieldOfViewDetector_init_(t_GroundFieldOfViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundFieldOfViewDetector_g(t_GroundFieldOfViewDetector *self, PyObject *args);
        static PyObject *t_GroundFieldOfViewDetector_getFOV(t_GroundFieldOfViewDetector *self);
        static PyObject *t_GroundFieldOfViewDetector_getFrame(t_GroundFieldOfViewDetector *self);
        static PyObject *t_GroundFieldOfViewDetector_get__fOV(t_GroundFieldOfViewDetector *self, void *data);
        static PyObject *t_GroundFieldOfViewDetector_get__frame(t_GroundFieldOfViewDetector *self, void *data);
        static PyObject *t_GroundFieldOfViewDetector_get__parameters_(t_GroundFieldOfViewDetector *self, void *data);
        static PyGetSetDef t_GroundFieldOfViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, fOV),
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, frame),
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundFieldOfViewDetector__methods_[] = {
          DECLARE_METHOD(t_GroundFieldOfViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundFieldOfViewDetector)[] = {
          { Py_tp_methods, t_GroundFieldOfViewDetector__methods_ },
          { Py_tp_init, (void *) t_GroundFieldOfViewDetector_init_ },
          { Py_tp_getset, t_GroundFieldOfViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundFieldOfViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GroundFieldOfViewDetector, t_GroundFieldOfViewDetector, GroundFieldOfViewDetector);
        PyObject *t_GroundFieldOfViewDetector::wrap_Object(const GroundFieldOfViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundFieldOfViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundFieldOfViewDetector *self = (t_GroundFieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundFieldOfViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundFieldOfViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundFieldOfViewDetector *self = (t_GroundFieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundFieldOfViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundFieldOfViewDetector), &PY_TYPE_DEF(GroundFieldOfViewDetector), module, "GroundFieldOfViewDetector", 0);
        }

        void t_GroundFieldOfViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "class_", make_descriptor(GroundFieldOfViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "wrapfn_", make_descriptor(t_GroundFieldOfViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundFieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundFieldOfViewDetector::initializeClass, 1)))
            return NULL;
          return t_GroundFieldOfViewDetector::wrap_Object(GroundFieldOfViewDetector(((t_GroundFieldOfViewDetector *) arg)->object.this$));
        }
        static PyObject *t_GroundFieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundFieldOfViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundFieldOfViewDetector_of_(t_GroundFieldOfViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundFieldOfViewDetector_init_(t_GroundFieldOfViewDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::geometry::fov::FieldOfView a1((jobject) NULL);
          GroundFieldOfViewDetector object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1))
          {
            INT_CALL(object = GroundFieldOfViewDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GroundFieldOfViewDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundFieldOfViewDetector_g(t_GroundFieldOfViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GroundFieldOfViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_GroundFieldOfViewDetector_getFOV(t_GroundFieldOfViewDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_GroundFieldOfViewDetector_getFrame(t_GroundFieldOfViewDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_GroundFieldOfViewDetector_get__parameters_(t_GroundFieldOfViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GroundFieldOfViewDetector_get__fOV(t_GroundFieldOfViewDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_GroundFieldOfViewDetector_get__frame(t_GroundFieldOfViewDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAdditionalStateProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAdditionalStateProvider::class$ = NULL;
      jmethodID *PythonAdditionalStateProvider::mids$ = NULL;
      bool PythonAdditionalStateProvider::live$ = false;

      jclass PythonAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalState_cb44069ef445f941] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_yield_680f8463a473c3cb] = env->getMethodID(cls, "yield", "(Lorg/orekit/propagation/SpacecraftState;)Z");
          mids$[mid_yield__680f8463a473c3cb] = env->getMethodID(cls, "yield_", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAdditionalStateProvider::PythonAdditionalStateProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonAdditionalStateProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonAdditionalStateProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAdditionalStateProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
      }

      jboolean PythonAdditionalStateProvider::yield(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yield_680f8463a473c3cb], a0.this$);
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
      static PyObject *t_PythonAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAdditionalStateProvider_init_(t_PythonAdditionalStateProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAdditionalStateProvider_finalize(t_PythonAdditionalStateProvider *self);
      static PyObject *t_PythonAdditionalStateProvider_pythonExtension(t_PythonAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_PythonAdditionalStateProvider_yield(t_PythonAdditionalStateProvider *self, PyObject *arg);
      static jobject JNICALL t_PythonAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonAdditionalStateProvider_get__self(t_PythonAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_PythonAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAdditionalStateProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_PythonAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, yield, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAdditionalStateProvider)[] = {
        { Py_tp_methods, t_PythonAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) t_PythonAdditionalStateProvider_init_ },
        { Py_tp_getset, t_PythonAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAdditionalStateProvider, t_PythonAdditionalStateProvider, PythonAdditionalStateProvider);

      void t_PythonAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAdditionalStateProvider), &PY_TYPE_DEF(PythonAdditionalStateProvider), module, "PythonAdditionalStateProvider", 1);
      }

      void t_PythonAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "class_", make_descriptor(PythonAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "wrapfn_", make_descriptor(t_PythonAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAdditionalStateProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D", (void *) t_PythonAdditionalStateProvider_getAdditionalState0 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonAdditionalStateProvider_getName1 },
          { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonAdditionalStateProvider_init2 },
          { "pythonDecRef", "()V", (void *) t_PythonAdditionalStateProvider_pythonDecRef3 },
          { "yield_", "(Lorg/orekit/propagation/SpacecraftState;)Z", (void *) t_PythonAdditionalStateProvider_yield_4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_PythonAdditionalStateProvider::wrap_Object(PythonAdditionalStateProvider(((t_PythonAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAdditionalStateProvider_init_(t_PythonAdditionalStateProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonAdditionalStateProvider object((jobject) NULL);

        INT_CALL(object = PythonAdditionalStateProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAdditionalStateProvider_finalize(t_PythonAdditionalStateProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAdditionalStateProvider_pythonExtension(t_PythonAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_PythonAdditionalStateProvider_yield(t_PythonAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.yield(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yield", arg);
        return NULL;
      }

      static jobject JNICALL t_PythonAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("getAdditionalState", result);
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

      static jobject JNICALL t_PythonAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
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

      static void JNICALL t_PythonAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "yield_", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("yield_", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonAdditionalStateProvider_get__self(t_PythonAdditionalStateProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParametersKey::class$ = NULL;
            jmethodID *SpacecraftParametersKey::mids$ = NULL;
            bool SpacecraftParametersKey::live$ = false;
            SpacecraftParametersKey *SpacecraftParametersKey::COMMENT = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::DRAG_AREA = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::DRAG_COEFF = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::MASS = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::SOLAR_RAD_AREA = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::SOLAR_RAD_COEFF = NULL;

            jclass SpacecraftParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_d213af3eb9d365fb] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;)Z");
                mids$[mid_valueOf_e7dc05c51a8d3f1d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;");
                mids$[mid_values_ef310c9d00ed9809] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new SpacecraftParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                DRAG_AREA = new SpacecraftParametersKey(env->getStaticObjectField(cls, "DRAG_AREA", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                DRAG_COEFF = new SpacecraftParametersKey(env->getStaticObjectField(cls, "DRAG_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                MASS = new SpacecraftParametersKey(env->getStaticObjectField(cls, "MASS", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                SOLAR_RAD_AREA = new SpacecraftParametersKey(env->getStaticObjectField(cls, "SOLAR_RAD_AREA", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                SOLAR_RAD_COEFF = new SpacecraftParametersKey(env->getStaticObjectField(cls, "SOLAR_RAD_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean SpacecraftParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_d213af3eb9d365fb], a0.this$, a1.this$, a2.this$);
            }

            SpacecraftParametersKey SpacecraftParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return SpacecraftParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e7dc05c51a8d3f1d], a0.this$));
            }

            JArray< SpacecraftParametersKey > SpacecraftParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< SpacecraftParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_ef310c9d00ed9809]));
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
            static PyObject *t_SpacecraftParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersKey_of_(t_SpacecraftParametersKey *self, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_process(t_SpacecraftParametersKey *self, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_values(PyTypeObject *type);
            static PyObject *t_SpacecraftParametersKey_get__parameters_(t_SpacecraftParametersKey *self, void *data);
            static PyGetSetDef t_SpacecraftParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_SpacecraftParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SpacecraftParametersKey__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_SpacecraftParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_SpacecraftParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParametersKey)[] = {
              { Py_tp_methods, t_SpacecraftParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SpacecraftParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(SpacecraftParametersKey, t_SpacecraftParametersKey, SpacecraftParametersKey);
            PyObject *t_SpacecraftParametersKey::wrap_Object(const SpacecraftParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SpacecraftParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SpacecraftParametersKey *self = (t_SpacecraftParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SpacecraftParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SpacecraftParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SpacecraftParametersKey *self = (t_SpacecraftParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SpacecraftParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParametersKey), &PY_TYPE_DEF(SpacecraftParametersKey), module, "SpacecraftParametersKey", 0);
            }

            void t_SpacecraftParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "class_", make_descriptor(SpacecraftParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "wrapfn_", make_descriptor(t_SpacecraftParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(SpacecraftParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "COMMENT", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "DRAG_AREA", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::DRAG_AREA)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "DRAG_COEFF", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::DRAG_COEFF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "MASS", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "SOLAR_RAD_AREA", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::SOLAR_RAD_AREA)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "SOLAR_RAD_COEFF", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::SOLAR_RAD_COEFF)));
            }

            static PyObject *t_SpacecraftParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParametersKey::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParametersKey::wrap_Object(SpacecraftParametersKey(((t_SpacecraftParametersKey *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SpacecraftParametersKey_of_(t_SpacecraftParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_SpacecraftParametersKey_process(t_SpacecraftParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_SpacecraftParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              SpacecraftParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::SpacecraftParametersKey::valueOf(a0));
                return t_SpacecraftParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_SpacecraftParametersKey_values(PyTypeObject *type)
            {
              JArray< SpacecraftParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::SpacecraftParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_SpacecraftParametersKey::wrap_jobject);
            }
            static PyObject *t_SpacecraftParametersKey_get__parameters_(t_SpacecraftParametersKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ItrfVersionProvider::class$ = NULL;
      jmethodID *ItrfVersionProvider::mids$ = NULL;
      bool ItrfVersionProvider::live$ = false;

      jclass ItrfVersionProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ItrfVersionProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConfiguration_20c55d75fa126896] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration ItrfVersionProvider::getConfiguration(const ::java::lang::String & a0, jint a1) const
      {
        return ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration(env->callObjectMethod(this$, mids$[mid_getConfiguration_20c55d75fa126896], a0.this$, a1));
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
      static PyObject *t_ItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ItrfVersionProvider_getConfiguration(t_ItrfVersionProvider *self, PyObject *args);

      static PyMethodDef t_ItrfVersionProvider__methods_[] = {
        DECLARE_METHOD(t_ItrfVersionProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ItrfVersionProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ItrfVersionProvider, getConfiguration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ItrfVersionProvider)[] = {
        { Py_tp_methods, t_ItrfVersionProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ItrfVersionProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ItrfVersionProvider, t_ItrfVersionProvider, ItrfVersionProvider);

      void t_ItrfVersionProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ItrfVersionProvider), &PY_TYPE_DEF(ItrfVersionProvider), module, "ItrfVersionProvider", 0);
      }

      void t_ItrfVersionProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "class_", make_descriptor(ItrfVersionProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "wrapfn_", make_descriptor(t_ItrfVersionProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ItrfVersionProvider::initializeClass, 1)))
          return NULL;
        return t_ItrfVersionProvider::wrap_Object(ItrfVersionProvider(((t_ItrfVersionProvider *) arg)->object.this$));
      }
      static PyObject *t_ItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ItrfVersionProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ItrfVersionProvider_getConfiguration(t_ItrfVersionProvider *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jint a1;
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration result((jobject) NULL);

        if (!parseArgs(args, "sI", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getConfiguration(a0, a1));
          return ::org::orekit::frames::t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getConfiguration", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/SpacecraftStateInterpolator.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "java/util/Optional.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *SpacecraftStateInterpolator::class$ = NULL;
      jmethodID *SpacecraftStateInterpolator::mids$ = NULL;
      bool SpacecraftStateInterpolator::live$ = false;

      jclass SpacecraftStateInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/SpacecraftStateInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5680f5c30eede66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_f67f9ac4338cd9bf] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_1be06daec585e1cc] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_6039fdd299a8bef6] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_47d46a6c49da3b1b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_85f9e9867ab8e5f6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;)V");
          mids$[mid_checkSampleAndInterpolatorConsistency_f0c4d5587e0fdc0c] = env->getStaticMethodID(cls, "checkSampleAndInterpolatorConsistency", "(Ljava/util/List;ZZ)V");
          mids$[mid_checkStatesDefinitionsConsistency_de3e021e7266b71e] = env->getStaticMethodID(cls, "checkStatesDefinitionsConsistency", "(Ljava/util/List;)V");
          mids$[mid_getAbsPVAInterpolator_c5e311a9e5531e7d] = env->getMethodID(cls, "getAbsPVAInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAdditionalStateInterpolator_c5e311a9e5531e7d] = env->getMethodID(cls, "getAdditionalStateInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAttitudeInterpolator_c5e311a9e5531e7d] = env->getMethodID(cls, "getAttitudeInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getMassInterpolator_c5e311a9e5531e7d] = env->getMethodID(cls, "getMassInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getOrbitInterpolator_c5e311a9e5531e7d] = env->getMethodID(cls, "getOrbitInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOutputFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSubInterpolators_2afa36052df4765d] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_c3c548c4263b98e4] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_interpolate_64365a434213ebd8] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/propagation/SpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b5680f5c30eede66, a0.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f67f9ac4338cd9bf, a0, a1.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_1be06daec585e1cc, a0, a1.this$, a2.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_6039fdd299a8bef6, a0, a1, a2.this$, a3.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4, const ::org::orekit::utils::AngularDerivativesFilter & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_47d46a6c49da3b1b, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::time::TimeInterpolator & a4, const ::org::orekit::time::TimeInterpolator & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_85f9e9867ab8e5f6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      void SpacecraftStateInterpolator::checkSampleAndInterpolatorConsistency(const ::java::util::List & a0, jboolean a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSampleAndInterpolatorConsistency_f0c4d5587e0fdc0c], a0.this$, a1, a2);
      }

      void SpacecraftStateInterpolator::checkStatesDefinitionsConsistency(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkStatesDefinitionsConsistency_de3e021e7266b71e], a0.this$);
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAbsPVAInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAbsPVAInterpolator_c5e311a9e5531e7d]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAdditionalStateInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAdditionalStateInterpolator_c5e311a9e5531e7d]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAttitudeInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAttitudeInterpolator_c5e311a9e5531e7d]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getMassInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getMassInterpolator_c5e311a9e5531e7d]));
      }

      jint SpacecraftStateInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1]);
      }

      ::java::util::Optional SpacecraftStateInterpolator::getOrbitInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_c5e311a9e5531e7d]));
      }

      ::org::orekit::frames::Frame SpacecraftStateInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_b86f9f61d97a7244]));
      }

      ::java::util::List SpacecraftStateInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_2afa36052df4765d]));
      }

      ::org::orekit::propagation::SpacecraftState SpacecraftStateInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_interpolate_c3c548c4263b98e4], a0.this$, a1.this$));
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
      static PyObject *t_SpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_of_(t_SpacecraftStateInterpolator *self, PyObject *args);
      static int t_SpacecraftStateInterpolator_init_(t_SpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpacecraftStateInterpolator_checkSampleAndInterpolatorConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_checkStatesDefinitionsConsistency(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_getAbsPVAInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getAdditionalStateInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getAttitudeInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getMassInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getNbInterpolationPoints(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_getOrbitInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getOutputFrame(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getSubInterpolators(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_interpolate(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_get__absPVAInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__additionalStateInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__attitudeInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__massInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__nbInterpolationPoints(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__orbitInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__outputFrame(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__subInterpolators(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__parameters_(t_SpacecraftStateInterpolator *self, void *data);
      static PyGetSetDef t_SpacecraftStateInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, absPVAInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, additionalStateInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, attitudeInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, massInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpacecraftStateInterpolator__methods_[] = {
        DECLARE_METHOD(t_SpacecraftStateInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, checkSampleAndInterpolatorConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, checkStatesDefinitionsConsistency, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAbsPVAInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAdditionalStateInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAttitudeInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getMassInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getNbInterpolationPoints, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getOutputFrame, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getSubInterpolators, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpacecraftStateInterpolator)[] = {
        { Py_tp_methods, t_SpacecraftStateInterpolator__methods_ },
        { Py_tp_init, (void *) t_SpacecraftStateInterpolator_init_ },
        { Py_tp_getset, t_SpacecraftStateInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpacecraftStateInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(SpacecraftStateInterpolator, t_SpacecraftStateInterpolator, SpacecraftStateInterpolator);
      PyObject *t_SpacecraftStateInterpolator::wrap_Object(const SpacecraftStateInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SpacecraftStateInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SpacecraftStateInterpolator *self = (t_SpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SpacecraftStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SpacecraftStateInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SpacecraftStateInterpolator *self = (t_SpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SpacecraftStateInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(SpacecraftStateInterpolator), &PY_TYPE_DEF(SpacecraftStateInterpolator), module, "SpacecraftStateInterpolator", 0);
      }

      void t_SpacecraftStateInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "class_", make_descriptor(SpacecraftStateInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "wrapfn_", make_descriptor(t_SpacecraftStateInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpacecraftStateInterpolator::initializeClass, 1)))
          return NULL;
        return t_SpacecraftStateInterpolator::wrap_Object(SpacecraftStateInterpolator(((t_SpacecraftStateInterpolator *) arg)->object.this$));
      }
      static PyObject *t_SpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpacecraftStateInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SpacecraftStateInterpolator_of_(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SpacecraftStateInterpolator_init_(t_SpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ikk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::AngularDerivativesFilter a5((jobject) NULL);
            PyTypeObject **p5;
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkkKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a5, &p5, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::time::TimeInterpolator a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::TimeInterpolator a5((jobject) NULL);
            PyTypeObject **p5;
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "kKKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4, &p4, ::org::orekit::time::t_TimeInterpolator::parameters_, &a5, &p5, ::org::orekit::time::t_TimeInterpolator::parameters_))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
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

      static PyObject *t_SpacecraftStateInterpolator_checkSampleAndInterpolatorConsistency(PyTypeObject *type, PyObject *args)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        jboolean a2;

        if (!parseArgs(args, "KZZ", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
        {
          OBJ_CALL(::org::orekit::propagation::SpacecraftStateInterpolator::checkSampleAndInterpolatorConsistency(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSampleAndInterpolatorConsistency", args);
        return NULL;
      }

      static PyObject *t_SpacecraftStateInterpolator_checkStatesDefinitionsConsistency(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(::org::orekit::propagation::SpacecraftStateInterpolator::checkStatesDefinitionsConsistency(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkStatesDefinitionsConsistency", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftStateInterpolator_getAbsPVAInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getAdditionalStateInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getAttitudeInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getMassInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getNbInterpolationPoints(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNbInterpolationPoints());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "getNbInterpolationPoints", args, 2);
      }

      static PyObject *t_SpacecraftStateInterpolator_getOrbitInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getOutputFrame(t_SpacecraftStateInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getSubInterpolators(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSubInterpolators());
          return ::java::util::t_List::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "getSubInterpolators", args, 2);
      }

      static PyObject *t_SpacecraftStateInterpolator_interpolate(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_SpacecraftStateInterpolator_get__parameters_(t_SpacecraftStateInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SpacecraftStateInterpolator_get__absPVAInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__additionalStateInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__attitudeInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__massInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__nbInterpolationPoints(t_SpacecraftStateInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__orbitInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__outputFrame(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__subInterpolators(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIOffset.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffset::class$ = NULL;
      jmethodID *UTCTAIOffset::mids$ = NULL;
      bool UTCTAIOffset::live$ = false;

      jclass UTCTAIOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLeap_dff5885c2c873297] = env->getMethodID(cls, "getLeap", "()D");
          mids$[mid_getMJD_570ce0828f81a2c1] = env->getMethodID(cls, "getMJD", "()I");
          mids$[mid_getOffset_bf1d7732f1acb697] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getOffset_2a5f05be83ff251d] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOffset_56358b00ba005b52] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_getValidityStart_85703d13e302437e] = env->getMethodID(cls, "getValidityStart", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate UTCTAIOffset::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      jdouble UTCTAIOffset::getLeap() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_dff5885c2c873297]);
      }

      jint UTCTAIOffset::getMJD() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJD_570ce0828f81a2c1]);
      }

      jdouble UTCTAIOffset::getOffset(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCTAIOffset::getOffset(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOffset_2a5f05be83ff251d], a0.this$));
      }

      jdouble UTCTAIOffset::getOffset(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_56358b00ba005b52], a0.this$, a1.this$);
      }

      ::org::orekit::time::AbsoluteDate UTCTAIOffset::getValidityStart() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidityStart_85703d13e302437e]));
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
      static PyObject *t_UTCTAIOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffset_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffset_getDate(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getLeap(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getMJD(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getOffset(t_UTCTAIOffset *self, PyObject *args);
      static PyObject *t_UTCTAIOffset_getValidityStart(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_get__date(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__leap(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__mJD(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__validityStart(t_UTCTAIOffset *self, void *data);
      static PyGetSetDef t_UTCTAIOffset__fields_[] = {
        DECLARE_GET_FIELD(t_UTCTAIOffset, date),
        DECLARE_GET_FIELD(t_UTCTAIOffset, leap),
        DECLARE_GET_FIELD(t_UTCTAIOffset, mJD),
        DECLARE_GET_FIELD(t_UTCTAIOffset, validityStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UTCTAIOffset__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffset, getDate, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getLeap, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getMJD, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getOffset, METH_VARARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getValidityStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffset)[] = {
        { Py_tp_methods, t_UTCTAIOffset__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UTCTAIOffset__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffset, t_UTCTAIOffset, UTCTAIOffset);

      void t_UTCTAIOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffset), &PY_TYPE_DEF(UTCTAIOffset), module, "UTCTAIOffset", 0);
      }

      void t_UTCTAIOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "class_", make_descriptor(UTCTAIOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "wrapfn_", make_descriptor(t_UTCTAIOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffset::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffset::wrap_Object(UTCTAIOffset(((t_UTCTAIOffset *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffset_getDate(t_UTCTAIOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCTAIOffset_getLeap(t_UTCTAIOffset *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLeap());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_UTCTAIOffset_getMJD(t_UTCTAIOffset *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJD());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_UTCTAIOffset_getOffset(t_UTCTAIOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOffset(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getOffset", args);
        return NULL;
      }

      static PyObject *t_UTCTAIOffset_getValidityStart(t_UTCTAIOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getValidityStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCTAIOffset_get__date(t_UTCTAIOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCTAIOffset_get__leap(t_UTCTAIOffset *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLeap());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_UTCTAIOffset_get__mJD(t_UTCTAIOffset *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJD());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_UTCTAIOffset_get__validityStart(t_UTCTAIOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getValidityStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
