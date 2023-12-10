#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/ChronologicalComparator.h"
#include "java/io/Serializable.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *ChronologicalComparator::class$ = NULL;
      jmethodID *ChronologicalComparator::mids$ = NULL;
      bool ChronologicalComparator::live$ = false;

      jclass ChronologicalComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/ChronologicalComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_2bed7cb285c68c88] = env->getMethodID(cls, "compare", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ChronologicalComparator::ChronologicalComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      jint ChronologicalComparator::compare(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_2bed7cb285c68c88], a0.this$, a1.this$);
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
      static PyObject *t_ChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ChronologicalComparator_init_(t_ChronologicalComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ChronologicalComparator_compare(t_ChronologicalComparator *self, PyObject *args);

      static PyMethodDef t_ChronologicalComparator__methods_[] = {
        DECLARE_METHOD(t_ChronologicalComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ChronologicalComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ChronologicalComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ChronologicalComparator)[] = {
        { Py_tp_methods, t_ChronologicalComparator__methods_ },
        { Py_tp_init, (void *) t_ChronologicalComparator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ChronologicalComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ChronologicalComparator, t_ChronologicalComparator, ChronologicalComparator);

      void t_ChronologicalComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(ChronologicalComparator), &PY_TYPE_DEF(ChronologicalComparator), module, "ChronologicalComparator", 0);
      }

      void t_ChronologicalComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "class_", make_descriptor(ChronologicalComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "wrapfn_", make_descriptor(t_ChronologicalComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ChronologicalComparator::initializeClass, 1)))
          return NULL;
        return t_ChronologicalComparator::wrap_Object(ChronologicalComparator(((t_ChronologicalComparator *) arg)->object.this$));
      }
      static PyObject *t_ChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ChronologicalComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ChronologicalComparator_init_(t_ChronologicalComparator *self, PyObject *args, PyObject *kwds)
      {
        ChronologicalComparator object((jobject) NULL);

        INT_CALL(object = ChronologicalComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_ChronologicalComparator_compare(t_ChronologicalComparator *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jint result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GLONASSAnalyticalPropagatorBuilder::class$ = NULL;
          jmethodID *GLONASSAnalyticalPropagatorBuilder::mids$ = NULL;
          bool GLONASSAnalyticalPropagatorBuilder::live$ = false;

          jclass GLONASSAnalyticalPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b15ec496e48d0936] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;)V");
              mids$[mid_init$_5f7a1029b2026edb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Lorg/orekit/data/DataContext;)V");
              mids$[mid_attitudeProvider_5161c4867b6c9b7a] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_build_169032d2e880ec70] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
              mids$[mid_dataContext_719680c7bc93c412] = env->getMethodID(cls, "dataContext", "(Lorg/orekit/data/DataContext;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_ecef_1923bef8f3c0f59d] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_eci_1923bef8f3c0f59d] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_mass_72536a18f7ecd06d] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GLONASSAnalyticalPropagatorBuilder::GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15ec496e48d0936, a0.this$)) {}

          GLONASSAnalyticalPropagatorBuilder::GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a0, const ::org::orekit::data::DataContext & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f7a1029b2026edb, a0.this$, a1.this$)) {}

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_5161c4867b6c9b7a], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAnalyticalPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_build_169032d2e880ec70]));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::dataContext(const ::org::orekit::data::DataContext & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_dataContext_719680c7bc93c412], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_1923bef8f3c0f59d], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_1923bef8f3c0f59d], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::mass(jdouble a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_72536a18f7ecd06d], a0));
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
      namespace analytical {
        namespace gnss {
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GLONASSAnalyticalPropagatorBuilder_init_(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_attitudeProvider(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_build(t_GLONASSAnalyticalPropagatorBuilder *self);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_dataContext(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_ecef(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_eci(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_mass(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_GLONASSAnalyticalPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, dataContext, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, mass, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GLONASSAnalyticalPropagatorBuilder)[] = {
            { Py_tp_methods, t_GLONASSAnalyticalPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_GLONASSAnalyticalPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GLONASSAnalyticalPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GLONASSAnalyticalPropagatorBuilder, t_GLONASSAnalyticalPropagatorBuilder, GLONASSAnalyticalPropagatorBuilder);

          void t_GLONASSAnalyticalPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(GLONASSAnalyticalPropagatorBuilder), &PY_TYPE_DEF(GLONASSAnalyticalPropagatorBuilder), module, "GLONASSAnalyticalPropagatorBuilder", 0);
          }

          void t_GLONASSAnalyticalPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "class_", make_descriptor(GLONASSAnalyticalPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "wrapfn_", make_descriptor(t_GLONASSAnalyticalPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GLONASSAnalyticalPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(GLONASSAnalyticalPropagatorBuilder(((t_GLONASSAnalyticalPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GLONASSAnalyticalPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GLONASSAnalyticalPropagatorBuilder_init_(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a0((jobject) NULL);
                GLONASSAnalyticalPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = GLONASSAnalyticalPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a0((jobject) NULL);
                ::org::orekit::data::DataContext a1((jobject) NULL);
                GLONASSAnalyticalPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GLONASSAnalyticalPropagatorBuilder(a0, a1));
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

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_attitudeProvider(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_build(t_GLONASSAnalyticalPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_dataContext(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::data::DataContext a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.dataContext(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "dataContext", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_ecef(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_eci(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_mass(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedAngularCoordinates::class$ = NULL;
      jmethodID *TimeStampedAngularCoordinates::mids$ = NULL;
      bool TimeStampedAngularCoordinates::live$ = false;

      jclass TimeStampedAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2b9eda08b3ec8dd7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_9ff2f3ca38e5cacd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_bc95563ddeee02cc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_d13df62481f4e58d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_addOffset_fa2097760de32aee] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_revert_b8bfd7046d8ee6f7] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_shiftedBy_577c57882f69ee57] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_subtractOffset_fa2097760de32aee] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_2b9eda08b3ec8dd7, a0.this$, a1.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9ff2f3ca38e5cacd, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_bc95563ddeee02cc, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d13df62481f4e58d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::addOffset(const ::org::orekit::utils::AngularCoordinates & a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_fa2097760de32aee], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate TimeStampedAngularCoordinates::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::revert() const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_b8bfd7046d8ee6f7]));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_577c57882f69ee57], a0));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::subtractOffset(const ::org::orekit::utils::AngularCoordinates & a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_fa2097760de32aee], a0.this$));
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
      static PyObject *t_TimeStampedAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedAngularCoordinates_init_(t_TimeStampedAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedAngularCoordinates_addOffset(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_getDate(t_TimeStampedAngularCoordinates *self);
      static PyObject *t_TimeStampedAngularCoordinates_revert(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_shiftedBy(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_subtractOffset(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_get__date(t_TimeStampedAngularCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinates, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, addOffset, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, revert, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, subtractOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedAngularCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedAngularCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedAngularCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AngularCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedAngularCoordinates, t_TimeStampedAngularCoordinates, TimeStampedAngularCoordinates);

      void t_TimeStampedAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedAngularCoordinates), &PY_TYPE_DEF(TimeStampedAngularCoordinates), module, "TimeStampedAngularCoordinates", 0);
      }

      void t_TimeStampedAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "class_", make_descriptor(TimeStampedAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "wrapfn_", make_descriptor(t_TimeStampedAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedAngularCoordinates::wrap_Object(TimeStampedAngularCoordinates(((t_TimeStampedAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedAngularCoordinates_init_(t_TimeStampedAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TimeStampedAngularCoordinates_addOffset(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::AngularCoordinates a0((jobject) NULL);
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::utils::AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "addOffset", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_getDate(t_TimeStampedAngularCoordinates *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedAngularCoordinates_revert(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.revert());
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "revert", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_shiftedBy(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        jdouble a0;
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_subtractOffset(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::AngularCoordinates a0((jobject) NULL);
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::utils::AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "subtractOffset", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_get__date(t_TimeStampedAngularCoordinates *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile$SatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *AttitudeEphemerisFile$SatelliteAttitudeEphemeris::mids$ = NULL;
        bool AttitudeEphemerisFile$SatelliteAttitudeEphemeris::live$ = false;

        jclass AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_f95b60a986adb964] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_f95b60a986adb964]));
        }

        ::java::lang::String AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
        }

        ::java::util::List AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
      namespace general {
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_of_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getAttitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getId(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getSegments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStart(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__attitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__id(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__segments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__start(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__stop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__parameters_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, attitudeProvider),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, id),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, segments),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, start),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, stop),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, AttitudeEphemerisFile$SatelliteAttitudeEphemeris);
        PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(const AttitudeEphemerisFile$SatelliteAttitudeEphemeris& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self = (t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self = (t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), &PY_TYPE_DEF(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), module, "AttitudeEphemerisFile$SatelliteAttitudeEphemeris", 0);
        }

        void t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "class_", make_descriptor(AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(AttitudeEphemerisFile$SatelliteAttitudeEphemeris(((t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_of_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getAttitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getId(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getSegments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStart(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__parameters_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__attitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__id(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__segments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__start(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__stop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/ITRFVersion$Converter.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersion::class$ = NULL;
      jmethodID *ITRFVersion::mids$ = NULL;
      bool ITRFVersion::live$ = false;
      ITRFVersion *ITRFVersion::ITRF_1988 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1989 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1990 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1991 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1992 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1993 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1994 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1996 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1997 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2000 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2005 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2008 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2014 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2020 = NULL;

      jclass ITRFVersion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConverter_e79e2ee72fd76c00] = env->getStaticMethodID(cls, "getConverter", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/frames/ITRFVersion;)Lorg/orekit/frames/ITRFVersion$Converter;");
          mids$[mid_getConverter_2b2635d05c2058b1] = env->getStaticMethodID(cls, "getConverter", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/frames/ITRFVersion;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/ITRFVersion$Converter;");
          mids$[mid_getITRFVersion_94090907cc596f0f] = env->getStaticMethodID(cls, "getITRFVersion", "(Ljava/lang/String;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getITRFVersion_fbecc2ef02535c5e] = env->getStaticMethodID(cls, "getITRFVersion", "(I)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getLast_8a73c81b6e5084ce] = env->getStaticMethodID(cls, "getLast", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getYear_570ce0828f81a2c1] = env->getMethodID(cls, "getYear", "()I");
          mids$[mid_valueOf_94090907cc596f0f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_values_c913bbb9aa153cf0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/ITRFVersion;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ITRF_1988 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1988", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1989 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1989", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1990 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1990", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1991 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1991", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1992 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1992", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1993 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1993", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1994 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1994", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1996 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1996", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1997 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1997", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2000 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2000", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2005 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2005", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2008 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2008", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2014 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2014", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2020 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2020", "Lorg/orekit/frames/ITRFVersion;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion$Converter ITRFVersion::getConverter(const ITRFVersion & a0, const ITRFVersion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::ITRFVersion$Converter(env->callStaticObjectMethod(cls, mids$[mid_getConverter_e79e2ee72fd76c00], a0.this$, a1.this$));
      }

      ::org::orekit::frames::ITRFVersion$Converter ITRFVersion::getConverter(const ITRFVersion & a0, const ITRFVersion & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::ITRFVersion$Converter(env->callStaticObjectMethod(cls, mids$[mid_getConverter_2b2635d05c2058b1], a0.this$, a1.this$, a2.this$));
      }

      ITRFVersion ITRFVersion::getITRFVersion(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getITRFVersion_94090907cc596f0f], a0.this$));
      }

      ITRFVersion ITRFVersion::getITRFVersion(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getITRFVersion_fbecc2ef02535c5e], a0));
      }

      ITRFVersion ITRFVersion::getLast()
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getLast_8a73c81b6e5084ce]));
      }

      ::java::lang::String ITRFVersion::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jint ITRFVersion::getYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getYear_570ce0828f81a2c1]);
      }

      ITRFVersion ITRFVersion::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_valueOf_94090907cc596f0f], a0.this$));
      }

      JArray< ITRFVersion > ITRFVersion::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ITRFVersion >(env->callStaticObjectMethod(cls, mids$[mid_values_c913bbb9aa153cf0]));
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
      static PyObject *t_ITRFVersion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion_of_(t_ITRFVersion *self, PyObject *args);
      static PyObject *t_ITRFVersion_getConverter(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_getITRFVersion(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_getLast(PyTypeObject *type);
      static PyObject *t_ITRFVersion_getName(t_ITRFVersion *self);
      static PyObject *t_ITRFVersion_getYear(t_ITRFVersion *self);
      static PyObject *t_ITRFVersion_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_values(PyTypeObject *type);
      static PyObject *t_ITRFVersion_get__last(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__name(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__year(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__parameters_(t_ITRFVersion *self, void *data);
      static PyGetSetDef t_ITRFVersion__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersion, last),
        DECLARE_GET_FIELD(t_ITRFVersion, name),
        DECLARE_GET_FIELD(t_ITRFVersion, year),
        DECLARE_GET_FIELD(t_ITRFVersion, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersion__methods_[] = {
        DECLARE_METHOD(t_ITRFVersion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, of_, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion, getConverter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getITRFVersion, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getLast, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getName, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion, getYear, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersion)[] = {
        { Py_tp_methods, t_ITRFVersion__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ITRFVersion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersion)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ITRFVersion, t_ITRFVersion, ITRFVersion);
      PyObject *t_ITRFVersion::wrap_Object(const ITRFVersion& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion *self = (t_ITRFVersion *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ITRFVersion::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion *self = (t_ITRFVersion *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ITRFVersion::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersion), &PY_TYPE_DEF(ITRFVersion), module, "ITRFVersion", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "Converter", make_descriptor(&PY_TYPE_DEF(ITRFVersion$Converter)));
      }

      void t_ITRFVersion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "class_", make_descriptor(ITRFVersion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "wrapfn_", make_descriptor(t_ITRFVersion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "boxfn_", make_descriptor(boxObject));
        env->getClass(ITRFVersion::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1988", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1989", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1990", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1991", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1992", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1993", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1994", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1996", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1997", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2000", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2005", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2008", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2014", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2014)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2020", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2020)));
      }

      static PyObject *t_ITRFVersion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersion::initializeClass, 1)))
          return NULL;
        return t_ITRFVersion::wrap_Object(ITRFVersion(((t_ITRFVersion *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ITRFVersion_of_(t_ITRFVersion *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ITRFVersion_getConverter(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ITRFVersion a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::ITRFVersion$Converter result((jobject) NULL);

            if (!parseArgs(args, "KK", ITRFVersion::initializeClass, ITRFVersion::initializeClass, &a0, &p0, t_ITRFVersion::parameters_, &a1, &p1, t_ITRFVersion::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getConverter(a0, a1));
              return ::org::orekit::frames::t_ITRFVersion$Converter::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ITRFVersion a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            ::org::orekit::frames::ITRFVersion$Converter result((jobject) NULL);

            if (!parseArgs(args, "KKk", ITRFVersion::initializeClass, ITRFVersion::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_ITRFVersion::parameters_, &a1, &p1, t_ITRFVersion::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getConverter(a0, a1, a2));
              return ::org::orekit::frames::t_ITRFVersion$Converter::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getConverter", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion_getITRFVersion(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ITRFVersion result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getITRFVersion(a0));
              return t_ITRFVersion::wrap_Object(result);
            }
          }
          {
            jint a0;
            ITRFVersion result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getITRFVersion(a0));
              return t_ITRFVersion::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getITRFVersion", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion_getLast(PyTypeObject *type)
      {
        ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getLast());
        return t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion_getName(t_ITRFVersion *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ITRFVersion_getYear(t_ITRFVersion *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ITRFVersion_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ITRFVersion result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::valueOf(a0));
          return t_ITRFVersion::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ITRFVersion_values(PyTypeObject *type)
      {
        JArray< ITRFVersion > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::values());
        return JArray<jobject>(result.this$).wrap(t_ITRFVersion::wrap_jobject);
      }
      static PyObject *t_ITRFVersion_get__parameters_(t_ITRFVersion *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ITRFVersion_get__last(t_ITRFVersion *self, void *data)
      {
        ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getLast());
        return t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_ITRFVersion_get__name(t_ITRFVersion *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_ITRFVersion_get__year(t_ITRFVersion *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getYear());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouSatelliteType::class$ = NULL;
            jmethodID *BeidouSatelliteType::mids$ = NULL;
            bool BeidouSatelliteType::live$ = false;
            BeidouSatelliteType *BeidouSatelliteType::GEO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::IGSO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::MEO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::RESERVED = NULL;

            jclass BeidouSatelliteType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_d513f8b0a135b0af] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");
                mids$[mid_values_31fd2a947ff6ef21] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                GEO = new BeidouSatelliteType(env->getStaticObjectField(cls, "GEO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                IGSO = new BeidouSatelliteType(env->getStaticObjectField(cls, "IGSO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                MEO = new BeidouSatelliteType(env->getStaticObjectField(cls, "MEO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                RESERVED = new BeidouSatelliteType(env->getStaticObjectField(cls, "RESERVED", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouSatelliteType BeidouSatelliteType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return BeidouSatelliteType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d513f8b0a135b0af], a0.this$));
            }

            JArray< BeidouSatelliteType > BeidouSatelliteType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< BeidouSatelliteType >(env->callStaticObjectMethod(cls, mids$[mid_values_31fd2a947ff6ef21]));
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_BeidouSatelliteType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouSatelliteType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouSatelliteType_of_(t_BeidouSatelliteType *self, PyObject *args);
            static PyObject *t_BeidouSatelliteType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_BeidouSatelliteType_values(PyTypeObject *type);
            static PyObject *t_BeidouSatelliteType_get__parameters_(t_BeidouSatelliteType *self, void *data);
            static PyGetSetDef t_BeidouSatelliteType__fields_[] = {
              DECLARE_GET_FIELD(t_BeidouSatelliteType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouSatelliteType__methods_[] = {
              DECLARE_METHOD(t_BeidouSatelliteType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, of_, METH_VARARGS),
              DECLARE_METHOD(t_BeidouSatelliteType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouSatelliteType)[] = {
              { Py_tp_methods, t_BeidouSatelliteType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_BeidouSatelliteType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouSatelliteType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(BeidouSatelliteType, t_BeidouSatelliteType, BeidouSatelliteType);
            PyObject *t_BeidouSatelliteType::wrap_Object(const BeidouSatelliteType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BeidouSatelliteType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BeidouSatelliteType *self = (t_BeidouSatelliteType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_BeidouSatelliteType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BeidouSatelliteType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BeidouSatelliteType *self = (t_BeidouSatelliteType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_BeidouSatelliteType::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouSatelliteType), &PY_TYPE_DEF(BeidouSatelliteType), module, "BeidouSatelliteType", 0);
            }

            void t_BeidouSatelliteType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "class_", make_descriptor(BeidouSatelliteType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "wrapfn_", make_descriptor(t_BeidouSatelliteType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouSatelliteType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "GEO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::GEO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "IGSO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::IGSO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "MEO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::MEO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "RESERVED", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::RESERVED)));
            }

            static PyObject *t_BeidouSatelliteType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouSatelliteType::initializeClass, 1)))
                return NULL;
              return t_BeidouSatelliteType::wrap_Object(BeidouSatelliteType(((t_BeidouSatelliteType *) arg)->object.this$));
            }
            static PyObject *t_BeidouSatelliteType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouSatelliteType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_BeidouSatelliteType_of_(t_BeidouSatelliteType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_BeidouSatelliteType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              BeidouSatelliteType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::valueOf(a0));
                return t_BeidouSatelliteType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_BeidouSatelliteType_values(PyTypeObject *type)
            {
              JArray< BeidouSatelliteType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::values());
              return JArray<jobject>(result.this$).wrap(t_BeidouSatelliteType::wrap_jobject);
            }
            static PyObject *t_BeidouSatelliteType_get__parameters_(t_BeidouSatelliteType *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/Vector3DFormat.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/text/NumberFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/text/ParsePosition.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3DFormat.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Vector3DFormat::class$ = NULL;
          jmethodID *Vector3DFormat::mids$ = NULL;
          bool Vector3DFormat::live$ = false;

          jclass Vector3DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Vector3DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_256f36a22c0d0f55] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_3c57e287341c9288] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_4ed7d7dd28d1bddd] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_84b38396c796d436] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector3DFormat_4b05d07dafeb1828] = env->getStaticMethodID(cls, "getVector3DFormat", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3DFormat;");
              mids$[mid_getVector3DFormat_979518c04a8595fe] = env->getStaticMethodID(cls, "getVector3DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/threed/Vector3DFormat;");
              mids$[mid_parse_c1d9e64bdfba8d93] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_parse_f78788fea04fcfc2] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector3DFormat::Vector3DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          Vector3DFormat::Vector3DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_256f36a22c0d0f55, a0.this$)) {}

          Vector3DFormat::Vector3DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_3c57e287341c9288, a0.this$, a1.this$, a2.this$)) {}

          Vector3DFormat::Vector3DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_4ed7d7dd28d1bddd, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::StringBuffer Vector3DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_84b38396c796d436], a0.this$, a1.this$, a2.this$));
          }

          Vector3DFormat Vector3DFormat::getVector3DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector3DFormat_4b05d07dafeb1828]));
          }

          Vector3DFormat Vector3DFormat::getVector3DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector3DFormat_979518c04a8595fe], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Vector3DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_parse_c1d9e64bdfba8d93], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Vector3DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_parse_f78788fea04fcfc2], a0.this$, a1.this$));
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
          static PyObject *t_Vector3DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3DFormat_of_(t_Vector3DFormat *self, PyObject *args);
          static int t_Vector3DFormat_init_(t_Vector3DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector3DFormat_format(t_Vector3DFormat *self, PyObject *args);
          static PyObject *t_Vector3DFormat_getVector3DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3DFormat_parse(t_Vector3DFormat *self, PyObject *args);
          static PyObject *t_Vector3DFormat_get__vector3DFormat(t_Vector3DFormat *self, void *data);
          static PyObject *t_Vector3DFormat_get__parameters_(t_Vector3DFormat *self, void *data);
          static PyGetSetDef t_Vector3DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector3DFormat, vector3DFormat),
            DECLARE_GET_FIELD(t_Vector3DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector3DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector3DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector3DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector3DFormat, getVector3DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector3DFormat)[] = {
            { Py_tp_methods, t_Vector3DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector3DFormat_init_ },
            { Py_tp_getset, t_Vector3DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector3DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector3DFormat, t_Vector3DFormat, Vector3DFormat);
          PyObject *t_Vector3DFormat::wrap_Object(const Vector3DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector3DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector3DFormat *self = (t_Vector3DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector3DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector3DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector3DFormat *self = (t_Vector3DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector3DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector3DFormat), &PY_TYPE_DEF(Vector3DFormat), module, "Vector3DFormat", 0);
          }

          void t_Vector3DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "class_", make_descriptor(Vector3DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "wrapfn_", make_descriptor(t_Vector3DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector3DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector3DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector3DFormat::wrap_Object(Vector3DFormat(((t_Vector3DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector3DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector3DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector3DFormat_of_(t_Vector3DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector3DFormat_init_(t_Vector3DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector3DFormat object((jobject) NULL);

                INT_CALL(object = Vector3DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector3DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "sss", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector3DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::text::NumberFormat a3((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector3DFormat(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
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

          static PyObject *t_Vector3DFormat_format(t_Vector3DFormat *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Vector3DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector3DFormat_getVector3DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector3DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3DFormat::getVector3DFormat());
                return t_Vector3DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector3DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3DFormat::getVector3DFormat(a0));
                  return t_Vector3DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector3DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector3DFormat_parse(t_Vector3DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector3DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector3DFormat_get__parameters_(t_Vector3DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector3DFormat_get__vector3DFormat(t_Vector3DFormat *self, void *data)
          {
            Vector3DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector3DFormat());
            return t_Vector3DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
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
              mids$[mid_init$_d160e5ef64855c01] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Line;)V");
              mids$[mid_init$_9e348818a9543cf1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_distance_1b5717d3483243c3] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_getEnd_73f627838730c264] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getLength_dff5885c2c873297] = env->getMethodID(cls, "getLength", "()D");
              mids$[mid_getLine_4dee9d21a28a0b70] = env->getMethodID(cls, "getLine", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_getStart_73f627838730c264] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::geometry::euclidean::twod::Line & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d160e5ef64855c01, a0.this$, a1.this$, a2.this$)) {}

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e348818a9543cf1, a0.this$, a1.this$, a2)) {}

          jdouble Segment::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_1b5717d3483243c3], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Segment::getEnd() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getEnd_73f627838730c264]));
          }

          jdouble Segment::getLength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLength_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Line Segment::getLine() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Line(env->callObjectMethod(this$, mids$[mid_getLine_4dee9d21a28a0b70]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Segment::getStart() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getStart_73f627838730c264]));
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
#include "org/hipparchus/optim/BaseMultivariateOptimizer.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseMultivariateOptimizer::class$ = NULL;
      jmethodID *BaseMultivariateOptimizer::mids$ = NULL;
      bool BaseMultivariateOptimizer::live$ = false;

      jclass BaseMultivariateOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseMultivariateOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLowerBound_60c7040667a7dc5c] = env->getMethodID(cls, "getLowerBound", "()[D");
          mids$[mid_getStartPoint_60c7040667a7dc5c] = env->getMethodID(cls, "getStartPoint", "()[D");
          mids$[mid_getUpperBound_60c7040667a7dc5c] = env->getMethodID(cls, "getUpperBound", "()[D");
          mids$[mid_optimize_19319236ce3fd082] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_parseOptimizationData_3d26e9f3a1d7e833] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > BaseMultivariateOptimizer::getLowerBound() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getLowerBound_60c7040667a7dc5c]));
      }

      JArray< jdouble > BaseMultivariateOptimizer::getStartPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStartPoint_60c7040667a7dc5c]));
      }

      JArray< jdouble > BaseMultivariateOptimizer::getUpperBound() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpperBound_60c7040667a7dc5c]));
      }

      ::java::lang::Object BaseMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_19319236ce3fd082], a0.this$));
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
      static PyObject *t_BaseMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultivariateOptimizer_of_(t_BaseMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultivariateOptimizer_getLowerBound(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_getStartPoint(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_getUpperBound(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_optimize(t_BaseMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultivariateOptimizer_get__lowerBound(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__startPoint(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__upperBound(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__parameters_(t_BaseMultivariateOptimizer *self, void *data);
      static PyGetSetDef t_BaseMultivariateOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, lowerBound),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, startPoint),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, upperBound),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseMultivariateOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseMultivariateOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getStartPoint, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseMultivariateOptimizer)[] = {
        { Py_tp_methods, t_BaseMultivariateOptimizer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseMultivariateOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseMultivariateOptimizer)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::BaseOptimizer),
        NULL
      };

      DEFINE_TYPE(BaseMultivariateOptimizer, t_BaseMultivariateOptimizer, BaseMultivariateOptimizer);
      PyObject *t_BaseMultivariateOptimizer::wrap_Object(const BaseMultivariateOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultivariateOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultivariateOptimizer *self = (t_BaseMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultivariateOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultivariateOptimizer *self = (t_BaseMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseMultivariateOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseMultivariateOptimizer), &PY_TYPE_DEF(BaseMultivariateOptimizer), module, "BaseMultivariateOptimizer", 0);
      }

      void t_BaseMultivariateOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "class_", make_descriptor(BaseMultivariateOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "wrapfn_", make_descriptor(t_BaseMultivariateOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseMultivariateOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseMultivariateOptimizer::wrap_Object(BaseMultivariateOptimizer(((t_BaseMultivariateOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseMultivariateOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseMultivariateOptimizer_of_(t_BaseMultivariateOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_BaseMultivariateOptimizer_getLowerBound(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerBound());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_getStartPoint(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartPoint());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_getUpperBound(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperBound());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_optimize(t_BaseMultivariateOptimizer *self, PyObject *args)
      {
        JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.optimize(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BaseMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
      }
      static PyObject *t_BaseMultivariateOptimizer_get__parameters_(t_BaseMultivariateOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseMultivariateOptimizer_get__lowerBound(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerBound());
        return value.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_get__startPoint(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartPoint());
        return value.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_get__upperBound(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperBound());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/GlonassUserRangeAccuracy.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *GlonassUserRangeAccuracy::class$ = NULL;
            jmethodID *GlonassUserRangeAccuracy::mids$ = NULL;
            bool GlonassUserRangeAccuracy::live$ = false;

            jclass GlonassUserRangeAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/GlonassUserRangeAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GlonassUserRangeAccuracy::GlonassUserRangeAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            jdouble GlonassUserRangeAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_dff5885c2c873297]);
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
            static PyObject *t_GlonassUserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GlonassUserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GlonassUserRangeAccuracy_init_(t_GlonassUserRangeAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GlonassUserRangeAccuracy_getAccuracy(t_GlonassUserRangeAccuracy *self);
            static PyObject *t_GlonassUserRangeAccuracy_get__accuracy(t_GlonassUserRangeAccuracy *self, void *data);
            static PyGetSetDef t_GlonassUserRangeAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_GlonassUserRangeAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GlonassUserRangeAccuracy__methods_[] = {
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GlonassUserRangeAccuracy)[] = {
              { Py_tp_methods, t_GlonassUserRangeAccuracy__methods_ },
              { Py_tp_init, (void *) t_GlonassUserRangeAccuracy_init_ },
              { Py_tp_getset, t_GlonassUserRangeAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GlonassUserRangeAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GlonassUserRangeAccuracy, t_GlonassUserRangeAccuracy, GlonassUserRangeAccuracy);

            void t_GlonassUserRangeAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(GlonassUserRangeAccuracy), &PY_TYPE_DEF(GlonassUserRangeAccuracy), module, "GlonassUserRangeAccuracy", 0);
            }

            void t_GlonassUserRangeAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "class_", make_descriptor(GlonassUserRangeAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "wrapfn_", make_descriptor(t_GlonassUserRangeAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GlonassUserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GlonassUserRangeAccuracy::initializeClass, 1)))
                return NULL;
              return t_GlonassUserRangeAccuracy::wrap_Object(GlonassUserRangeAccuracy(((t_GlonassUserRangeAccuracy *) arg)->object.this$));
            }
            static PyObject *t_GlonassUserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GlonassUserRangeAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GlonassUserRangeAccuracy_init_(t_GlonassUserRangeAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              GlonassUserRangeAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = GlonassUserRangeAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GlonassUserRangeAccuracy_getAccuracy(t_GlonassUserRangeAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GlonassUserRangeAccuracy_get__accuracy(t_GlonassUserRangeAccuracy *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
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
#include "org/orekit/data/SeriesTerm.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "java/lang/Class.h"
#include "org/orekit/data/SeriesTerm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SeriesTerm::class$ = NULL;
      jmethodID *SeriesTerm::mids$ = NULL;
      bool SeriesTerm::live$ = false;

      jclass SeriesTerm::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SeriesTerm");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_d472661d1e6c4e58] = env->getMethodID(cls, "add", "(IIDD)V");
          mids$[mid_buildTerm_bd640c15e6a2c88d] = env->getStaticMethodID(cls, "buildTerm", "(IIIIIIIIIIIIIII)Lorg/orekit/data/SeriesTerm;");
          mids$[mid_derivative_82ff8289084ebe61] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_derivative_87b8f1de0a07b746] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCosCoeff_dbbe5f05149dbf73] = env->getMethodID(cls, "getCosCoeff", "(II)D");
          mids$[mid_getDegree_2235cd056f5a882b] = env->getMethodID(cls, "getDegree", "(I)I");
          mids$[mid_getSinCoeff_dbbe5f05149dbf73] = env->getMethodID(cls, "getSinCoeff", "(II)D");
          mids$[mid_value_82ff8289084ebe61] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_value_87b8f1de0a07b746] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_2748c478a8009c37] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_bea6276a59f3cdf6] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argument_2748c478a8009c37] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argument_bea6276a59f3cdf6] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/BodiesElements;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void SeriesTerm::add(jint a0, jint a1, jdouble a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_add_d472661d1e6c4e58], a0, a1, a2, a3);
      }

      SeriesTerm SeriesTerm::buildTerm(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9, jint a10, jint a11, jint a12, jint a13, jint a14)
      {
        jclass cls = env->getClass(initializeClass);
        return SeriesTerm(env->callStaticObjectMethod(cls, mids$[mid_buildTerm_bd640c15e6a2c88d], a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
      }

      JArray< jdouble > SeriesTerm::derivative(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_derivative_82ff8289084ebe61], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > SeriesTerm::derivative(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_derivative_87b8f1de0a07b746], a0.this$));
      }

      jdouble SeriesTerm::getCosCoeff(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCosCoeff_dbbe5f05149dbf73], a0, a1);
      }

      jint SeriesTerm::getDegree(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getDegree_2235cd056f5a882b], a0);
      }

      jdouble SeriesTerm::getSinCoeff(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSinCoeff_dbbe5f05149dbf73], a0, a1);
      }

      JArray< jdouble > SeriesTerm::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_82ff8289084ebe61], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > SeriesTerm::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_87b8f1de0a07b746], a0.this$));
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
      static PyObject *t_SeriesTerm_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SeriesTerm_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SeriesTerm_add(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_buildTerm(PyTypeObject *type, PyObject *args);
      static PyObject *t_SeriesTerm_derivative(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_getCosCoeff(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_getDegree(t_SeriesTerm *self, PyObject *arg);
      static PyObject *t_SeriesTerm_getSinCoeff(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_value(t_SeriesTerm *self, PyObject *args);

      static PyMethodDef t_SeriesTerm__methods_[] = {
        DECLARE_METHOD(t_SeriesTerm, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, add, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, buildTerm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, derivative, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, getCosCoeff, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, getDegree, METH_O),
        DECLARE_METHOD(t_SeriesTerm, getSinCoeff, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SeriesTerm)[] = {
        { Py_tp_methods, t_SeriesTerm__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SeriesTerm)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SeriesTerm, t_SeriesTerm, SeriesTerm);

      void t_SeriesTerm::install(PyObject *module)
      {
        installType(&PY_TYPE(SeriesTerm), &PY_TYPE_DEF(SeriesTerm), module, "SeriesTerm", 0);
      }

      void t_SeriesTerm::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "class_", make_descriptor(SeriesTerm::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "wrapfn_", make_descriptor(t_SeriesTerm::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SeriesTerm_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SeriesTerm::initializeClass, 1)))
          return NULL;
        return t_SeriesTerm::wrap_Object(SeriesTerm(((t_SeriesTerm *) arg)->object.this$));
      }
      static PyObject *t_SeriesTerm_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SeriesTerm::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SeriesTerm_add(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble a3;

        if (!parseArgs(args, "IIDD", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.add(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_buildTerm(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;
        jint a6;
        jint a7;
        jint a8;
        jint a9;
        jint a10;
        jint a11;
        jint a12;
        jint a13;
        jint a14;
        SeriesTerm result((jobject) NULL);

        if (!parseArgs(args, "IIIIIIIIIIIIIII", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
        {
          OBJ_CALL(result = ::org::orekit::data::SeriesTerm::buildTerm(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
          return t_SeriesTerm::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "buildTerm", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_derivative(t_SeriesTerm *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getCosCoeff(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getCosCoeff(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCosCoeff", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getDegree(t_SeriesTerm *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getDegree(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDegree", arg);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getSinCoeff(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSinCoeff(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSinCoeff", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_value(t_SeriesTerm *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/GridCreation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *GridCreation::class$ = NULL;
        jmethodID *GridCreation::mids$ = NULL;
        bool GridCreation::live$ = false;

        jclass GridCreation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/GridCreation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createLinearGrid_207ca32162fd4f73] = env->getStaticMethodID(cls, "createLinearGrid", "(DDI)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > GridCreation::createLinearGrid(jdouble a0, jdouble a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_createLinearGrid_207ca32162fd4f73], a0, a1, a2));
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
    namespace rugged {
      namespace utils {
        static PyObject *t_GridCreation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridCreation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridCreation_createLinearGrid(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_GridCreation__methods_[] = {
          DECLARE_METHOD(t_GridCreation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridCreation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridCreation, createLinearGrid, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GridCreation)[] = {
          { Py_tp_methods, t_GridCreation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GridCreation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GridCreation, t_GridCreation, GridCreation);

        void t_GridCreation::install(PyObject *module)
        {
          installType(&PY_TYPE(GridCreation), &PY_TYPE_DEF(GridCreation), module, "GridCreation", 0);
        }

        void t_GridCreation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "class_", make_descriptor(GridCreation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "wrapfn_", make_descriptor(t_GridCreation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GridCreation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GridCreation::initializeClass, 1)))
            return NULL;
          return t_GridCreation::wrap_Object(GridCreation(((t_GridCreation *) arg)->object.this$));
        }
        static PyObject *t_GridCreation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GridCreation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GridCreation_createLinearGrid(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "DDI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::rugged::utils::GridCreation::createLinearGrid(a0, a1, a2));
            return result.wrap();
          }

          PyErr_SetArgsError(type, "createLinearGrid", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *NRLMSISE00InputParameters::class$ = NULL;
          jmethodID *NRLMSISE00InputParameters::mids$ = NULL;
          bool NRLMSISE00InputParameters::live$ = false;

          jclass NRLMSISE00InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAp_2b9aa40de0a696a4] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getAverageFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getDailyFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jdouble > NRLMSISE00InputParameters::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_2b9aa40de0a696a4], a0.this$));
          }

          jdouble NRLMSISE00InputParameters::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_bf1d7732f1acb697], a0.this$);
          }

          jdouble NRLMSISE00InputParameters::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_bf1d7732f1acb697], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate NRLMSISE00InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
          }

          ::org::orekit::time::AbsoluteDate NRLMSISE00InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
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
        namespace atmosphere {
          static PyObject *t_NRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getAp(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getAverageFlux(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getDailyFlux(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getMaxDate(t_NRLMSISE00InputParameters *self);
          static PyObject *t_NRLMSISE00InputParameters_getMinDate(t_NRLMSISE00InputParameters *self);
          static PyObject *t_NRLMSISE00InputParameters_get__maxDate(t_NRLMSISE00InputParameters *self, void *data);
          static PyObject *t_NRLMSISE00InputParameters_get__minDate(t_NRLMSISE00InputParameters *self, void *data);
          static PyGetSetDef t_NRLMSISE00InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_NRLMSISE00InputParameters, maxDate),
            DECLARE_GET_FIELD(t_NRLMSISE00InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NRLMSISE00InputParameters__methods_[] = {
            DECLARE_METHOD(t_NRLMSISE00InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getAp, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getAverageFlux, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getDailyFlux, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getMinDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NRLMSISE00InputParameters)[] = {
            { Py_tp_methods, t_NRLMSISE00InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NRLMSISE00InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NRLMSISE00InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(NRLMSISE00InputParameters, t_NRLMSISE00InputParameters, NRLMSISE00InputParameters);

          void t_NRLMSISE00InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(NRLMSISE00InputParameters), &PY_TYPE_DEF(NRLMSISE00InputParameters), module, "NRLMSISE00InputParameters", 0);
          }

          void t_NRLMSISE00InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "class_", make_descriptor(NRLMSISE00InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "wrapfn_", make_descriptor(t_NRLMSISE00InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NRLMSISE00InputParameters::initializeClass, 1)))
              return NULL;
            return t_NRLMSISE00InputParameters::wrap_Object(NRLMSISE00InputParameters(((t_NRLMSISE00InputParameters *) arg)->object.this$));
          }
          static PyObject *t_NRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NRLMSISE00InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NRLMSISE00InputParameters_getAp(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAp(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAp", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getAverageFlux(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAverageFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAverageFlux", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getDailyFlux(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDailyFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDailyFlux", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getMaxDate(t_NRLMSISE00InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_NRLMSISE00InputParameters_getMinDate(t_NRLMSISE00InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_NRLMSISE00InputParameters_get__maxDate(t_NRLMSISE00InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_NRLMSISE00InputParameters_get__minDate(t_NRLMSISE00InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/ViennaOneModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaOneModel::class$ = NULL;
          jmethodID *ViennaOneModel::mids$ = NULL;
          bool ViennaOneModel::live$ = false;

          jclass ViennaOneModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaOneModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_c9965c971ad94126] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_computeZenithDelay_61c3b5679b3be385] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_computeZenithDelay_dcd2d94aeb49e9c9] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_mappingFactors_7ef12dc9276409e6] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6f55c0ac27817ed2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pathDelay_fe3b5c46874ab115] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_ff7a895eb6f0af2e] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaOneModel::ViennaOneModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

          ViennaOneModel::ViennaOneModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9965c971ad94126, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > ViennaOneModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_61c3b5679b3be385], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaOneModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_dcd2d94aeb49e9c9], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List ViennaOneModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaOneModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7ef12dc9276409e6], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > ViennaOneModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6f55c0ac27817ed2], a0, a1.this$, a2.this$));
          }

          jdouble ViennaOneModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_fe3b5c46874ab115], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement ViennaOneModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_ff7a895eb6f0af2e], a0.this$, a1.this$, a2.this$, a3.this$));
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
        namespace troposphere {
          static PyObject *t_ViennaOneModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaOneModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaOneModel_init_(t_ViennaOneModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaOneModel_computeZenithDelay(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_getParametersDrivers(t_ViennaOneModel *self);
          static PyObject *t_ViennaOneModel_mappingFactors(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_pathDelay(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_get__parametersDrivers(t_ViennaOneModel *self, void *data);
          static PyGetSetDef t_ViennaOneModel__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaOneModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaOneModel__methods_[] = {
            DECLARE_METHOD(t_ViennaOneModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaOneModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaOneModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_ViennaOneModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ViennaOneModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_ViennaOneModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaOneModel)[] = {
            { Py_tp_methods, t_ViennaOneModel__methods_ },
            { Py_tp_init, (void *) t_ViennaOneModel_init_ },
            { Py_tp_getset, t_ViennaOneModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaOneModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ViennaOneModel, t_ViennaOneModel, ViennaOneModel);

          void t_ViennaOneModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaOneModel), &PY_TYPE_DEF(ViennaOneModel), module, "ViennaOneModel", 0);
          }

          void t_ViennaOneModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "class_", make_descriptor(ViennaOneModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "wrapfn_", make_descriptor(t_ViennaOneModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ViennaOneModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaOneModel::initializeClass, 1)))
              return NULL;
            return t_ViennaOneModel::wrap_Object(ViennaOneModel(((t_ViennaOneModel *) arg)->object.this$));
          }
          static PyObject *t_ViennaOneModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaOneModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaOneModel_init_(t_ViennaOneModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ViennaOneModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = ViennaOneModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ViennaOneModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ViennaOneModel(a0, a1, a2));
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

          static PyObject *t_ViennaOneModel_computeZenithDelay(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_getParametersDrivers(t_ViennaOneModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ViennaOneModel_mappingFactors(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_pathDelay(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_get__parametersDrivers(t_ViennaOneModel *self, void *data)
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
#include "org/orekit/rugged/utils/MinSelector.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/MinSelector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *MinSelector::class$ = NULL;
        jmethodID *MinSelector::mids$ = NULL;
        bool MinSelector::live$ = false;

        jclass MinSelector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/MinSelector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_1af3452e02721019] = env->getStaticMethodID(cls, "getInstance", "()Lorg/orekit/rugged/utils/MinSelector;");
            mids$[mid_selectFirst_ff85a0d8ff097ee5] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MinSelector MinSelector::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return MinSelector(env->callStaticObjectMethod(cls, mids$[mid_getInstance_1af3452e02721019]));
        }

        jboolean MinSelector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_ff85a0d8ff097ee5], a0, a1);
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
    namespace rugged {
      namespace utils {
        static PyObject *t_MinSelector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MinSelector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MinSelector_getInstance(PyTypeObject *type);
        static PyObject *t_MinSelector_selectFirst(t_MinSelector *self, PyObject *args);
        static PyObject *t_MinSelector_get__instance(t_MinSelector *self, void *data);
        static PyGetSetDef t_MinSelector__fields_[] = {
          DECLARE_GET_FIELD(t_MinSelector, instance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MinSelector__methods_[] = {
          DECLARE_METHOD(t_MinSelector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MinSelector)[] = {
          { Py_tp_methods, t_MinSelector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_MinSelector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MinSelector)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::Selector),
          NULL
        };

        DEFINE_TYPE(MinSelector, t_MinSelector, MinSelector);

        void t_MinSelector::install(PyObject *module)
        {
          installType(&PY_TYPE(MinSelector), &PY_TYPE_DEF(MinSelector), module, "MinSelector", 0);
        }

        void t_MinSelector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "class_", make_descriptor(MinSelector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "wrapfn_", make_descriptor(t_MinSelector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MinSelector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MinSelector::initializeClass, 1)))
            return NULL;
          return t_MinSelector::wrap_Object(MinSelector(((t_MinSelector *) arg)->object.this$));
        }
        static PyObject *t_MinSelector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MinSelector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MinSelector_getInstance(PyTypeObject *type)
        {
          MinSelector result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::utils::MinSelector::getInstance());
          return t_MinSelector::wrap_Object(result);
        }

        static PyObject *t_MinSelector_selectFirst(t_MinSelector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MinSelector), (PyObject *) self, "selectFirst", args, 2);
        }

        static PyObject *t_MinSelector_get__instance(t_MinSelector *self, void *data)
        {
          MinSelector value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_MinSelector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistoryMetadata::class$ = NULL;
              jmethodID *TrajectoryStateHistoryMetadata::mids$ = NULL;
              bool TrajectoryStateHistoryMetadata::live$ = false;
              jint TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_DEGREE = (jint) 0;
              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod *TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_METHOD = NULL;

              jclass TrajectoryStateHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_cb5a6d3e3169f7fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_copy_3722f59620bb4a14] = env->getMethodID(cls, "copy", "(D)Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;");
                  mids$[mid_getCenter_23d31d5db0bee8e9] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                  mids$[mid_getInterpolationDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_94ea91241555a59e] = env->getMethodID(cls, "getInterpolationMethod", "()Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_getOrbAveraging_11b109bd155ca898] = env->getMethodID(cls, "getOrbAveraging", "()Ljava/lang/String;");
                  mids$[mid_getOrbRevNum_570ce0828f81a2c1] = env->getMethodID(cls, "getOrbRevNum", "()I");
                  mids$[mid_getOrbRevNumBasis_570ce0828f81a2c1] = env->getMethodID(cls, "getOrbRevNumBasis", "()I");
                  mids$[mid_getPropagator_11b109bd155ca898] = env->getMethodID(cls, "getPropagator", "()Ljava/lang/String;");
                  mids$[mid_getTrajBasis_11b109bd155ca898] = env->getMethodID(cls, "getTrajBasis", "()Ljava/lang/String;");
                  mids$[mid_getTrajBasisID_11b109bd155ca898] = env->getMethodID(cls, "getTrajBasisID", "()Ljava/lang/String;");
                  mids$[mid_getTrajFrameEpoch_85703d13e302437e] = env->getMethodID(cls, "getTrajFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTrajID_11b109bd155ca898] = env->getMethodID(cls, "getTrajID", "()Ljava/lang/String;");
                  mids$[mid_getTrajNextID_11b109bd155ca898] = env->getMethodID(cls, "getTrajNextID", "()Ljava/lang/String;");
                  mids$[mid_getTrajPrevID_11b109bd155ca898] = env->getMethodID(cls, "getTrajPrevID", "()Ljava/lang/String;");
                  mids$[mid_getTrajReferenceFrame_5d5dd95b04037824] = env->getMethodID(cls, "getTrajReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTrajType_f6a584069fbe1b12] = env->getMethodID(cls, "getTrajType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_getTrajUnits_2afa36052df4765d] = env->getMethodID(cls, "getTrajUnits", "()Ljava/util/List;");
                  mids$[mid_getUseableStartTime_85703d13e302437e] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_85703d13e302437e] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_incrementTrajID_92807efd57acb082] = env->getStaticMethodID(cls, "incrementTrajID", "(Ljava/lang/String;)Ljava/lang/String;");
                  mids$[mid_setCenter_32e120c3a0353f27] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                  mids$[mid_setInterpolationDegree_99803b0791f320ff] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_f05dcf712ccb2c7b] = env->getMethodID(cls, "setInterpolationMethod", "(Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;)V");
                  mids$[mid_setOrbAveraging_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOrbAveraging", "(Ljava/lang/String;)V");
                  mids$[mid_setOrbRevNum_99803b0791f320ff] = env->getMethodID(cls, "setOrbRevNum", "(I)V");
                  mids$[mid_setOrbRevNumBasis_99803b0791f320ff] = env->getMethodID(cls, "setOrbRevNumBasis", "(I)V");
                  mids$[mid_setPropagator_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPropagator", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajBasis_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTrajBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajBasisID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTrajBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajFrameEpoch_600a2a61652bc473] = env->getMethodID(cls, "setTrajFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTrajID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTrajID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajNextID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTrajNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajPrevID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTrajPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajReferenceFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setTrajReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTrajType_fa6b10c2faa6bff6] = env->getMethodID(cls, "setTrajType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;)V");
                  mids$[mid_setTrajUnits_de3e021e7266b71e] = env->getMethodID(cls, "setTrajUnits", "(Ljava/util/List;)V");
                  mids$[mid_setUseableStartTime_600a2a61652bc473] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_600a2a61652bc473] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_INTERPOLATION_DEGREE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_DEGREE");
                  DEFAULT_INTERPOLATION_METHOD = new ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->getStaticObjectField(cls, "DEFAULT_INTERPOLATION_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryStateHistoryMetadata::TrajectoryStateHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_cb5a6d3e3169f7fc, a0.this$, a1.this$)) {}

              TrajectoryStateHistoryMetadata TrajectoryStateHistoryMetadata::copy(jdouble a0) const
              {
                return TrajectoryStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_copy_3722f59620bb4a14], a0));
              }

              ::org::orekit::files::ccsds::definitions::BodyFacade TrajectoryStateHistoryMetadata::getCenter() const
              {
                return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_23d31d5db0bee8e9]));
              }

              jint TrajectoryStateHistoryMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_570ce0828f81a2c1]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod TrajectoryStateHistoryMetadata::getInterpolationMethod() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_94ea91241555a59e]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getOrbAveraging() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOrbAveraging_11b109bd155ca898]));
              }

              jint TrajectoryStateHistoryMetadata::getOrbRevNum() const
              {
                return env->callIntMethod(this$, mids$[mid_getOrbRevNum_570ce0828f81a2c1]);
              }

              jint TrajectoryStateHistoryMetadata::getOrbRevNumBasis() const
              {
                return env->callIntMethod(this$, mids$[mid_getOrbRevNumBasis_570ce0828f81a2c1]);
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getPropagator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPropagator_11b109bd155ca898]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajBasis_11b109bd155ca898]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajBasisID_11b109bd155ca898]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getTrajFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTrajFrameEpoch_85703d13e302437e]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajID_11b109bd155ca898]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajNextID_11b109bd155ca898]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajPrevID_11b109bd155ca898]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade TrajectoryStateHistoryMetadata::getTrajReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getTrajReferenceFrame_5d5dd95b04037824]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType TrajectoryStateHistoryMetadata::getTrajType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getTrajType_f6a584069fbe1b12]));
              }

              ::java::util::List TrajectoryStateHistoryMetadata::getTrajUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajUnits_2afa36052df4765d]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_85703d13e302437e]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::incrementTrajID(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_incrementTrajID_92807efd57acb082], a0.this$));
              }

              void TrajectoryStateHistoryMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenter_32e120c3a0353f27], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_99803b0791f320ff], a0);
              }

              void TrajectoryStateHistoryMetadata::setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_f05dcf712ccb2c7b], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setOrbAveraging(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbAveraging_d0bc48d5b00dc40c], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setOrbRevNum(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbRevNum_99803b0791f320ff], a0);
              }

              void TrajectoryStateHistoryMetadata::setOrbRevNumBasis(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbRevNumBasis_99803b0791f320ff], a0);
              }

              void TrajectoryStateHistoryMetadata::setPropagator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPropagator_d0bc48d5b00dc40c], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajBasis_d0bc48d5b00dc40c], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajBasisID_d0bc48d5b00dc40c], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajFrameEpoch_600a2a61652bc473], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajID_d0bc48d5b00dc40c], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajNextID_d0bc48d5b00dc40c], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajPrevID_d0bc48d5b00dc40c], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajReferenceFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajType_fa6b10c2faa6bff6], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajUnits_de3e021e7266b71e], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_600a2a61652bc473], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_600a2a61652bc473], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
              static PyObject *t_TrajectoryStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryStateHistoryMetadata_init_(t_TrajectoryStateHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryStateHistoryMetadata_copy(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_getCenter(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationDegree(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationMethod(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbAveraging(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNum(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getPropagator(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasis(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasisID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajNextID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajPrevID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajType(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajUnits(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStartTime(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStopTime(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_incrementTrajID(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setCenter(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setPropagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_validate(t_TrajectoryStateHistoryMetadata *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__center(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__center(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbAveraging(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNum(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__propagator(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__propagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasis(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasisID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajNextID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajPrevID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajType(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajUnits(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStartTime(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__useableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStopTime(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__useableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_TrajectoryStateHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, center),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, interpolationMethod),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbAveraging),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbRevNum),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbRevNumBasis),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, propagator),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajBasis),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajBasisID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajFrameEpoch),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajNextID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajPrevID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajReferenceFrame),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajType),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajUnits),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, copy, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getCenter, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbAveraging, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbRevNum, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbRevNumBasis, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getPropagator, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajBasis, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajBasisID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajNextID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajPrevID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajType, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajUnits, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, incrementTrajID, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setCenter, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbAveraging, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbRevNum, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbRevNumBasis, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setPropagator, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajBasis, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajBasisID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajFrameEpoch, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajNextID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajPrevID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajReferenceFrame, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajType, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajUnits, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistoryMetadata)[] = {
                { Py_tp_methods, t_TrajectoryStateHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_TrajectoryStateHistoryMetadata_init_ },
                { Py_tp_getset, t_TrajectoryStateHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistoryMetadata, t_TrajectoryStateHistoryMetadata, TrajectoryStateHistoryMetadata);

              void t_TrajectoryStateHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistoryMetadata), &PY_TYPE_DEF(TrajectoryStateHistoryMetadata), module, "TrajectoryStateHistoryMetadata", 0);
              }

              void t_TrajectoryStateHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "class_", make_descriptor(TrajectoryStateHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "wrapfn_", make_descriptor(t_TrajectoryStateHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(TrajectoryStateHistoryMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "DEFAULT_INTERPOLATION_DEGREE", make_descriptor(TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_DEGREE));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "DEFAULT_INTERPOLATION_METHOD", make_descriptor(::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(*TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_METHOD)));
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistoryMetadata::wrap_Object(TrajectoryStateHistoryMetadata(((t_TrajectoryStateHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryStateHistoryMetadata_init_(t_TrajectoryStateHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::data::DataContext a1((jobject) NULL);
                TrajectoryStateHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = TrajectoryStateHistoryMetadata(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_copy(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;
                TrajectoryStateHistoryMetadata result((jobject) NULL);

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(result = self->object.copy(a0));
                  return t_TrajectoryStateHistoryMetadata::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "copy", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getCenter(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenter());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationDegree(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationMethod(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbAveraging(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbAveraging());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNum(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getOrbRevNum());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getOrbRevNumBasis());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getPropagator(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPropagator());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasis(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajBasis());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasisID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajBasisID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajNextID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajNextID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajPrevID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajPrevID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajType(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajUnits(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStartTime(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStopTime(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_incrementTrajID(PyTypeObject *type, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::incrementTrajID(a0));
                  return j2p(result);
                }

                PyErr_SetArgsError(type, "incrementTrajID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setCenter(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenter(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenter", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::parameters_))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOrbAveraging(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbAveraging", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setOrbRevNum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbRevNum", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setOrbRevNumBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbRevNumBasis", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setPropagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPropagator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPropagator", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajBasis", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajBasisID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTrajFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajNextID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajPrevID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTrajReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setTrajType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajType", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setTrajUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajUnits", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStartTime", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStopTime", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_validate(t_TrajectoryStateHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(TrajectoryStateHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__center(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenter());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__center(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenter(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "center", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setInterpolationDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbAveraging(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbAveraging());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOrbAveraging(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbAveraging", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNum(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getOrbRevNum());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setOrbRevNum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbRevNum", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getOrbRevNumBasis());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setOrbRevNumBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbRevNumBasis", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__propagator(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPropagator());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__propagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPropagator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "propagator", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasis(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajBasis());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajBasis", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasisID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajBasisID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajBasisID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajNextID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajNextID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajNextID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajPrevID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajPrevID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajPrevID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajType(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajType", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajUnits(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajUnits", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStartTime(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__useableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStartTime", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStopTime(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__useableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStopTime", arg);
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
#include "org/hipparchus/random/SobolSequenceGenerator.h"
#include "java/io/IOException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/io/InputStream.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *SobolSequenceGenerator::class$ = NULL;
      jmethodID *SobolSequenceGenerator::mids$ = NULL;
      bool SobolSequenceGenerator::live$ = false;

      jclass SobolSequenceGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/SobolSequenceGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_550926389ea2217c] = env->getMethodID(cls, "<init>", "(ILjava/io/InputStream;)V");
          mids$[mid_getNextIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getNextIndex", "()I");
          mids$[mid_nextVector_60c7040667a7dc5c] = env->getMethodID(cls, "nextVector", "()[D");
          mids$[mid_skipTo_abe82da4f5c7c981] = env->getMethodID(cls, "skipTo", "(I)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SobolSequenceGenerator::SobolSequenceGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      SobolSequenceGenerator::SobolSequenceGenerator(jint a0, const ::java::io::InputStream & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_550926389ea2217c, a0, a1.this$)) {}

      jint SobolSequenceGenerator::getNextIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getNextIndex_570ce0828f81a2c1]);
      }

      JArray< jdouble > SobolSequenceGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_60c7040667a7dc5c]));
      }

      JArray< jdouble > SobolSequenceGenerator::skipTo(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_skipTo_abe82da4f5c7c981], a0));
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
      static PyObject *t_SobolSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SobolSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SobolSequenceGenerator_init_(t_SobolSequenceGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SobolSequenceGenerator_getNextIndex(t_SobolSequenceGenerator *self);
      static PyObject *t_SobolSequenceGenerator_nextVector(t_SobolSequenceGenerator *self);
      static PyObject *t_SobolSequenceGenerator_skipTo(t_SobolSequenceGenerator *self, PyObject *arg);
      static PyObject *t_SobolSequenceGenerator_get__nextIndex(t_SobolSequenceGenerator *self, void *data);
      static PyGetSetDef t_SobolSequenceGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_SobolSequenceGenerator, nextIndex),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SobolSequenceGenerator__methods_[] = {
        DECLARE_METHOD(t_SobolSequenceGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SobolSequenceGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SobolSequenceGenerator, getNextIndex, METH_NOARGS),
        DECLARE_METHOD(t_SobolSequenceGenerator, nextVector, METH_NOARGS),
        DECLARE_METHOD(t_SobolSequenceGenerator, skipTo, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SobolSequenceGenerator)[] = {
        { Py_tp_methods, t_SobolSequenceGenerator__methods_ },
        { Py_tp_init, (void *) t_SobolSequenceGenerator_init_ },
        { Py_tp_getset, t_SobolSequenceGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SobolSequenceGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SobolSequenceGenerator, t_SobolSequenceGenerator, SobolSequenceGenerator);

      void t_SobolSequenceGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(SobolSequenceGenerator), &PY_TYPE_DEF(SobolSequenceGenerator), module, "SobolSequenceGenerator", 0);
      }

      void t_SobolSequenceGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "class_", make_descriptor(SobolSequenceGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "wrapfn_", make_descriptor(t_SobolSequenceGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SobolSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SobolSequenceGenerator::initializeClass, 1)))
          return NULL;
        return t_SobolSequenceGenerator::wrap_Object(SobolSequenceGenerator(((t_SobolSequenceGenerator *) arg)->object.this$));
      }
      static PyObject *t_SobolSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SobolSequenceGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SobolSequenceGenerator_init_(t_SobolSequenceGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            SobolSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = SobolSequenceGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::java::io::InputStream a1((jobject) NULL);
            SobolSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SobolSequenceGenerator(a0, a1));
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

      static PyObject *t_SobolSequenceGenerator_getNextIndex(t_SobolSequenceGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNextIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SobolSequenceGenerator_nextVector(t_SobolSequenceGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_SobolSequenceGenerator_skipTo(t_SobolSequenceGenerator *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.skipTo(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "skipTo", arg);
        return NULL;
      }

      static PyObject *t_SobolSequenceGenerator_get__nextIndex(t_SobolSequenceGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNextIndex());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ImmutableFieldTimeStampedCache::class$ = NULL;
      jmethodID *ImmutableFieldTimeStampedCache::mids$ = NULL;
      bool ImmutableFieldTimeStampedCache::live$ = false;

      jclass ImmutableFieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ImmutableFieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_11390acb87dd159d] = env->getMethodID(cls, "<init>", "(ILjava/util/Collection;)V");
          mids$[mid_emptyCache_5028f5f041777e9b] = env->getStaticMethodID(cls, "emptyCache", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/ImmutableFieldTimeStampedCache;");
          mids$[mid_getAll_2afa36052df4765d] = env->getMethodID(cls, "getAll", "()Ljava/util/List;");
          mids$[mid_getEarliest_f8d8d28f6791aa76] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_f8d8d28f6791aa76] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_92d676459a63dcda] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_570ce0828f81a2c1] = env->getMethodID(cls, "getNeighborsSize", "()I");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ImmutableFieldTimeStampedCache::ImmutableFieldTimeStampedCache(jint a0, const ::java::util::Collection & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11390acb87dd159d, a0, a1.this$)) {}

      ImmutableFieldTimeStampedCache ImmutableFieldTimeStampedCache::emptyCache(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ImmutableFieldTimeStampedCache(env->callStaticObjectMethod(cls, mids$[mid_emptyCache_5028f5f041777e9b], a0.this$));
      }

      ::java::util::List ImmutableFieldTimeStampedCache::getAll() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAll_2afa36052df4765d]));
      }

      ::org::orekit::time::FieldTimeStamped ImmutableFieldTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_f8d8d28f6791aa76]));
      }

      ::org::orekit::time::FieldTimeStamped ImmutableFieldTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_f8d8d28f6791aa76]));
      }

      ::java::util::stream::Stream ImmutableFieldTimeStampedCache::getNeighbors(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_92d676459a63dcda], a0.this$));
      }

      jint ImmutableFieldTimeStampedCache::getNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNeighborsSize_570ce0828f81a2c1]);
      }

      ::java::lang::String ImmutableFieldTimeStampedCache::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_ImmutableFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_of_(t_ImmutableFieldTimeStampedCache *self, PyObject *args);
      static int t_ImmutableFieldTimeStampedCache_init_(t_ImmutableFieldTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ImmutableFieldTimeStampedCache_emptyCache(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_getAll(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getEarliest(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getLatest(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighbors(t_ImmutableFieldTimeStampedCache *self, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighborsSize(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_toString(t_ImmutableFieldTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__all(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__earliest(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__latest(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__neighborsSize(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__parameters_(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_ImmutableFieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, all),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, neighborsSize),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ImmutableFieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, emptyCache, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getAll, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getNeighbors, METH_O),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ImmutableFieldTimeStampedCache)[] = {
        { Py_tp_methods, t_ImmutableFieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_ImmutableFieldTimeStampedCache_init_ },
        { Py_tp_getset, t_ImmutableFieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ImmutableFieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ImmutableFieldTimeStampedCache, t_ImmutableFieldTimeStampedCache, ImmutableFieldTimeStampedCache);
      PyObject *t_ImmutableFieldTimeStampedCache::wrap_Object(const ImmutableFieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_ImmutableFieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableFieldTimeStampedCache *self = (t_ImmutableFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_ImmutableFieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_ImmutableFieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableFieldTimeStampedCache *self = (t_ImmutableFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_ImmutableFieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(ImmutableFieldTimeStampedCache), &PY_TYPE_DEF(ImmutableFieldTimeStampedCache), module, "ImmutableFieldTimeStampedCache", 0);
      }

      void t_ImmutableFieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "class_", make_descriptor(ImmutableFieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "wrapfn_", make_descriptor(t_ImmutableFieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ImmutableFieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_ImmutableFieldTimeStampedCache::wrap_Object(ImmutableFieldTimeStampedCache(((t_ImmutableFieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_ImmutableFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ImmutableFieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_of_(t_ImmutableFieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ImmutableFieldTimeStampedCache_init_(t_ImmutableFieldTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ImmutableFieldTimeStampedCache object((jobject) NULL);

        if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = ImmutableFieldTimeStampedCache(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_emptyCache(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ImmutableFieldTimeStampedCache result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::ImmutableFieldTimeStampedCache::emptyCache(a0));
          return t_ImmutableFieldTimeStampedCache::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "emptyCache", arg);
        return NULL;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getAll(t_ImmutableFieldTimeStampedCache *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAll());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getEarliest(t_ImmutableFieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getLatest(t_ImmutableFieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighbors(t_ImmutableFieldTimeStampedCache *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", arg);
        return NULL;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighborsSize(t_ImmutableFieldTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_toString(t_ImmutableFieldTimeStampedCache *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ImmutableFieldTimeStampedCache), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_ImmutableFieldTimeStampedCache_get__parameters_(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__all(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAll());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__earliest(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__latest(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__neighborsSize(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldInertiaAxis::class$ = NULL;
      jmethodID *FieldInertiaAxis::mids$ = NULL;
      bool FieldInertiaAxis::live$ = false;

      jclass FieldInertiaAxis::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldInertiaAxis");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a10b3e52820c4332] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_getA_716f50c86ffc8da7] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getI_eba8e72a22c984ac] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_negate_ac55a8ab71ff75ce] = env->getMethodID(cls, "negate", "()Lorg/orekit/attitudes/FieldInertiaAxis;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldInertiaAxis::FieldInertiaAxis(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a10b3e52820c4332, a0.this$, a1.this$)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldInertiaAxis::getA() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getA_716f50c86ffc8da7]));
      }

      ::org::hipparchus::CalculusFieldElement FieldInertiaAxis::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_eba8e72a22c984ac]));
      }

      FieldInertiaAxis FieldInertiaAxis::negate() const
      {
        return FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_negate_ac55a8ab71ff75ce]));
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
      static PyObject *t_FieldInertiaAxis_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertiaAxis_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertiaAxis_of_(t_FieldInertiaAxis *self, PyObject *args);
      static int t_FieldInertiaAxis_init_(t_FieldInertiaAxis *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldInertiaAxis_getA(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_getI(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_negate(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_get__a(t_FieldInertiaAxis *self, void *data);
      static PyObject *t_FieldInertiaAxis_get__i(t_FieldInertiaAxis *self, void *data);
      static PyObject *t_FieldInertiaAxis_get__parameters_(t_FieldInertiaAxis *self, void *data);
      static PyGetSetDef t_FieldInertiaAxis__fields_[] = {
        DECLARE_GET_FIELD(t_FieldInertiaAxis, a),
        DECLARE_GET_FIELD(t_FieldInertiaAxis, i),
        DECLARE_GET_FIELD(t_FieldInertiaAxis, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldInertiaAxis__methods_[] = {
        DECLARE_METHOD(t_FieldInertiaAxis, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertiaAxis, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertiaAxis, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, negate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldInertiaAxis)[] = {
        { Py_tp_methods, t_FieldInertiaAxis__methods_ },
        { Py_tp_init, (void *) t_FieldInertiaAxis_init_ },
        { Py_tp_getset, t_FieldInertiaAxis__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldInertiaAxis)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldInertiaAxis, t_FieldInertiaAxis, FieldInertiaAxis);
      PyObject *t_FieldInertiaAxis::wrap_Object(const FieldInertiaAxis& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertiaAxis::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertiaAxis *self = (t_FieldInertiaAxis *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldInertiaAxis::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertiaAxis::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertiaAxis *self = (t_FieldInertiaAxis *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldInertiaAxis::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldInertiaAxis), &PY_TYPE_DEF(FieldInertiaAxis), module, "FieldInertiaAxis", 0);
      }

      void t_FieldInertiaAxis::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "class_", make_descriptor(FieldInertiaAxis::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "wrapfn_", make_descriptor(t_FieldInertiaAxis::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldInertiaAxis_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldInertiaAxis::initializeClass, 1)))
          return NULL;
        return t_FieldInertiaAxis::wrap_Object(FieldInertiaAxis(((t_FieldInertiaAxis *) arg)->object.this$));
      }
      static PyObject *t_FieldInertiaAxis_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldInertiaAxis::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldInertiaAxis_of_(t_FieldInertiaAxis *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldInertiaAxis_init_(t_FieldInertiaAxis *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        FieldInertiaAxis object((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          INT_CALL(object = FieldInertiaAxis(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldInertiaAxis_getA(t_FieldInertiaAxis *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertiaAxis_getI(t_FieldInertiaAxis *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldInertiaAxis_negate(t_FieldInertiaAxis *self)
      {
        FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldInertiaAxis_get__parameters_(t_FieldInertiaAxis *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldInertiaAxis_get__a(t_FieldInertiaAxis *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldInertiaAxis_get__i(t_FieldInertiaAxis *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedField.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedField::class$ = NULL;
      jmethodID *TimeStampedField::mids$ = NULL;
      bool TimeStampedField::live$ = false;

      jclass TimeStampedField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c88156865fc6ef3f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_f107d7f69392535a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getValue_eba8e72a22c984ac] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedField::TimeStampedField(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c88156865fc6ef3f, a0.this$, a1.this$)) {}

      TimeStampedField::TimeStampedField(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f107d7f69392535a, a0.this$, a1.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate TimeStampedField::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
      }

      ::org::hipparchus::CalculusFieldElement TimeStampedField::getValue() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_eba8e72a22c984ac]));
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
      static PyObject *t_TimeStampedField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedField_of_(t_TimeStampedField *self, PyObject *args);
      static int t_TimeStampedField_init_(t_TimeStampedField *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedField_getDate(t_TimeStampedField *self);
      static PyObject *t_TimeStampedField_getValue(t_TimeStampedField *self);
      static PyObject *t_TimeStampedField_get__date(t_TimeStampedField *self, void *data);
      static PyObject *t_TimeStampedField_get__value(t_TimeStampedField *self, void *data);
      static PyObject *t_TimeStampedField_get__parameters_(t_TimeStampedField *self, void *data);
      static PyGetSetDef t_TimeStampedField__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedField, date),
        DECLARE_GET_FIELD(t_TimeStampedField, value),
        DECLARE_GET_FIELD(t_TimeStampedField, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedField__methods_[] = {
        DECLARE_METHOD(t_TimeStampedField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedField, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedField, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedField, getValue, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedField)[] = {
        { Py_tp_methods, t_TimeStampedField__methods_ },
        { Py_tp_init, (void *) t_TimeStampedField_init_ },
        { Py_tp_getset, t_TimeStampedField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedField, t_TimeStampedField, TimeStampedField);
      PyObject *t_TimeStampedField::wrap_Object(const TimeStampedField& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedField::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedField *self = (t_TimeStampedField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedField::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedField::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedField *self = (t_TimeStampedField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedField::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedField), &PY_TYPE_DEF(TimeStampedField), module, "TimeStampedField", 0);
      }

      void t_TimeStampedField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "class_", make_descriptor(TimeStampedField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "wrapfn_", make_descriptor(t_TimeStampedField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedField::initializeClass, 1)))
          return NULL;
        return t_TimeStampedField::wrap_Object(TimeStampedField(((t_TimeStampedField *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedField_of_(t_TimeStampedField *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedField_init_(t_TimeStampedField *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            TimeStampedField object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedField(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedField object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              INT_CALL(object = TimeStampedField(a0, a1));
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

      static PyObject *t_TimeStampedField_getDate(t_TimeStampedField *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedField_getValue(t_TimeStampedField *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_TimeStampedField_get__parameters_(t_TimeStampedField *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedField_get__date(t_TimeStampedField *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedField_get__value(t_TimeStampedField *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultiStartMultivariateOptimizer.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultiStartMultivariateOptimizer::class$ = NULL;
          jmethodID *MultiStartMultivariateOptimizer::mids$ = NULL;
          bool MultiStartMultivariateOptimizer::live$ = false;

          jclass MultiStartMultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultiStartMultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_088236b2089b209e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer;ILorg/hipparchus/random/RandomVectorGenerator;)V");
              mids$[mid_getOptima_fb04b599bc7d04e3] = env->getMethodID(cls, "getOptima", "()[Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_store_ba76051a64c2f341] = env->getMethodID(cls, "store", "(Lorg/hipparchus/optim/PointValuePair;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultiStartMultivariateOptimizer::MultiStartMultivariateOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomVectorGenerator & a2) : ::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_088236b2089b209e, a0.this$, a1, a2.this$)) {}

          JArray< ::org::hipparchus::optim::PointValuePair > MultiStartMultivariateOptimizer::getOptima() const
          {
            return JArray< ::org::hipparchus::optim::PointValuePair >(env->callObjectMethod(this$, mids$[mid_getOptima_fb04b599bc7d04e3]));
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
          static PyObject *t_MultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiStartMultivariateOptimizer_of_(t_MultiStartMultivariateOptimizer *self, PyObject *args);
          static int t_MultiStartMultivariateOptimizer_init_(t_MultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultiStartMultivariateOptimizer_getOptima(t_MultiStartMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultiStartMultivariateOptimizer_get__optima(t_MultiStartMultivariateOptimizer *self, void *data);
          static PyObject *t_MultiStartMultivariateOptimizer_get__parameters_(t_MultiStartMultivariateOptimizer *self, void *data);
          static PyGetSetDef t_MultiStartMultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_MultiStartMultivariateOptimizer, optima),
            DECLARE_GET_FIELD(t_MultiStartMultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultiStartMultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, getOptima, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultiStartMultivariateOptimizer)[] = {
            { Py_tp_methods, t_MultiStartMultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) t_MultiStartMultivariateOptimizer_init_ },
            { Py_tp_getset, t_MultiStartMultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultiStartMultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(MultiStartMultivariateOptimizer, t_MultiStartMultivariateOptimizer, MultiStartMultivariateOptimizer);
          PyObject *t_MultiStartMultivariateOptimizer::wrap_Object(const MultiStartMultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultiStartMultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultiStartMultivariateOptimizer *self = (t_MultiStartMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MultiStartMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultiStartMultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultiStartMultivariateOptimizer *self = (t_MultiStartMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MultiStartMultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(MultiStartMultivariateOptimizer), &PY_TYPE_DEF(MultiStartMultivariateOptimizer), module, "MultiStartMultivariateOptimizer", 0);
          }

          void t_MultiStartMultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "class_", make_descriptor(MultiStartMultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "wrapfn_", make_descriptor(t_MultiStartMultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultiStartMultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_MultiStartMultivariateOptimizer::wrap_Object(MultiStartMultivariateOptimizer(((t_MultiStartMultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_MultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultiStartMultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MultiStartMultivariateOptimizer_of_(t_MultiStartMultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_MultiStartMultivariateOptimizer_init_(t_MultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::random::RandomVectorGenerator a2((jobject) NULL);
            MultiStartMultivariateOptimizer object((jobject) NULL);

            if (!parseArgs(args, "KIk", ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer::initializeClass, ::org::hipparchus::random::RandomVectorGenerator::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::t_MultivariateOptimizer::parameters_, &a1, &a2))
            {
              INT_CALL(object = MultiStartMultivariateOptimizer(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultiStartMultivariateOptimizer_getOptima(t_MultiStartMultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::PointValuePair > result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getOptima());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            return callSuper(PY_TYPE(MultiStartMultivariateOptimizer), (PyObject *) self, "getOptima", args, 2);
          }
          static PyObject *t_MultiStartMultivariateOptimizer_get__parameters_(t_MultiStartMultivariateOptimizer *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MultiStartMultivariateOptimizer_get__optima(t_MultiStartMultivariateOptimizer *self, void *data)
          {
            JArray< ::org::hipparchus::optim::PointValuePair > value((jobject) NULL);
            OBJ_CALL(value = self->object.getOptima());
            return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *SingleParameterFitter::class$ = NULL;
      jmethodID *SingleParameterFitter::mids$ = NULL;
      bool SingleParameterFitter::live$ = false;
      jdouble SingleParameterFitter::MOON_DRACONIC_PULSATION = (jdouble) 0;
      jdouble SingleParameterFitter::SUN_PULSATION = (jdouble) 0;

      jclass SingleParameterFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/SingleParameterFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e266cf4efadb0399] = env->getMethodID(cls, "<init>", "(DDDI[D)V");
          mids$[mid_createDefaultDut1FitterLongTermPrediction_1d5518c43ee2f17a] = env->getStaticMethodID(cls, "createDefaultDut1FitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultDut1FitterShortTermPrediction_1d5518c43ee2f17a] = env->getStaticMethodID(cls, "createDefaultDut1FitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultNutationFitterLongTermPrediction_1d5518c43ee2f17a] = env->getStaticMethodID(cls, "createDefaultNutationFitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultNutationFitterShortTermPrediction_1d5518c43ee2f17a] = env->getStaticMethodID(cls, "createDefaultNutationFitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultPoleFitterLongTermPrediction_1d5518c43ee2f17a] = env->getStaticMethodID(cls, "createDefaultPoleFitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultPoleFitterShortTermPrediction_1d5518c43ee2f17a] = env->getStaticMethodID(cls, "createDefaultPoleFitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MOON_DRACONIC_PULSATION = env->getStaticDoubleField(cls, "MOON_DRACONIC_PULSATION");
          SUN_PULSATION = env->getStaticDoubleField(cls, "SUN_PULSATION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingleParameterFitter::SingleParameterFitter(jdouble a0, jdouble a1, jdouble a2, jint a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e266cf4efadb0399, a0, a1, a2, a3, a4.this$)) {}

      SingleParameterFitter SingleParameterFitter::createDefaultDut1FitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultDut1FitterLongTermPrediction_1d5518c43ee2f17a]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultDut1FitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultDut1FitterShortTermPrediction_1d5518c43ee2f17a]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultNutationFitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultNutationFitterLongTermPrediction_1d5518c43ee2f17a]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultNutationFitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultNutationFitterShortTermPrediction_1d5518c43ee2f17a]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultPoleFitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultPoleFitterLongTermPrediction_1d5518c43ee2f17a]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultPoleFitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultPoleFitterShortTermPrediction_1d5518c43ee2f17a]));
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
      static PyObject *t_SingleParameterFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingleParameterFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingleParameterFitter_init_(t_SingleParameterFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterShortTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterShortTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterShortTermPrediction(PyTypeObject *type);

      static PyMethodDef t_SingleParameterFitter__methods_[] = {
        DECLARE_METHOD(t_SingleParameterFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultDut1FitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultDut1FitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultNutationFitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultNutationFitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultPoleFitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultPoleFitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingleParameterFitter)[] = {
        { Py_tp_methods, t_SingleParameterFitter__methods_ },
        { Py_tp_init, (void *) t_SingleParameterFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingleParameterFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingleParameterFitter, t_SingleParameterFitter, SingleParameterFitter);

      void t_SingleParameterFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(SingleParameterFitter), &PY_TYPE_DEF(SingleParameterFitter), module, "SingleParameterFitter", 0);
      }

      void t_SingleParameterFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "class_", make_descriptor(SingleParameterFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "wrapfn_", make_descriptor(t_SingleParameterFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "boxfn_", make_descriptor(boxObject));
        env->getClass(SingleParameterFitter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "MOON_DRACONIC_PULSATION", make_descriptor(SingleParameterFitter::MOON_DRACONIC_PULSATION));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "SUN_PULSATION", make_descriptor(SingleParameterFitter::SUN_PULSATION));
      }

      static PyObject *t_SingleParameterFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingleParameterFitter::initializeClass, 1)))
          return NULL;
        return t_SingleParameterFitter::wrap_Object(SingleParameterFitter(((t_SingleParameterFitter *) arg)->object.this$));
      }
      static PyObject *t_SingleParameterFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingleParameterFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingleParameterFitter_init_(t_SingleParameterFitter *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jint a3;
        JArray< jdouble > a4((jobject) NULL);
        SingleParameterFitter object((jobject) NULL);

        if (!parseArgs(args, "DDDI[D", &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = SingleParameterFitter(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultDut1FitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultDut1FitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultNutationFitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultNutationFitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultPoleFitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultPoleFitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LongitudeCrossingDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/LongitudeCrossingDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LongitudeCrossingDetector::class$ = NULL;
        jmethodID *LongitudeCrossingDetector::mids$ = NULL;
        bool LongitudeCrossingDetector::live$ = false;

        jclass LongitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LongitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_48cd945bba9df75e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_a82b63c30b8dcbca] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_000d48aad6c74b0a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLongitude_dff5885c2c873297] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_e22e3f70c8b0ac7b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LongitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LongitudeCrossingDetector::LongitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_48cd945bba9df75e, a0.this$, a1)) {}

        LongitudeCrossingDetector::LongitudeCrossingDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a82b63c30b8dcbca, a0, a1, a2.this$, a3)) {}

        jdouble LongitudeCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid LongitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_000d48aad6c74b0a]));
        }

        jdouble LongitudeCrossingDetector::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_dff5885c2c873297]);
        }

        void LongitudeCrossingDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_LongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeCrossingDetector_of_(t_LongitudeCrossingDetector *self, PyObject *args);
        static int t_LongitudeCrossingDetector_init_(t_LongitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LongitudeCrossingDetector_g(t_LongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LongitudeCrossingDetector_getBody(t_LongitudeCrossingDetector *self);
        static PyObject *t_LongitudeCrossingDetector_getLongitude(t_LongitudeCrossingDetector *self);
        static PyObject *t_LongitudeCrossingDetector_init(t_LongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LongitudeCrossingDetector_get__body(t_LongitudeCrossingDetector *self, void *data);
        static PyObject *t_LongitudeCrossingDetector_get__longitude(t_LongitudeCrossingDetector *self, void *data);
        static PyObject *t_LongitudeCrossingDetector_get__parameters_(t_LongitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_LongitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, longitude),
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LongitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_LongitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, getLongitude, METH_NOARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LongitudeCrossingDetector)[] = {
          { Py_tp_methods, t_LongitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_LongitudeCrossingDetector_init_ },
          { Py_tp_getset, t_LongitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LongitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LongitudeCrossingDetector, t_LongitudeCrossingDetector, LongitudeCrossingDetector);
        PyObject *t_LongitudeCrossingDetector::wrap_Object(const LongitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeCrossingDetector *self = (t_LongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LongitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeCrossingDetector *self = (t_LongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LongitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LongitudeCrossingDetector), &PY_TYPE_DEF(LongitudeCrossingDetector), module, "LongitudeCrossingDetector", 0);
        }

        void t_LongitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "class_", make_descriptor(LongitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "wrapfn_", make_descriptor(t_LongitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LongitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_LongitudeCrossingDetector::wrap_Object(LongitudeCrossingDetector(((t_LongitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_LongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LongitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LongitudeCrossingDetector_of_(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LongitudeCrossingDetector_init_(t_LongitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              jdouble a1;
              LongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LongitudeCrossingDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeCrossingDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              LongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = LongitudeCrossingDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeCrossingDetector);
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

        static PyObject *t_LongitudeCrossingDetector_g(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LongitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LongitudeCrossingDetector_getBody(t_LongitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_LongitudeCrossingDetector_getLongitude(t_LongitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LongitudeCrossingDetector_init(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(LongitudeCrossingDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_LongitudeCrossingDetector_get__parameters_(t_LongitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LongitudeCrossingDetector_get__body(t_LongitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_LongitudeCrossingDetector_get__longitude(t_LongitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
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
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getInstance_1c87ae1002e9b199] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2Field;");
            mids$[mid_getOne_43633a9b98e8a859] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_43633a9b98e8a859] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean UnivariateDerivative2Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        UnivariateDerivative2Field UnivariateDerivative2Field::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative2Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_1c87ae1002e9b199]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 UnivariateDerivative2Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getOne_43633a9b98e8a859]));
        }

        ::java::lang::Class UnivariateDerivative2Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 UnivariateDerivative2Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getZero_43633a9b98e8a859]));
        }

        jint UnivariateDerivative2Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
#include "java/util/stream/Collectors.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *Collectors::class$ = NULL;
      jmethodID *Collectors::mids$ = NULL;
      bool Collectors::live$ = false;

      jclass Collectors::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/Collectors");

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

namespace java {
  namespace util {
    namespace stream {
      static PyObject *t_Collectors_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Collectors_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_Collectors__methods_[] = {
        DECLARE_METHOD(t_Collectors, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Collectors, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Collectors)[] = {
        { Py_tp_methods, t_Collectors__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Collectors)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Collectors, t_Collectors, Collectors);

      void t_Collectors::install(PyObject *module)
      {
        installType(&PY_TYPE(Collectors), &PY_TYPE_DEF(Collectors), module, "Collectors", 0);
      }

      void t_Collectors::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Collectors), "class_", make_descriptor(Collectors::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Collectors), "wrapfn_", make_descriptor(t_Collectors::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Collectors), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Collectors_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Collectors::initializeClass, 1)))
          return NULL;
        return t_Collectors::wrap_Object(Collectors(((t_Collectors *) arg)->object.this$));
      }
      static PyObject *t_Collectors_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Collectors::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ConstantRealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ConstantRealDistribution::class$ = NULL;
        jmethodID *ConstantRealDistribution::mids$ = NULL;
        bool ConstantRealDistribution::live$ = false;

        jclass ConstantRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ConstantRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantRealDistribution::ConstantRealDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        jdouble ConstantRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble ConstantRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble ConstantRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble ConstantRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble ConstantRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble ConstantRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble ConstantRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean ConstantRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
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
        static PyObject *t_ConstantRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantRealDistribution_init_(t_ConstantRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantRealDistribution_cumulativeProbability(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_density(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getNumericalMean(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getNumericalVariance(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getSupportLowerBound(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getSupportUpperBound(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_inverseCumulativeProbability(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_isSupportConnected(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_get__numericalMean(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__numericalVariance(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportConnected(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportLowerBound(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportUpperBound(t_ConstantRealDistribution *self, void *data);
        static PyGetSetDef t_ConstantRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantRealDistribution__methods_[] = {
          DECLARE_METHOD(t_ConstantRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantRealDistribution)[] = {
          { Py_tp_methods, t_ConstantRealDistribution__methods_ },
          { Py_tp_init, (void *) t_ConstantRealDistribution_init_ },
          { Py_tp_getset, t_ConstantRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ConstantRealDistribution, t_ConstantRealDistribution, ConstantRealDistribution);

        void t_ConstantRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantRealDistribution), &PY_TYPE_DEF(ConstantRealDistribution), module, "ConstantRealDistribution", 0);
        }

        void t_ConstantRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "class_", make_descriptor(ConstantRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "wrapfn_", make_descriptor(t_ConstantRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantRealDistribution::initializeClass, 1)))
            return NULL;
          return t_ConstantRealDistribution::wrap_Object(ConstantRealDistribution(((t_ConstantRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_ConstantRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantRealDistribution_init_(t_ConstantRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ConstantRealDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ConstantRealDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantRealDistribution_cumulativeProbability(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_density(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getNumericalMean(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getNumericalVariance(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getSupportLowerBound(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getSupportUpperBound(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_inverseCumulativeProbability(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_isSupportConnected(t_ConstantRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_get__numericalMean(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__numericalVariance(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportConnected(t_ConstantRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportLowerBound(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportUpperBound(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimator.h"
#include "java/lang/Iterable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimator::class$ = NULL;
        jmethodID *KalmanEstimator::mids$ = NULL;
        bool KalmanEstimator::live$ = false;

        jclass KalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_ea9d4e2e9f4a999e] = env->getMethodID(cls, "estimationStep", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_processMeasurements_cdedbecd168387ff] = env->getMethodID(cls, "processMeasurements", "(Ljava/lang/Iterable;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setObserver_3b3c487cb3322691] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_e05aaef10b06b09b] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanEstimator::estimationStep(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimationStep_ea9d4e2e9f4a999e], a0.this$));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanEstimator::processMeasurements(const ::java::lang::Iterable & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_processMeasurements_cdedbecd168387ff], a0.this$));
        }

        void KalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_3b3c487cb3322691], a0.this$);
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
      namespace sequential {
        static PyObject *t_KalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimator_estimationStep(t_KalmanEstimator *self, PyObject *arg);
        static PyObject *t_KalmanEstimator_processMeasurements(t_KalmanEstimator *self, PyObject *arg);
        static PyObject *t_KalmanEstimator_setObserver(t_KalmanEstimator *self, PyObject *arg);
        static int t_KalmanEstimator_set__observer(t_KalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_KalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_KalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimator, estimationStep, METH_O),
          DECLARE_METHOD(t_KalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_KalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimator)[] = {
          { Py_tp_methods, t_KalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(KalmanEstimator, t_KalmanEstimator, KalmanEstimator);

        void t_KalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimator), &PY_TYPE_DEF(KalmanEstimator), module, "KalmanEstimator", 0);
        }

        void t_KalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "class_", make_descriptor(KalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "wrapfn_", make_descriptor(t_KalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimator::wrap_Object(KalmanEstimator(((t_KalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimator_estimationStep(t_KalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(result = self->object.estimationStep(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimator_processMeasurements(t_KalmanEstimator *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimator_setObserver(t_KalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_KalmanEstimator_set__observer(t_KalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldBoundedPropagator::class$ = NULL;
      jmethodID *FieldBoundedPropagator::mids$ = NULL;
      bool FieldBoundedPropagator::live$ = false;

      jclass FieldBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMinDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldAbsoluteDate FieldBoundedPropagator::getMaxDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_51da00d5b8a3b5df]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldBoundedPropagator::getMinDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_51da00d5b8a3b5df]));
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
      static PyObject *t_FieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBoundedPropagator_of_(t_FieldBoundedPropagator *self, PyObject *args);
      static PyObject *t_FieldBoundedPropagator_getMaxDate(t_FieldBoundedPropagator *self);
      static PyObject *t_FieldBoundedPropagator_getMinDate(t_FieldBoundedPropagator *self);
      static PyObject *t_FieldBoundedPropagator_get__maxDate(t_FieldBoundedPropagator *self, void *data);
      static PyObject *t_FieldBoundedPropagator_get__minDate(t_FieldBoundedPropagator *self, void *data);
      static PyObject *t_FieldBoundedPropagator_get__parameters_(t_FieldBoundedPropagator *self, void *data);
      static PyGetSetDef t_FieldBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, maxDate),
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, minDate),
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBoundedPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBoundedPropagator, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldBoundedPropagator, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBoundedPropagator)[] = {
        { Py_tp_methods, t_FieldBoundedPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBoundedPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::FieldPropagator),
        NULL
      };

      DEFINE_TYPE(FieldBoundedPropagator, t_FieldBoundedPropagator, FieldBoundedPropagator);
      PyObject *t_FieldBoundedPropagator::wrap_Object(const FieldBoundedPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBoundedPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBoundedPropagator *self = (t_FieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldBoundedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBoundedPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBoundedPropagator *self = (t_FieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBoundedPropagator), &PY_TYPE_DEF(FieldBoundedPropagator), module, "FieldBoundedPropagator", 0);
      }

      void t_FieldBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "class_", make_descriptor(FieldBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "wrapfn_", make_descriptor(t_FieldBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldBoundedPropagator::wrap_Object(FieldBoundedPropagator(((t_FieldBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBoundedPropagator_of_(t_FieldBoundedPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldBoundedPropagator_getMaxDate(t_FieldBoundedPropagator *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldBoundedPropagator_getMinDate(t_FieldBoundedPropagator *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldBoundedPropagator_get__parameters_(t_FieldBoundedPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldBoundedPropagator_get__maxDate(t_FieldBoundedPropagator *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldBoundedPropagator_get__minDate(t_FieldBoundedPropagator *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldTLEPropagator::class$ = NULL;
          jmethodID *FieldTLEPropagator::mids$ = NULL;
          bool FieldTLEPropagator::live$ = false;

          jclass FieldTLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldTLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_dff5885c2c873297] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_getPVCoordinates_4be26760bff65485] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getTLE_56b0e40317713723] = env->getMethodID(cls, "getTLE", "()Lorg/orekit/propagation/analytical/tle/FieldTLE;");
              mids$[mid_propagateOrbit_3de5e0312fd3e848] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
              mids$[mid_resetInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_selectExtrapolator_2c3a8cfbb74b168e] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_320b8f6fd71085ef] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_3d23e0121ca554b4] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_abab29bda75d0bc7] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_getMass_2a5f05be83ff251d] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_resetIntermediateState_33f1c56ea7775d4e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_sxpInitialize_72479ee08453ef97] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_bee5c8ff86f4e777] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame FieldTLEPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
          }

          jdouble FieldTLEPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_dff5885c2c873297]);
          }

          ::org::orekit::utils::FieldPVCoordinates FieldTLEPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_4be26760bff65485], a0.this$, a1.this$));
          }

          ::java::util::List FieldTLEPropagator::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          ::org::orekit::propagation::analytical::tle::FieldTLE FieldTLEPropagator::getTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_getTLE_56b0e40317713723]));
          }

          ::org::orekit::orbits::FieldOrbit FieldTLEPropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_3de5e0312fd3e848], a0.this$, a1.this$));
          }

          void FieldTLEPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_1463d3d0d52f94dd], a0.this$);
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_2c3a8cfbb74b168e], a0.this$, a1.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::frames::Frame & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_320b8f6fd71085ef], a0.this$, a1.this$, a2.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_3d23e0121ca554b4], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_abab29bda75d0bc7], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
      namespace analytical {
        namespace tle {
          static PyObject *t_FieldTLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLEPropagator_of_(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getFrame(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getMU(PyTypeObject *type);
          static PyObject *t_FieldTLEPropagator_getPVCoordinates(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getParametersDrivers(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getTLE(t_FieldTLEPropagator *self);
          static PyObject *t_FieldTLEPropagator_propagateOrbit(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_resetInitialState(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLEPropagator_get__frame(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__mU(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__parametersDrivers(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__tLE(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__parameters_(t_FieldTLEPropagator *self, void *data);
          static PyGetSetDef t_FieldTLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTLEPropagator, frame),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, mU),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, parametersDrivers),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, tLE),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTLEPropagator__methods_[] = {
            DECLARE_METHOD(t_FieldTLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, getPVCoordinates, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getTLE, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, propagateOrbit, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, selectExtrapolator, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTLEPropagator)[] = {
            { Py_tp_methods, t_FieldTLEPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldTLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(FieldTLEPropagator, t_FieldTLEPropagator, FieldTLEPropagator);
          PyObject *t_FieldTLEPropagator::wrap_Object(const FieldTLEPropagator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLEPropagator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLEPropagator *self = (t_FieldTLEPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTLEPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLEPropagator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLEPropagator *self = (t_FieldTLEPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTLEPropagator), &PY_TYPE_DEF(FieldTLEPropagator), module, "FieldTLEPropagator", 0);
          }

          void t_FieldTLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "class_", make_descriptor(FieldTLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "wrapfn_", make_descriptor(t_FieldTLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldTLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTLEPropagator::initializeClass, 1)))
              return NULL;
            return t_FieldTLEPropagator::wrap_Object(FieldTLEPropagator(((t_FieldTLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_FieldTLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTLEPropagator_of_(t_FieldTLEPropagator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldTLEPropagator_getFrame(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldTLEPropagator_getPVCoordinates(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getParametersDrivers(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getTLE(t_FieldTLEPropagator *self)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldTLEPropagator_propagateOrbit(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
            return NULL;
          }

          static PyObject *t_FieldTLEPropagator_resetInitialState(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::Frame a1((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "Kk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2, a3));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2, a3, a4));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "selectExtrapolator", args);
            return NULL;
          }
          static PyObject *t_FieldTLEPropagator_get__parameters_(t_FieldTLEPropagator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldTLEPropagator_get__frame(t_FieldTLEPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_FieldTLEPropagator_get__mU(t_FieldTLEPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_FieldTLEPropagator_get__parametersDrivers(t_FieldTLEPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_FieldTLEPropagator_get__tLE(t_FieldTLEPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(value);
          }
        }
      }
    }
  }
}
