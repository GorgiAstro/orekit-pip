#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldInertia.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/FieldInertia.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldInertia::class$ = NULL;
      jmethodID *FieldInertia::mids$ = NULL;
      bool FieldInertia::live$ = false;

      jclass FieldInertia::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldInertia");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getInertiaAxis1_4745cc6d841a74c0] = env->getMethodID(cls, "getInertiaAxis1", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_getInertiaAxis2_4745cc6d841a74c0] = env->getMethodID(cls, "getInertiaAxis2", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_getInertiaAxis3_4745cc6d841a74c0] = env->getMethodID(cls, "getInertiaAxis3", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_momentum_588ed0f09550adb9] = env->getMethodID(cls, "momentum", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_swap12_469ffcb8a6625c58] = env->getMethodID(cls, "swap12", "()Lorg/orekit/attitudes/FieldInertia;");
          mids$[mid_swap13_469ffcb8a6625c58] = env->getMethodID(cls, "swap13", "()Lorg/orekit/attitudes/FieldInertia;");
          mids$[mid_swap23_469ffcb8a6625c58] = env->getMethodID(cls, "swap23", "()Lorg/orekit/attitudes/FieldInertia;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis1() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis1_4745cc6d841a74c0]));
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis2() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis2_4745cc6d841a74c0]));
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis3() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis3_4745cc6d841a74c0]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldInertia::momentum(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_momentum_588ed0f09550adb9], a0.this$));
      }

      FieldInertia FieldInertia::swap12() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap12_469ffcb8a6625c58]));
      }

      FieldInertia FieldInertia::swap13() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap13_469ffcb8a6625c58]));
      }

      FieldInertia FieldInertia::swap23() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap23_469ffcb8a6625c58]));
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
      static PyObject *t_FieldInertia_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertia_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertia_of_(t_FieldInertia *self, PyObject *args);
      static PyObject *t_FieldInertia_getInertiaAxis1(t_FieldInertia *self);
      static PyObject *t_FieldInertia_getInertiaAxis2(t_FieldInertia *self);
      static PyObject *t_FieldInertia_getInertiaAxis3(t_FieldInertia *self);
      static PyObject *t_FieldInertia_momentum(t_FieldInertia *self, PyObject *arg);
      static PyObject *t_FieldInertia_swap12(t_FieldInertia *self);
      static PyObject *t_FieldInertia_swap13(t_FieldInertia *self);
      static PyObject *t_FieldInertia_swap23(t_FieldInertia *self);
      static PyObject *t_FieldInertia_get__inertiaAxis1(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__inertiaAxis2(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__inertiaAxis3(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__parameters_(t_FieldInertia *self, void *data);
      static PyGetSetDef t_FieldInertia__fields_[] = {
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis1),
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis2),
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis3),
        DECLARE_GET_FIELD(t_FieldInertia, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldInertia__methods_[] = {
        DECLARE_METHOD(t_FieldInertia, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertia, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertia, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis1, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis2, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis3, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, momentum, METH_O),
        DECLARE_METHOD(t_FieldInertia, swap12, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, swap13, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, swap23, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldInertia)[] = {
        { Py_tp_methods, t_FieldInertia__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldInertia__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldInertia)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldInertia, t_FieldInertia, FieldInertia);
      PyObject *t_FieldInertia::wrap_Object(const FieldInertia& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertia::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertia *self = (t_FieldInertia *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldInertia::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertia::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertia *self = (t_FieldInertia *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldInertia::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldInertia), &PY_TYPE_DEF(FieldInertia), module, "FieldInertia", 0);
      }

      void t_FieldInertia::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "class_", make_descriptor(FieldInertia::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "wrapfn_", make_descriptor(t_FieldInertia::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldInertia_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldInertia::initializeClass, 1)))
          return NULL;
        return t_FieldInertia::wrap_Object(FieldInertia(((t_FieldInertia *) arg)->object.this$));
      }
      static PyObject *t_FieldInertia_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldInertia::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldInertia_of_(t_FieldInertia *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldInertia_getInertiaAxis1(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_getInertiaAxis2(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_getInertiaAxis3(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_momentum(t_FieldInertia *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          OBJ_CALL(result = self->object.momentum(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "momentum", arg);
        return NULL;
      }

      static PyObject *t_FieldInertia_swap12(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap12());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_swap13(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap13());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_swap23(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap23());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldInertia_get__parameters_(t_FieldInertia *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldInertia_get__inertiaAxis1(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }

      static PyObject *t_FieldInertia_get__inertiaAxis2(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }

      static PyObject *t_FieldInertia_get__inertiaAxis3(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/FDOABuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *FDOABuilder::class$ = NULL;
          jmethodID *FDOABuilder::mids$ = NULL;
          bool FDOABuilder::live$ = false;

          jclass FDOABuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/FDOABuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7292f02938ec8cc8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_888d88cdd98bf4f2] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/FDOA;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FDOABuilder::FDOABuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_7292f02938ec8cc8, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

          ::org::orekit::estimation::measurements::FDOA FDOABuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::FDOA(env->callObjectMethod(this$, mids$[mid_build_888d88cdd98bf4f2], a0.this$, a1.this$));
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
          static PyObject *t_FDOABuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FDOABuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FDOABuilder_of_(t_FDOABuilder *self, PyObject *args);
          static int t_FDOABuilder_init_(t_FDOABuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FDOABuilder_build(t_FDOABuilder *self, PyObject *args);
          static PyObject *t_FDOABuilder_get__parameters_(t_FDOABuilder *self, void *data);
          static PyGetSetDef t_FDOABuilder__fields_[] = {
            DECLARE_GET_FIELD(t_FDOABuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FDOABuilder__methods_[] = {
            DECLARE_METHOD(t_FDOABuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FDOABuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FDOABuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_FDOABuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FDOABuilder)[] = {
            { Py_tp_methods, t_FDOABuilder__methods_ },
            { Py_tp_init, (void *) t_FDOABuilder_init_ },
            { Py_tp_getset, t_FDOABuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FDOABuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(FDOABuilder, t_FDOABuilder, FDOABuilder);
          PyObject *t_FDOABuilder::wrap_Object(const FDOABuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FDOABuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FDOABuilder *self = (t_FDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FDOABuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FDOABuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FDOABuilder *self = (t_FDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FDOABuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(FDOABuilder), &PY_TYPE_DEF(FDOABuilder), module, "FDOABuilder", 0);
          }

          void t_FDOABuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "class_", make_descriptor(FDOABuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "wrapfn_", make_descriptor(t_FDOABuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FDOABuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FDOABuilder::initializeClass, 1)))
              return NULL;
            return t_FDOABuilder::wrap_Object(FDOABuilder(((t_FDOABuilder *) arg)->object.this$));
          }
          static PyObject *t_FDOABuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FDOABuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FDOABuilder_of_(t_FDOABuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FDOABuilder_init_(t_FDOABuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            FDOABuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = FDOABuilder(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(FDOA);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FDOABuilder_build(t_FDOABuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::FDOA result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_FDOA::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FDOABuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_FDOABuilder_get__parameters_(t_FDOABuilder *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonal.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTZonal::class$ = NULL;
            jmethodID *DSSTZonal::mids$ = NULL;
            bool DSSTZonal::live$ = false;
            ::java::lang::String *DSSTZonal::SHORT_PERIOD_PREFIX = NULL;

            jclass DSSTZonal::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTZonal");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_824898e59eddfa6c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_init$_78ed1711d05b4189] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;III)V");
                mids$[mid_getMeanElementRate_6930c150caff50e0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_3573019cca22a7a6] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_getProvider_72fe1f11b4245c25] = env->getMethodID(cls, "getProvider", "()Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
                mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_a9be3da5be85857d] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_114c99ef73dfde56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTZonal::DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_824898e59eddfa6c, a0.this$)) {}

            DSSTZonal::DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78ed1711d05b4189, a0.this$, a1, a2, a3)) {}

            JArray< jdouble > DSSTZonal::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_6930c150caff50e0], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTZonal::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3573019cca22a7a6], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTZonal::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
            }

            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider DSSTZonal::getProvider() const
            {
              return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_72fe1f11b4245c25]));
            }

            ::java::util::List DSSTZonal::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTZonal::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554], a0.this$, a1.this$, a2.this$));
            }

            void DSSTZonal::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
            }

            void DSSTZonal::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9be3da5be85857d], a0.this$, a1.this$);
            }

            void DSSTZonal::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_114c99ef73dfde56], a0.this$, a1.this$);
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
          namespace forces {
            static PyObject *t_DSSTZonal_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonal_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTZonal_init_(t_DSSTZonal *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTZonal_getMeanElementRate(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_getParametersDrivers(t_DSSTZonal *self);
            static PyObject *t_DSSTZonal_getProvider(t_DSSTZonal *self);
            static PyObject *t_DSSTZonal_initializeShortPeriodTerms(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_registerAttitudeProvider(t_DSSTZonal *self, PyObject *arg);
            static PyObject *t_DSSTZonal_updateShortPeriodTerms(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_get__parametersDrivers(t_DSSTZonal *self, void *data);
            static PyObject *t_DSSTZonal_get__provider(t_DSSTZonal *self, void *data);
            static PyGetSetDef t_DSSTZonal__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTZonal, parametersDrivers),
              DECLARE_GET_FIELD(t_DSSTZonal, provider),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTZonal__methods_[] = {
              DECLARE_METHOD(t_DSSTZonal, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonal, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonal, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTZonal, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonal, getProvider, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonal, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTZonal, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTZonal, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTZonal)[] = {
              { Py_tp_methods, t_DSSTZonal__methods_ },
              { Py_tp_init, (void *) t_DSSTZonal_init_ },
              { Py_tp_getset, t_DSSTZonal__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTZonal)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTZonal, t_DSSTZonal, DSSTZonal);

            void t_DSSTZonal::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTZonal), &PY_TYPE_DEF(DSSTZonal), module, "DSSTZonal", 0);
            }

            void t_DSSTZonal::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "class_", make_descriptor(DSSTZonal::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "wrapfn_", make_descriptor(t_DSSTZonal::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTZonal::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTZonal::SHORT_PERIOD_PREFIX)));
            }

            static PyObject *t_DSSTZonal_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTZonal::initializeClass, 1)))
                return NULL;
              return t_DSSTZonal::wrap_Object(DSSTZonal(((t_DSSTZonal *) arg)->object.this$));
            }
            static PyObject *t_DSSTZonal_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTZonal::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTZonal_init_(t_DSSTZonal *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                  DSSTZonal object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                  {
                    INT_CALL(object = DSSTZonal(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                  jint a1;
                  jint a2;
                  jint a3;
                  DSSTZonal object((jobject) NULL);

                  if (!parseArgs(args, "kIII", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTZonal(a0, a1, a2, a3));
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

            static PyObject *t_DSSTZonal_getMeanElementRate(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_getParametersDrivers(t_DSSTZonal *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTZonal_getProvider(t_DSSTZonal *self)
            {
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);
              OBJ_CALL(result = self->object.getProvider());
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            static PyObject *t_DSSTZonal_initializeShortPeriodTerms(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_registerAttitudeProvider(t_DSSTZonal *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTZonal_updateShortPeriodTerms(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_get__parametersDrivers(t_DSSTZonal *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_DSSTZonal_get__provider(t_DSSTZonal *self, void *data)
            {
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
              OBJ_CALL(value = self->object.getProvider());
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *BivariateFunction::class$ = NULL;
      jmethodID *BivariateFunction::mids$ = NULL;
      bool BivariateFunction::live$ = false;

      jclass BivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/BivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble BivariateFunction::value(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
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
      static PyObject *t_BivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BivariateFunction_value(t_BivariateFunction *self, PyObject *args);

      static PyMethodDef t_BivariateFunction__methods_[] = {
        DECLARE_METHOD(t_BivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BivariateFunction)[] = {
        { Py_tp_methods, t_BivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BivariateFunction, t_BivariateFunction, BivariateFunction);

      void t_BivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(BivariateFunction), &PY_TYPE_DEF(BivariateFunction), module, "BivariateFunction", 0);
      }

      void t_BivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "class_", make_descriptor(BivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "wrapfn_", make_descriptor(t_BivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BivariateFunction::initializeClass, 1)))
          return NULL;
        return t_BivariateFunction::wrap_Object(BivariateFunction(((t_BivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_BivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BivariateFunction_value(t_BivariateFunction *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.value(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEConverter.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ComplexODEStateAndDerivative.h"
#include "org/hipparchus/ode/ComplexOrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ComplexSecondaryODE.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/ode/ComplexODEState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEConverter::class$ = NULL;
      jmethodID *ComplexODEConverter::mids$ = NULL;
      bool ComplexODEConverter::live$ = false;

      jclass ComplexODEConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_convertEquations_47807f37370886ab] = env->getMethodID(cls, "convertEquations", "(Lorg/hipparchus/ode/ComplexOrdinaryDifferentialEquation;)Lorg/hipparchus/ode/OrdinaryDifferentialEquation;");
          mids$[mid_convertSecondaryEquations_3538a086806347eb] = env->getMethodID(cls, "convertSecondaryEquations", "(Lorg/hipparchus/ode/ComplexSecondaryODE;)Lorg/hipparchus/ode/SecondaryODE;");
          mids$[mid_convertState_7fe8d4e3b4ccd4c4] = env->getMethodID(cls, "convertState", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ComplexODEStateAndDerivative;");
          mids$[mid_convertState_edf45f92b3b90b4f] = env->getMethodID(cls, "convertState", "(Lorg/hipparchus/ode/ComplexODEState;)Lorg/hipparchus/ode/ODEState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEConverter::ComplexODEConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::org::hipparchus::ode::OrdinaryDifferentialEquation ComplexODEConverter::convertEquations(const ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation & a0) const
      {
        return ::org::hipparchus::ode::OrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_convertEquations_47807f37370886ab], a0.this$));
      }

      ::org::hipparchus::ode::SecondaryODE ComplexODEConverter::convertSecondaryEquations(const ::org::hipparchus::ode::ComplexSecondaryODE & a0) const
      {
        return ::org::hipparchus::ode::SecondaryODE(env->callObjectMethod(this$, mids$[mid_convertSecondaryEquations_3538a086806347eb], a0.this$));
      }

      ::org::hipparchus::ode::ComplexODEStateAndDerivative ComplexODEConverter::convertState(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
      {
        return ::org::hipparchus::ode::ComplexODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_convertState_7fe8d4e3b4ccd4c4], a0.this$));
      }

      ::org::hipparchus::ode::ODEState ComplexODEConverter::convertState(const ::org::hipparchus::ode::ComplexODEState & a0) const
      {
        return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_convertState_edf45f92b3b90b4f], a0.this$));
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
      static PyObject *t_ComplexODEConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEConverter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEConverter_init_(t_ComplexODEConverter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEConverter_convertEquations(t_ComplexODEConverter *self, PyObject *arg);
      static PyObject *t_ComplexODEConverter_convertSecondaryEquations(t_ComplexODEConverter *self, PyObject *arg);
      static PyObject *t_ComplexODEConverter_convertState(t_ComplexODEConverter *self, PyObject *args);

      static PyMethodDef t_ComplexODEConverter__methods_[] = {
        DECLARE_METHOD(t_ComplexODEConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEConverter, convertEquations, METH_O),
        DECLARE_METHOD(t_ComplexODEConverter, convertSecondaryEquations, METH_O),
        DECLARE_METHOD(t_ComplexODEConverter, convertState, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEConverter)[] = {
        { Py_tp_methods, t_ComplexODEConverter__methods_ },
        { Py_tp_init, (void *) t_ComplexODEConverter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexODEConverter, t_ComplexODEConverter, ComplexODEConverter);

      void t_ComplexODEConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEConverter), &PY_TYPE_DEF(ComplexODEConverter), module, "ComplexODEConverter", 0);
      }

      void t_ComplexODEConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "class_", make_descriptor(ComplexODEConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "wrapfn_", make_descriptor(t_ComplexODEConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEConverter::initializeClass, 1)))
          return NULL;
        return t_ComplexODEConverter::wrap_Object(ComplexODEConverter(((t_ComplexODEConverter *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEConverter_init_(t_ComplexODEConverter *self, PyObject *args, PyObject *kwds)
      {
        ComplexODEConverter object((jobject) NULL);

        INT_CALL(object = ComplexODEConverter());
        self->object = object;

        return 0;
      }

      static PyObject *t_ComplexODEConverter_convertEquations(t_ComplexODEConverter *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation a0((jobject) NULL);
        ::org::hipparchus::ode::OrdinaryDifferentialEquation result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.convertEquations(a0));
          return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertEquations", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEConverter_convertSecondaryEquations(t_ComplexODEConverter *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ComplexSecondaryODE a0((jobject) NULL);
        ::org::hipparchus::ode::SecondaryODE result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ComplexSecondaryODE::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.convertSecondaryEquations(a0));
          return ::org::hipparchus::ode::t_SecondaryODE::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEConverter_convertState(t_ComplexODEConverter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
            ::org::hipparchus::ode::ComplexODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertState(a0));
              return ::org::hipparchus::ode::t_ComplexODEStateAndDerivative::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::ode::ComplexODEState a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::ode::ComplexODEState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertState(a0));
              return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "convertState", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SecondMoment::class$ = NULL;
          jmethodID *SecondMoment::mids$ = NULL;
          bool SecondMoment::live$ = false;

          jclass SecondMoment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SecondMoment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_b42241ac9de9fb3c] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_c2d7ba6b29d60a37] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/SecondMoment;");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SecondMoment::SecondMoment() : ::org::hipparchus::stat::descriptive::moment::FirstMoment(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void SecondMoment::aggregate(const SecondMoment & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_b42241ac9de9fb3c], a0.this$);
          }

          void SecondMoment::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          SecondMoment SecondMoment::copy() const
          {
            return SecondMoment(env->callObjectMethod(this$, mids$[mid_copy_c2d7ba6b29d60a37]));
          }

          jdouble SecondMoment::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void SecondMoment::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
        namespace moment {
          static PyObject *t_SecondMoment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SecondMoment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SecondMoment_init_(t_SecondMoment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SecondMoment_aggregate(t_SecondMoment *self, PyObject *arg);
          static PyObject *t_SecondMoment_clear(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_copy(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_getResult(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_increment(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_get__result(t_SecondMoment *self, void *data);
          static PyGetSetDef t_SecondMoment__fields_[] = {
            DECLARE_GET_FIELD(t_SecondMoment, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SecondMoment__methods_[] = {
            DECLARE_METHOD(t_SecondMoment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SecondMoment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SecondMoment, aggregate, METH_O),
            DECLARE_METHOD(t_SecondMoment, clear, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, copy, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SecondMoment)[] = {
            { Py_tp_methods, t_SecondMoment__methods_ },
            { Py_tp_init, (void *) t_SecondMoment_init_ },
            { Py_tp_getset, t_SecondMoment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SecondMoment)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::moment::FirstMoment),
            NULL
          };

          DEFINE_TYPE(SecondMoment, t_SecondMoment, SecondMoment);

          void t_SecondMoment::install(PyObject *module)
          {
            installType(&PY_TYPE(SecondMoment), &PY_TYPE_DEF(SecondMoment), module, "SecondMoment", 0);
          }

          void t_SecondMoment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "class_", make_descriptor(SecondMoment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "wrapfn_", make_descriptor(t_SecondMoment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SecondMoment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SecondMoment::initializeClass, 1)))
              return NULL;
            return t_SecondMoment::wrap_Object(SecondMoment(((t_SecondMoment *) arg)->object.this$));
          }
          static PyObject *t_SecondMoment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SecondMoment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SecondMoment_init_(t_SecondMoment *self, PyObject *args, PyObject *kwds)
          {
            SecondMoment object((jobject) NULL);

            INT_CALL(object = SecondMoment());
            self->object = object;

            return 0;
          }

          static PyObject *t_SecondMoment_aggregate(t_SecondMoment *self, PyObject *arg)
          {
            SecondMoment a0((jobject) NULL);

            if (!parseArg(arg, "k", SecondMoment::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SecondMoment_clear(t_SecondMoment *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SecondMoment_copy(t_SecondMoment *self, PyObject *args)
          {
            SecondMoment result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SecondMoment::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SecondMoment_getResult(t_SecondMoment *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SecondMoment_increment(t_SecondMoment *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SecondMoment_get__result(t_SecondMoment *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/SphereGenerator.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SphereGenerator::class$ = NULL;
          jmethodID *SphereGenerator::mids$ = NULL;
          bool SphereGenerator::live$ = false;

          jclass SphereGenerator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SphereGenerator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_ballOnSupport_7c06e55e72f854ed] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphereGenerator::SphereGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall SphereGenerator::ballOnSupport(const ::java::util::List & a0) const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_7c06e55e72f854ed], a0.this$));
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
          static PyObject *t_SphereGenerator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphereGenerator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SphereGenerator_init_(t_SphereGenerator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphereGenerator_ballOnSupport(t_SphereGenerator *self, PyObject *arg);

          static PyMethodDef t_SphereGenerator__methods_[] = {
            DECLARE_METHOD(t_SphereGenerator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphereGenerator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphereGenerator, ballOnSupport, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphereGenerator)[] = {
            { Py_tp_methods, t_SphereGenerator__methods_ },
            { Py_tp_init, (void *) t_SphereGenerator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphereGenerator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SphereGenerator, t_SphereGenerator, SphereGenerator);

          void t_SphereGenerator::install(PyObject *module)
          {
            installType(&PY_TYPE(SphereGenerator), &PY_TYPE_DEF(SphereGenerator), module, "SphereGenerator", 0);
          }

          void t_SphereGenerator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "class_", make_descriptor(SphereGenerator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "wrapfn_", make_descriptor(t_SphereGenerator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphereGenerator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphereGenerator::initializeClass, 1)))
              return NULL;
            return t_SphereGenerator::wrap_Object(SphereGenerator(((t_SphereGenerator *) arg)->object.this$));
          }
          static PyObject *t_SphereGenerator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphereGenerator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SphereGenerator_init_(t_SphereGenerator *self, PyObject *args, PyObject *kwds)
          {
            SphereGenerator object((jobject) NULL);

            INT_CALL(object = SphereGenerator());
            self->object = object;

            return 0;
          }

          static PyObject *t_SphereGenerator_ballOnSupport(t_SphereGenerator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.ballOnSupport(a0));
              return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D), ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
            }

            PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEnablingPredicate::class$ = NULL;
        jmethodID *FieldEnablingPredicate::mids$ = NULL;
        bool FieldEnablingPredicate::live$ = false;

        jclass FieldEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventIsEnabled_2dbef992042bcf47] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldEnablingPredicate::eventIsEnabled(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_eventIsEnabled_2dbef992042bcf47], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_FieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEnablingPredicate_of_(t_FieldEnablingPredicate *self, PyObject *args);
        static PyObject *t_FieldEnablingPredicate_eventIsEnabled(t_FieldEnablingPredicate *self, PyObject *args);
        static PyObject *t_FieldEnablingPredicate_get__parameters_(t_FieldEnablingPredicate *self, void *data);
        static PyGetSetDef t_FieldEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEnablingPredicate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_FieldEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEnablingPredicate, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEnablingPredicate, eventIsEnabled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEnablingPredicate)[] = {
          { Py_tp_methods, t_FieldEnablingPredicate__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEnablingPredicate, t_FieldEnablingPredicate, FieldEnablingPredicate);
        PyObject *t_FieldEnablingPredicate::wrap_Object(const FieldEnablingPredicate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEnablingPredicate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEnablingPredicate *self = (t_FieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEnablingPredicate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEnablingPredicate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEnablingPredicate *self = (t_FieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEnablingPredicate), &PY_TYPE_DEF(FieldEnablingPredicate), module, "FieldEnablingPredicate", 0);
        }

        void t_FieldEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "class_", make_descriptor(FieldEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "wrapfn_", make_descriptor(t_FieldEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_FieldEnablingPredicate::wrap_Object(FieldEnablingPredicate(((t_FieldEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_FieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEnablingPredicate_of_(t_FieldEnablingPredicate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEnablingPredicate_eventIsEnabled(t_FieldEnablingPredicate *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean result;

          if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.eventIsEnabled(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventIsEnabled", args);
          return NULL;
        }
        static PyObject *t_FieldEnablingPredicate_get__parameters_(t_FieldEnablingPredicate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/TorqueFree.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/attitudes/Inertia.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TorqueFree::class$ = NULL;
      jmethodID *TorqueFree::mids$ = NULL;
      bool TorqueFree::live$ = false;

      jclass TorqueFree::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TorqueFree");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_92784335c590ffe3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/Attitude;Lorg/orekit/attitudes/Inertia;)V");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getInertia_0c35e3e78a73a076] = env->getMethodID(cls, "getInertia", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_getInitialAttitude_ed1eef73b5133690] = env->getMethodID(cls, "getInitialAttitude", "()Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TorqueFree::TorqueFree(const ::org::orekit::attitudes::Attitude & a0, const ::org::orekit::attitudes::Inertia & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_92784335c590ffe3, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::FieldAttitude TorqueFree::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude TorqueFree::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Inertia TorqueFree::getInertia() const
      {
        return ::org::orekit::attitudes::Inertia(env->callObjectMethod(this$, mids$[mid_getInertia_0c35e3e78a73a076]));
      }

      ::org::orekit::attitudes::Attitude TorqueFree::getInitialAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getInitialAttitude_ed1eef73b5133690]));
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
      static PyObject *t_TorqueFree_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TorqueFree_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TorqueFree_init_(t_TorqueFree *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TorqueFree_getAttitude(t_TorqueFree *self, PyObject *args);
      static PyObject *t_TorqueFree_getInertia(t_TorqueFree *self);
      static PyObject *t_TorqueFree_getInitialAttitude(t_TorqueFree *self);
      static PyObject *t_TorqueFree_get__inertia(t_TorqueFree *self, void *data);
      static PyObject *t_TorqueFree_get__initialAttitude(t_TorqueFree *self, void *data);
      static PyGetSetDef t_TorqueFree__fields_[] = {
        DECLARE_GET_FIELD(t_TorqueFree, inertia),
        DECLARE_GET_FIELD(t_TorqueFree, initialAttitude),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TorqueFree__methods_[] = {
        DECLARE_METHOD(t_TorqueFree, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TorqueFree, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TorqueFree, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TorqueFree, getInertia, METH_NOARGS),
        DECLARE_METHOD(t_TorqueFree, getInitialAttitude, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TorqueFree)[] = {
        { Py_tp_methods, t_TorqueFree__methods_ },
        { Py_tp_init, (void *) t_TorqueFree_init_ },
        { Py_tp_getset, t_TorqueFree__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TorqueFree)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TorqueFree, t_TorqueFree, TorqueFree);

      void t_TorqueFree::install(PyObject *module)
      {
        installType(&PY_TYPE(TorqueFree), &PY_TYPE_DEF(TorqueFree), module, "TorqueFree", 0);
      }

      void t_TorqueFree::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "class_", make_descriptor(TorqueFree::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "wrapfn_", make_descriptor(t_TorqueFree::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TorqueFree_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TorqueFree::initializeClass, 1)))
          return NULL;
        return t_TorqueFree::wrap_Object(TorqueFree(((t_TorqueFree *) arg)->object.this$));
      }
      static PyObject *t_TorqueFree_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TorqueFree::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TorqueFree_init_(t_TorqueFree *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::Attitude a0((jobject) NULL);
        ::org::orekit::attitudes::Inertia a1((jobject) NULL);
        TorqueFree object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::attitudes::Inertia::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TorqueFree(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TorqueFree_getAttitude(t_TorqueFree *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_TorqueFree_getInertia(t_TorqueFree *self)
      {
        ::org::orekit::attitudes::Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertia());
        return ::org::orekit::attitudes::t_Inertia::wrap_Object(result);
      }

      static PyObject *t_TorqueFree_getInitialAttitude(t_TorqueFree *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_TorqueFree_get__inertia(t_TorqueFree *self, void *data)
      {
        ::org::orekit::attitudes::Inertia value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertia());
        return ::org::orekit::attitudes::t_Inertia::wrap_Object(value);
      }

      static PyObject *t_TorqueFree_get__initialAttitude(t_TorqueFree *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonSeriesTerm.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonSeriesTerm::class$ = NULL;
      jmethodID *PythonSeriesTerm::mids$ = NULL;
      bool PythonSeriesTerm::live$ = false;

      jclass PythonSeriesTerm::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonSeriesTerm");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_argument_645226ccf45fca25] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argument_3e0ce57516456e43] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_645226ccf45fca25] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argumentDerivative_3e0ce57516456e43] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSeriesTerm::PythonSeriesTerm() : ::org::orekit::data::SeriesTerm(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonSeriesTerm::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonSeriesTerm::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonSeriesTerm::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonSeriesTerm_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSeriesTerm_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonSeriesTerm_init_(t_PythonSeriesTerm *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSeriesTerm_finalize(t_PythonSeriesTerm *self);
      static PyObject *t_PythonSeriesTerm_pythonExtension(t_PythonSeriesTerm *self, PyObject *args);
      static jdouble JNICALL t_PythonSeriesTerm_argument0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonSeriesTerm_argument1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jdouble JNICALL t_PythonSeriesTerm_argumentDerivative2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonSeriesTerm_argumentDerivative3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonSeriesTerm_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonSeriesTerm_get__self(t_PythonSeriesTerm *self, void *data);
      static PyGetSetDef t_PythonSeriesTerm__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSeriesTerm, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSeriesTerm__methods_[] = {
        DECLARE_METHOD(t_PythonSeriesTerm, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSeriesTerm, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSeriesTerm, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSeriesTerm, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSeriesTerm)[] = {
        { Py_tp_methods, t_PythonSeriesTerm__methods_ },
        { Py_tp_init, (void *) t_PythonSeriesTerm_init_ },
        { Py_tp_getset, t_PythonSeriesTerm__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSeriesTerm)[] = {
        &PY_TYPE_DEF(::org::orekit::data::SeriesTerm),
        NULL
      };

      DEFINE_TYPE(PythonSeriesTerm, t_PythonSeriesTerm, PythonSeriesTerm);

      void t_PythonSeriesTerm::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSeriesTerm), &PY_TYPE_DEF(PythonSeriesTerm), module, "PythonSeriesTerm", 1);
      }

      void t_PythonSeriesTerm::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "class_", make_descriptor(PythonSeriesTerm::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "wrapfn_", make_descriptor(t_PythonSeriesTerm::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSeriesTerm::initializeClass);
        JNINativeMethod methods[] = {
          { "argument", "(Lorg/orekit/data/BodiesElements;)D", (void *) t_PythonSeriesTerm_argument0 },
          { "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonSeriesTerm_argument1 },
          { "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D", (void *) t_PythonSeriesTerm_argumentDerivative2 },
          { "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonSeriesTerm_argumentDerivative3 },
          { "pythonDecRef", "()V", (void *) t_PythonSeriesTerm_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonSeriesTerm_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSeriesTerm::initializeClass, 1)))
          return NULL;
        return t_PythonSeriesTerm::wrap_Object(PythonSeriesTerm(((t_PythonSeriesTerm *) arg)->object.this$));
      }
      static PyObject *t_PythonSeriesTerm_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSeriesTerm::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonSeriesTerm_init_(t_PythonSeriesTerm *self, PyObject *args, PyObject *kwds)
      {
        PythonSeriesTerm object((jobject) NULL);

        INT_CALL(object = PythonSeriesTerm());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSeriesTerm_finalize(t_PythonSeriesTerm *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSeriesTerm_pythonExtension(t_PythonSeriesTerm *self, PyObject *args)
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

      static jdouble JNICALL t_PythonSeriesTerm_argument0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argument", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("argument", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonSeriesTerm_argument1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_FieldBodiesElements::wrap_Object(::org::orekit::data::FieldBodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argument", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("argument", result);
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

      static jdouble JNICALL t_PythonSeriesTerm_argumentDerivative2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argumentDerivative", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("argumentDerivative", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonSeriesTerm_argumentDerivative3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_FieldBodiesElements::wrap_Object(::org::orekit::data::FieldBodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argumentDerivative", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("argumentDerivative", result);
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

      static void JNICALL t_PythonSeriesTerm_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonSeriesTerm_get__self(t_PythonSeriesTerm *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldDerivativeStructure::class$ = NULL;
        jmethodID *FieldDerivativeStructure::mids$ = NULL;
        bool FieldDerivativeStructure::live$ = false;

        jclass FieldDerivativeStructure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldDerivativeStructure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_5997f22f8d76210e] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_acos_5997f22f8d76210e] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_acosh_5997f22f8d76210e] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_429596958fb69dd1] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_16af759261ef50b4] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_bcb3f877ec28ee10] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_asin_5997f22f8d76210e] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_asinh_5997f22f8d76210e] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan_5997f22f8d76210e] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan2_429596958fb69dd1] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan2_2d018f5095643882] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atanh_5997f22f8d76210e] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cbrt_5997f22f8d76210e] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_ceil_5997f22f8d76210e] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_compose_1e72ceb97300ff53] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_compose_276eb72cb82e871b] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_429596958fb69dd1] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_16af759261ef50b4] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_bcb3f877ec28ee10] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cos_5997f22f8d76210e] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cosh_5997f22f8d76210e] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_differentiate_6e4843d040f889ad] = env->getMethodID(cls, "differentiate", "(II)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_429596958fb69dd1] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_16af759261ef50b4] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_bcb3f877ec28ee10] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_exp_5997f22f8d76210e] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_expm1_5997f22f8d76210e] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_floor_5997f22f8d76210e] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getAllDerivatives_41762fd4377ff26e] = env->getMethodID(cls, "getAllDerivatives", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_412668abc8d889e9] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getFactory_658f2293700a611b] = env->getMethodID(cls, "getFactory", "()Lorg/hipparchus/analysis/differentiation/FDSFactory;");
            mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getFreeParameters_412668abc8d889e9] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_12d47fa54f2033ee] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPi_5997f22f8d76210e] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_613c8f46c659f636] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_hypot_429596958fb69dd1] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_hypot_2d018f5095643882] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_integrate_6e4843d040f889ad] = env->getMethodID(cls, "integrate", "(II)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_d5f37cac3c26392b] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_85436f76b3fd6d98] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_63740f678ff04e3d] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_afec3b6d6b6b1351] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_de8a714941bdf870] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_86c86b8b3c4165ed] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_8b427598a4050513] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_5dc5854450f18701] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_1db09076edab1e5c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_c8dd04492392291b] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_2e0c76a933f3e0fc] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_0991b9364c93ace2] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log_5997f22f8d76210e] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log10_5997f22f8d76210e] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log1p_5997f22f8d76210e] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_429596958fb69dd1] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_16af759261ef50b4] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_40193fcf634e0858] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_bcb3f877ec28ee10] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_negate_5997f22f8d76210e] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_newInstance_16af759261ef50b4] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_429596958fb69dd1] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_16af759261ef50b4] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_40193fcf634e0858] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_152278d6668a3a71] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rebase_80af53a36b68e2b4] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_reciprocal_5997f22f8d76210e] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_429596958fb69dd1] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_16af759261ef50b4] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_bcb3f877ec28ee10] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rint_5997f22f8d76210e] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rootN_40193fcf634e0858] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_scalb_40193fcf634e0858] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sign_5997f22f8d76210e] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sin_5997f22f8d76210e] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_5997f22f8d76210e] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_5997f22f8d76210e] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_429596958fb69dd1] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_16af759261ef50b4] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_bcb3f877ec28ee10] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_tan_5997f22f8d76210e] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_tanh_5997f22f8d76210e] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_taylor_c2a9122c04338397] = env->getMethodID(cls, "taylor", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_e3919ad898361abd] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_5997f22f8d76210e] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_5997f22f8d76210e] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_ulp_5997f22f8d76210e] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDerivativeStructure FieldDerivativeStructure::abs() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_abs_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::acos() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_acos_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::acosh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_acosh_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_429596958fb69dd1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_16af759261ef50b4], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_bcb3f877ec28ee10], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::asin() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_asin_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::asinh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_asinh_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan2(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan2_429596958fb69dd1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan2(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_atan2_2d018f5095643882], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atanh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atanh_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cbrt() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cbrt_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::ceil() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_ceil_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::compose(const JArray< jdouble > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_1e72ceb97300ff53], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_276eb72cb82e871b], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_429596958fb69dd1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_16af759261ef50b4], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_bcb3f877ec28ee10], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cos() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cos_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cosh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cosh_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::differentiate(jint a0, jint a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_differentiate_6e4843d040f889ad], a0, a1));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_429596958fb69dd1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_16af759261ef50b4], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_bcb3f877ec28ee10], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::exp() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_exp_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::expm1() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_expm1_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::floor() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_floor_5997f22f8d76210e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldDerivativeStructure::getAllDerivatives() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAllDerivatives_41762fd4377ff26e]));
        }

        jint FieldDerivativeStructure::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::differentiation::FDSFactory FieldDerivativeStructure::getFactory() const
        {
          return ::org::hipparchus::analysis::differentiation::FDSFactory(env->callObjectMethod(this$, mids$[mid_getFactory_658f2293700a611b]));
        }

        ::org::hipparchus::Field FieldDerivativeStructure::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
        }

        jint FieldDerivativeStructure::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_412668abc8d889e9]);
        }

        jint FieldDerivativeStructure::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_12d47fa54f2033ee], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::getPi() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_5997f22f8d76210e]));
        }

        jdouble FieldDerivativeStructure::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_613c8f46c659f636]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::hypot(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_hypot_429596958fb69dd1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::hypot(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_hypot_2d018f5095643882], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::integrate(jint a0, jint a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_integrate_6e4843d040f889ad], a0, a1));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< jdouble > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_d5f37cac3c26392b], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_85436f76b3fd6d98], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< FieldDerivativeStructure > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_63740f678ff04e3d], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_afec3b6d6b6b1351], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_de8a714941bdf870], a0, a1.this$, a2, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_86c86b8b3c4165ed], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3, const FieldDerivativeStructure & a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_8b427598a4050513], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3, jdouble a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_5dc5854450f18701], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_1db09076edab1e5c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3, const FieldDerivativeStructure & a4, const FieldDerivativeStructure & a5, const FieldDerivativeStructure & a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_c8dd04492392291b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3, jdouble a4, const FieldDerivativeStructure & a5, jdouble a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_2e0c76a933f3e0fc], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldDerivativeStructure & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_0991b9364c93ace2], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log10() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log10_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log1p() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log1p_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_429596958fb69dd1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_16af759261ef50b4], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_40193fcf634e0858], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_bcb3f877ec28ee10], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::negate() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_negate_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::newInstance(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_newInstance_16af759261ef50b4], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_429596958fb69dd1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_16af759261ef50b4], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_40193fcf634e0858], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jdouble a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_pow_152278d6668a3a71], a0, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rebase(const JArray< FieldDerivativeStructure > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rebase_80af53a36b68e2b4], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::reciprocal() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_reciprocal_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_429596958fb69dd1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_16af759261ef50b4], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_bcb3f877ec28ee10], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rint() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rint_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rootN(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rootN_40193fcf634e0858], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::scalb(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_scalb_40193fcf634e0858], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sign() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sign_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sin() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sin_5997f22f8d76210e]));
        }

        ::org::hipparchus::util::FieldSinCos FieldDerivativeStructure::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sinh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sinh_5997f22f8d76210e]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldDerivativeStructure::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sqrt() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sqrt_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_429596958fb69dd1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_16af759261ef50b4], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_bcb3f877ec28ee10], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::tan() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_tan_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::tanh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_tanh_5997f22f8d76210e]));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::taylor(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_c2a9122c04338397], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_e3919ad898361abd], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::toDegrees() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDegrees_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::toRadians() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toRadians_5997f22f8d76210e]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::ulp() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_ulp_5997f22f8d76210e]));
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
        static PyObject *t_FieldDerivativeStructure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_of_(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_abs(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_acos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_acosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_add(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_asin(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_asinh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_atan(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_atan2(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_atanh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_cbrt(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_ceil(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_compose(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_copySign(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_cos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_cosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_differentiate(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_divide(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_exp(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_expm1(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_floor(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getAllDerivatives(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getExponent(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getFactory(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getField(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getFreeParameters(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getOrder(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getPartialDerivative(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_getPi(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getReal(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getValue(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_hypot(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_integrate(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_linearCombination(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_log(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_log10(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_log1p(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_multiply(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_negate(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_newInstance(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_pow(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_rebase(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_reciprocal(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_remainder(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_rint(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_rootN(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_scalb(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_sign(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sin(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinCos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinhCosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sqrt(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_subtract(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_tan(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_tanh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_taylor(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_toDegrees(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_toRadians(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_ulp(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_get__allDerivatives(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__exponent(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__factory(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__field(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__freeParameters(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__order(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__pi(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__real(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__value(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__parameters_(t_FieldDerivativeStructure *self, void *data);
        static PyGetSetDef t_FieldDerivativeStructure__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, allDerivatives),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, exponent),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, factory),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, field),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, freeParameters),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, order),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, pi),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, real),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, value),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDerivativeStructure__methods_[] = {
          DECLARE_METHOD(t_FieldDerivativeStructure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, abs, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, acos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, acosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, asin, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, asinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan2, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, ceil, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, exp, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, expm1, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, floor, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getAllDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getFactory, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getReal, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, hypot, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, integrate, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log10, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log1p, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, newInstance, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rebase, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rint, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rootN, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, scalb, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, sign, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sin, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, tan, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, tanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDerivativeStructure)[] = {
          { Py_tp_methods, t_FieldDerivativeStructure__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldDerivativeStructure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDerivativeStructure)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldDerivativeStructure, t_FieldDerivativeStructure, FieldDerivativeStructure);
        PyObject *t_FieldDerivativeStructure::wrap_Object(const FieldDerivativeStructure& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDerivativeStructure::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivativeStructure *self = (t_FieldDerivativeStructure *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDerivativeStructure::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDerivativeStructure::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivativeStructure *self = (t_FieldDerivativeStructure *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDerivativeStructure::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDerivativeStructure), &PY_TYPE_DEF(FieldDerivativeStructure), module, "FieldDerivativeStructure", 0);
        }

        void t_FieldDerivativeStructure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "class_", make_descriptor(FieldDerivativeStructure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "wrapfn_", make_descriptor(t_FieldDerivativeStructure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDerivativeStructure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDerivativeStructure::initializeClass, 1)))
            return NULL;
          return t_FieldDerivativeStructure::wrap_Object(FieldDerivativeStructure(((t_FieldDerivativeStructure *) arg)->object.this$));
        }
        static PyObject *t_FieldDerivativeStructure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDerivativeStructure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDerivativeStructure_of_(t_FieldDerivativeStructure *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldDerivativeStructure_abs(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_acos(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_acosh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_add(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_asin(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_asinh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_atan(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_atan2(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_atan2_(PyTypeObject *type, PyObject *args)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "KK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::atan2(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_atanh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_cbrt(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_ceil(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_compose(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.compose(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.compose(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_copySign(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_cos(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_cosh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_differentiate(t_FieldDerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.differentiate(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_divide(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_exp(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_expm1(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_floor(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getAllDerivatives(t_FieldDerivativeStructure *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllDerivatives());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldDerivativeStructure_getExponent(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getFactory(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory result((jobject) NULL);
          OBJ_CALL(result = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getField(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_getFreeParameters(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getOrder(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getPartialDerivative(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_getPi(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getReal(t_FieldDerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldDerivativeStructure_getValue(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_hypot(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_hypot_(PyTypeObject *type, PyObject *args)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "KK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::hypot(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_integrate(t_FieldDerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_linearCombination(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldDerivativeStructure > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, t_FieldDerivativeStructure::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure a6((jobject) NULL);
              PyTypeObject **p6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, t_FieldDerivativeStructure::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &p6, t_FieldDerivativeStructure::parameters_, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_log(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_log10(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_log1p(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_multiply(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_negate(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_newInstance(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jdouble a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_pow(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::pow(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_rebase(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          JArray< FieldDerivativeStructure > a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.rebase(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_reciprocal(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_remainder(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_rint(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_rootN(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_scalb(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_sign(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sin(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sinCos(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_sinh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sinhCosh(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_sqrt(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_subtract(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_tan(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_tanh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_taylor(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_toDegrees(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_toRadians(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_ulp(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldDerivativeStructure_get__parameters_(t_FieldDerivativeStructure *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDerivativeStructure_get__allDerivatives(t_FieldDerivativeStructure *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllDerivatives());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldDerivativeStructure_get__exponent(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__factory(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory value((jobject) NULL);
          OBJ_CALL(value = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__field(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__freeParameters(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__order(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__pi(t_FieldDerivativeStructure *self, void *data)
        {
          FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__real(t_FieldDerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__value(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/PythonAbstractWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PythonAbstractWriter::class$ = NULL;
          jmethodID *PythonAbstractWriter::mids$ = NULL;
          bool PythonAbstractWriter::live$ = false;

          jclass PythonAbstractWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PythonAbstractWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_intArrayToString_ae74174caf679503] = env->getMethodID(cls, "intArrayToString", "([I)Ljava/lang/String;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractWriter::PythonAbstractWriter(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

          void PythonAbstractWriter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          ::java::lang::String PythonAbstractWriter::intArrayToString(const JArray< jint > & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_intArrayToString_ae74174caf679503], a0.this$));
          }

          jlong PythonAbstractWriter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractWriter::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        namespace section {
          static PyObject *t_PythonAbstractWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractWriter_init_(t_PythonAbstractWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractWriter_finalize(t_PythonAbstractWriter *self);
          static PyObject *t_PythonAbstractWriter_intArrayToString(t_PythonAbstractWriter *self, PyObject *arg);
          static PyObject *t_PythonAbstractWriter_pythonExtension(t_PythonAbstractWriter *self, PyObject *args);
          static void JNICALL t_PythonAbstractWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractWriter_writeContent1(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonAbstractWriter_get__self(t_PythonAbstractWriter *self, void *data);
          static PyGetSetDef t_PythonAbstractWriter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractWriter, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractWriter__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWriter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractWriter, intArrayToString, METH_O),
            DECLARE_METHOD(t_PythonAbstractWriter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractWriter)[] = {
            { Py_tp_methods, t_PythonAbstractWriter__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractWriter_init_ },
            { Py_tp_getset, t_PythonAbstractWriter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractWriter)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
            NULL
          };

          DEFINE_TYPE(PythonAbstractWriter, t_PythonAbstractWriter, PythonAbstractWriter);

          void t_PythonAbstractWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractWriter), &PY_TYPE_DEF(PythonAbstractWriter), module, "PythonAbstractWriter", 1);
          }

          void t_PythonAbstractWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "class_", make_descriptor(PythonAbstractWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "wrapfn_", make_descriptor(t_PythonAbstractWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractWriter::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonAbstractWriter_pythonDecRef0 },
              { "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V", (void *) t_PythonAbstractWriter_writeContent1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractWriter::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractWriter::wrap_Object(PythonAbstractWriter(((t_PythonAbstractWriter *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractWriter_init_(t_PythonAbstractWriter *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            PythonAbstractWriter object((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              INT_CALL(object = PythonAbstractWriter(a0, a1));
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

          static PyObject *t_PythonAbstractWriter_finalize(t_PythonAbstractWriter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractWriter_intArrayToString(t_PythonAbstractWriter *self, PyObject *arg)
          {
            JArray< jint > a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "[I", &a0))
            {
              OBJ_CALL(result = self->object.intArrayToString(a0));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intArrayToString", arg);
            return NULL;
          }

          static PyObject *t_PythonAbstractWriter_pythonExtension(t_PythonAbstractWriter *self, PyObject *args)
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

          static void JNICALL t_PythonAbstractWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonAbstractWriter_writeContent1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
            PyObject *result = PyObject_CallMethod(obj, "writeContent", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonAbstractWriter_get__self(t_PythonAbstractWriter *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory::class$ = NULL;
        jmethodID *SmoothStepFactory::mids$ = NULL;
        bool SmoothStepFactory::live$ = false;

        jclass SmoothStepFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_checkBetweenZeroAndOneIncluded_10f281d777284cea] = env->getStaticMethodID(cls, "checkBetweenZeroAndOneIncluded", "(D)V");
            mids$[mid_getClamp_eedc0df51e79adef] = env->getStaticMethodID(cls, "getClamp", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getClamp_0b6c279ce81f402f] = env->getStaticMethodID(cls, "getClamp", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getCubic_eedc0df51e79adef] = env->getStaticMethodID(cls, "getCubic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getCubic_0b6c279ce81f402f] = env->getStaticMethodID(cls, "getCubic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getFieldGeneralOrder_cb2318af5f79fd6a] = env->getStaticMethodID(cls, "getFieldGeneralOrder", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getGeneralOrder_f63e16b76ec0adac] = env->getStaticMethodID(cls, "getGeneralOrder", "(I)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuadratic_eedc0df51e79adef] = env->getStaticMethodID(cls, "getQuadratic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuadratic_0b6c279ce81f402f] = env->getStaticMethodID(cls, "getQuadratic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getQuintic_eedc0df51e79adef] = env->getStaticMethodID(cls, "getQuintic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuintic_0b6c279ce81f402f] = env->getStaticMethodID(cls, "getQuintic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SmoothStepFactory::checkBetweenZeroAndOneIncluded(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkBetweenZeroAndOneIncluded_10f281d777284cea], a0);
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getClamp()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getClamp_eedc0df51e79adef]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getClamp(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getClamp_0b6c279ce81f402f], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getCubic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getCubic_eedc0df51e79adef]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getCubic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getCubic_0b6c279ce81f402f], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getFieldGeneralOrder(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getFieldGeneralOrder_cb2318af5f79fd6a], a0.this$, a1));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getGeneralOrder(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getGeneralOrder_f63e16b76ec0adac], a0));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getQuadratic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuadratic_eedc0df51e79adef]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getQuadratic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuadratic_0b6c279ce81f402f], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getQuintic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuintic_eedc0df51e79adef]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getQuintic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuintic_0b6c279ce81f402f], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        static PyObject *t_SmoothStepFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_checkBetweenZeroAndOneIncluded(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_getClamp(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getCubic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getFieldGeneralOrder(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getGeneralOrder(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_getQuadratic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getQuintic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_get__clamp(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__cubic(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__quadratic(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__quintic(t_SmoothStepFactory *self, void *data);
        static PyGetSetDef t_SmoothStepFactory__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothStepFactory, clamp),
          DECLARE_GET_FIELD(t_SmoothStepFactory, cubic),
          DECLARE_GET_FIELD(t_SmoothStepFactory, quadratic),
          DECLARE_GET_FIELD(t_SmoothStepFactory, quintic),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothStepFactory__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, checkBetweenZeroAndOneIncluded, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getClamp, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getCubic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getFieldGeneralOrder, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getGeneralOrder, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getQuadratic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getQuintic, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory)[] = {
          { Py_tp_methods, t_SmoothStepFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothStepFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory, t_SmoothStepFactory, SmoothStepFactory);

        void t_SmoothStepFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory), &PY_TYPE_DEF(SmoothStepFactory), module, "SmoothStepFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "FieldSmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$FieldSmoothStepFunction)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "QuadraticSmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$QuadraticSmoothStepFunction)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "SmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$SmoothStepFunction)));
        }

        void t_SmoothStepFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "class_", make_descriptor(SmoothStepFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "wrapfn_", make_descriptor(t_SmoothStepFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory::wrap_Object(SmoothStepFactory(((t_SmoothStepFactory *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory_checkBetweenZeroAndOneIncluded(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(::org::hipparchus::analysis::polynomials::SmoothStepFactory::checkBetweenZeroAndOneIncluded(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkBetweenZeroAndOneIncluded", arg);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getClamp(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getClamp());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getClamp(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getClamp", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getCubic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getCubic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getCubic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getCubic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getFieldGeneralOrder(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getFieldGeneralOrder(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getFieldGeneralOrder", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getGeneralOrder(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getGeneralOrder(a0));
            return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getGeneralOrder", arg);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getQuadratic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuadratic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuadratic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getQuadratic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getQuintic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuintic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuintic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getQuintic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_get__clamp(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getClamp());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__cubic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getCubic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__quadratic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuadratic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__quintic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuintic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IonosphereFreeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IonosphereFreeCombination::class$ = NULL;
          jmethodID *IonosphereFreeCombination::mids$ = NULL;
          bool IonosphereFreeCombination::live$ = false;

          jclass IonosphereFreeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IonosphereFreeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_1aca6111050d8282] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_ec5e21d51ba3cb9a] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_IonosphereFreeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereFreeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_IonosphereFreeCombination__methods_[] = {
            DECLARE_METHOD(t_IonosphereFreeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereFreeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereFreeCombination)[] = {
            { Py_tp_methods, t_IonosphereFreeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereFreeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(IonosphereFreeCombination, t_IonosphereFreeCombination, IonosphereFreeCombination);

          void t_IonosphereFreeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereFreeCombination), &PY_TYPE_DEF(IonosphereFreeCombination), module, "IonosphereFreeCombination", 0);
          }

          void t_IonosphereFreeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "class_", make_descriptor(IonosphereFreeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "wrapfn_", make_descriptor(t_IonosphereFreeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereFreeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereFreeCombination::initializeClass, 1)))
              return NULL;
            return t_IonosphereFreeCombination::wrap_Object(IonosphereFreeCombination(((t_IonosphereFreeCombination *) arg)->object.this$));
          }
          static PyObject *t_IonosphereFreeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereFreeCombination::initializeClass, 0))
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
#include "org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractVariableStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractVariableStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractVariableStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractVariableStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractVariableStepFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_of_(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_buildIntegrator(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractVariableStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractVariableStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractVariableStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractVariableStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractVariableStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractVariableStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractVariableStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractVariableStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractVariableStepFieldIntegratorBuilder, t_AbstractVariableStepFieldIntegratorBuilder, AbstractVariableStepFieldIntegratorBuilder);
        PyObject *t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(const AbstractVariableStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractVariableStepFieldIntegratorBuilder *self = (t_AbstractVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractVariableStepFieldIntegratorBuilder *self = (t_AbstractVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractVariableStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractVariableStepFieldIntegratorBuilder), module, "AbstractVariableStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractVariableStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractVariableStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractVariableStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(AbstractVariableStepFieldIntegratorBuilder(((t_AbstractVariableStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractVariableStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_of_(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_buildIntegrator(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractVariableStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Boolean.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Boolean::class$ = NULL;
    jmethodID *Boolean::mids$ = NULL;
    bool Boolean::live$ = false;
    Boolean *Boolean::FALSE = NULL;
    Boolean *Boolean::TRUE = NULL;
    ::java::lang::Class *Boolean::TYPE = NULL;

    jclass Boolean::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Boolean");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");
        mids$[mid_booleanValue_89b302893bdbe1f1] = env->getMethodID(cls, "booleanValue", "()Z");
        mids$[mid_compare_86b4d1b120434836] = env->getStaticMethodID(cls, "compare", "(ZZ)I");
        mids$[mid_compareTo_a2f73afc350ef26c] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Boolean;)I");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getBoolean_fd2162b8a05a22fe] = env->getStaticMethodID(cls, "getBoolean", "(Ljava/lang/String;)Z");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_b5ea7a839307c5e6] = env->getStaticMethodID(cls, "hashCode", "(Z)I");
        mids$[mid_logicalAnd_fb66d73e77ebbfca] = env->getStaticMethodID(cls, "logicalAnd", "(ZZ)Z");
        mids$[mid_logicalOr_fb66d73e77ebbfca] = env->getStaticMethodID(cls, "logicalOr", "(ZZ)Z");
        mids$[mid_logicalXor_fb66d73e77ebbfca] = env->getStaticMethodID(cls, "logicalXor", "(ZZ)Z");
        mids$[mid_parseBoolean_fd2162b8a05a22fe] = env->getStaticMethodID(cls, "parseBoolean", "(Ljava/lang/String;)Z");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_2d14bb496c734036] = env->getStaticMethodID(cls, "toString", "(Z)Ljava/lang/String;");
        mids$[mid_valueOf_fc3c23f6d5dce142] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Boolean;");
        mids$[mid_valueOf_9a32b3c6112f9c52] = env->getStaticMethodID(cls, "valueOf", "(Z)Ljava/lang/Boolean;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FALSE = new Boolean(env->getStaticObjectField(cls, "FALSE", "Ljava/lang/Boolean;"));
        TRUE = new Boolean(env->getStaticObjectField(cls, "TRUE", "Ljava/lang/Boolean;"));
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Boolean::Boolean(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Boolean::Boolean(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}

    jboolean Boolean::booleanValue() const
    {
      return env->callBooleanMethod(this$, mids$[mid_booleanValue_89b302893bdbe1f1]);
    }

    jint Boolean::compare(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_86b4d1b120434836], a0, a1);
    }

    jint Boolean::compareTo(const Boolean & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_a2f73afc350ef26c], a0.this$);
    }

    jboolean Boolean::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jboolean Boolean::getBoolean(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_getBoolean_fd2162b8a05a22fe], a0.this$);
    }

    jint Boolean::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint Boolean::hashCode(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_b5ea7a839307c5e6], a0);
    }

    jboolean Boolean::logicalAnd(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalAnd_fb66d73e77ebbfca], a0, a1);
    }

    jboolean Boolean::logicalOr(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalOr_fb66d73e77ebbfca], a0, a1);
    }

    jboolean Boolean::logicalXor(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalXor_fb66d73e77ebbfca], a0, a1);
    }

    jboolean Boolean::parseBoolean(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_parseBoolean_fd2162b8a05a22fe], a0.this$);
    }

    ::java::lang::String Boolean::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::lang::String Boolean::toString(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_2d14bb496c734036], a0));
    }

    Boolean Boolean::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Boolean(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fc3c23f6d5dce142], a0.this$));
    }

    Boolean Boolean::valueOf(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Boolean(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9a32b3c6112f9c52], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Boolean_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Boolean_init_(t_Boolean *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Boolean_booleanValue(t_Boolean *self);
    static PyObject *t_Boolean_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_compareTo(t_Boolean *self, PyObject *arg);
    static PyObject *t_Boolean_equals(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_getBoolean(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_hashCode(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalAnd(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalOr(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalXor(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_parseBoolean(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_toString(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Boolean__methods_[] = {
      DECLARE_METHOD(t_Boolean, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, booleanValue, METH_NOARGS),
      DECLARE_METHOD(t_Boolean, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, compareTo, METH_O),
      DECLARE_METHOD(t_Boolean, equals, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, getBoolean, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalAnd, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalOr, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalXor, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, parseBoolean, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, toString, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Boolean)[] = {
      { Py_tp_methods, t_Boolean__methods_ },
      { Py_tp_init, (void *) t_Boolean_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Boolean)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Boolean, t_Boolean, Boolean);

    void t_Boolean::install(PyObject *module)
    {
      installType(&PY_TYPE(Boolean), &PY_TYPE_DEF(Boolean), module, "Boolean", 0);
    }

    void t_Boolean::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "class_", make_descriptor(Boolean::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "wrapfn_", make_descriptor(unboxBoolean));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "boxfn_", make_descriptor(boxBoolean));
      env->getClass(Boolean::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "FALSE", make_descriptor(t_Boolean::wrap_Object(*Boolean::FALSE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "TRUE", make_descriptor(t_Boolean::wrap_Object(*Boolean::TRUE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Boolean::TYPE)));
    }

    static PyObject *t_Boolean_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Boolean::initializeClass, 1)))
        return NULL;
      return t_Boolean::wrap_Object(Boolean(((t_Boolean *) arg)->object.this$));
    }
    static PyObject *t_Boolean_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Boolean::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Boolean_init_(t_Boolean *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Boolean object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Boolean(a0));
            self->object = object;
            break;
          }
        }
        {
          jboolean a0;
          Boolean object((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            INT_CALL(object = Boolean(a0));
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

    static PyObject *t_Boolean_booleanValue(t_Boolean *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.booleanValue());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Boolean_compare(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jint result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Boolean_compareTo(t_Boolean *self, PyObject *arg)
    {
      Boolean a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Boolean), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Boolean_equals(t_Boolean *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Boolean_getBoolean(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::getBoolean(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "getBoolean", arg);
      return NULL;
    }

    static PyObject *t_Boolean_hashCode(t_Boolean *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Boolean_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jint result;

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalAnd(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalAnd(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalAnd", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalOr(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalOr(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalOr", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalXor(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalXor(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalXor", args);
      return NULL;
    }

    static PyObject *t_Boolean_parseBoolean(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::parseBoolean(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "parseBoolean", arg);
      return NULL;
    }

    static PyObject *t_Boolean_toString(t_Boolean *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Boolean_toString_(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Boolean_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Boolean result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Boolean::valueOf(a0));
            return t_Boolean::wrap_Object(result);
          }
        }
        {
          jboolean a0;
          Boolean result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = ::java::lang::Boolean::valueOf(a0));
            return t_Boolean::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/CauchyDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *CauchyDistribution::class$ = NULL;
        jmethodID *CauchyDistribution::mids$ = NULL;
        bool CauchyDistribution::live$ = false;

        jclass CauchyDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/CauchyDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMedian_557b8123390d8d0c] = env->getMethodID(cls, "getMedian", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CauchyDistribution::CauchyDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        CauchyDistribution::CauchyDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble CauchyDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble CauchyDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble CauchyDistribution::getMedian() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMedian_557b8123390d8d0c]);
        }

        jdouble CauchyDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble CauchyDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble CauchyDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
        }

        jdouble CauchyDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble CauchyDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble CauchyDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean CauchyDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
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
        static PyObject *t_CauchyDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CauchyDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CauchyDistribution_init_(t_CauchyDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CauchyDistribution_cumulativeProbability(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_density(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getMedian(t_CauchyDistribution *self);
        static PyObject *t_CauchyDistribution_getNumericalMean(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getNumericalVariance(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getScale(t_CauchyDistribution *self);
        static PyObject *t_CauchyDistribution_getSupportLowerBound(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getSupportUpperBound(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_inverseCumulativeProbability(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_isSupportConnected(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_get__median(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__numericalMean(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__numericalVariance(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__scale(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportConnected(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportLowerBound(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportUpperBound(t_CauchyDistribution *self, void *data);
        static PyGetSetDef t_CauchyDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_CauchyDistribution, median),
          DECLARE_GET_FIELD(t_CauchyDistribution, numericalMean),
          DECLARE_GET_FIELD(t_CauchyDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_CauchyDistribution, scale),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportConnected),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CauchyDistribution__methods_[] = {
          DECLARE_METHOD(t_CauchyDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CauchyDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CauchyDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getMedian, METH_NOARGS),
          DECLARE_METHOD(t_CauchyDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_CauchyDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CauchyDistribution)[] = {
          { Py_tp_methods, t_CauchyDistribution__methods_ },
          { Py_tp_init, (void *) t_CauchyDistribution_init_ },
          { Py_tp_getset, t_CauchyDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CauchyDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(CauchyDistribution, t_CauchyDistribution, CauchyDistribution);

        void t_CauchyDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(CauchyDistribution), &PY_TYPE_DEF(CauchyDistribution), module, "CauchyDistribution", 0);
        }

        void t_CauchyDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "class_", make_descriptor(CauchyDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "wrapfn_", make_descriptor(t_CauchyDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CauchyDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CauchyDistribution::initializeClass, 1)))
            return NULL;
          return t_CauchyDistribution::wrap_Object(CauchyDistribution(((t_CauchyDistribution *) arg)->object.this$));
        }
        static PyObject *t_CauchyDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CauchyDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CauchyDistribution_init_(t_CauchyDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CauchyDistribution object((jobject) NULL);

              INT_CALL(object = CauchyDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              CauchyDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = CauchyDistribution(a0, a1));
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

        static PyObject *t_CauchyDistribution_cumulativeProbability(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_CauchyDistribution_density(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_CauchyDistribution_getMedian(t_CauchyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMedian());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CauchyDistribution_getNumericalMean(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_CauchyDistribution_getNumericalVariance(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_CauchyDistribution_getScale(t_CauchyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CauchyDistribution_getSupportLowerBound(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_CauchyDistribution_getSupportUpperBound(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_CauchyDistribution_inverseCumulativeProbability(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_CauchyDistribution_isSupportConnected(t_CauchyDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_CauchyDistribution_get__median(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMedian());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__numericalMean(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__numericalVariance(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__scale(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__supportConnected(t_CauchyDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CauchyDistribution_get__supportLowerBound(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__supportUpperBound(t_CauchyDistribution *self, void *data)
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
#include "org/hipparchus/ode/sampling/AbstractODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/AbstractODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *AbstractODEStateInterpolator::class$ = NULL;
        jmethodID *AbstractODEStateInterpolator::mids$ = NULL;
        bool AbstractODEStateInterpolator::live$ = false;

        jclass AbstractODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/AbstractODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_0a798a152cb54887] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getGlobalCurrentState_0a798a152cb54887] = env->getMethodID(cls, "getGlobalCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getGlobalPreviousState_0a798a152cb54887] = env->getMethodID(cls, "getGlobalPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_0a47e68426cfc9cf] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getPreviousState_0a798a152cb54887] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_062f93260d31faa2] = env->getMethodID(cls, "restrictStep", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;");
            mids$[mid_getMapper_ac224193cab69474] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/EquationsMapper;");
            mids$[mid_computeInterpolatedStateAndDerivatives_0611821f422badbb] = env->getMethodID(cls, "computeInterpolatedStateAndDerivatives", "(Lorg/hipparchus/ode/EquationsMapper;DDDD)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_create_d36a5031f0749114] = env->getMethodID(cls, "create", "(ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_0a798a152cb54887]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getGlobalCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalCurrentState_0a798a152cb54887]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getGlobalPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalPreviousState_0a798a152cb54887]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getInterpolatedState(jdouble a0) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_0a47e68426cfc9cf], a0));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_0a798a152cb54887]));
        }

        jboolean AbstractODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_89b302893bdbe1f1]);
        }

        jboolean AbstractODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_89b302893bdbe1f1]);
        }

        jboolean AbstractODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_89b302893bdbe1f1]);
        }

        AbstractODEStateInterpolator AbstractODEStateInterpolator::restrictStep(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::ODEStateAndDerivative & a1) const
        {
          return AbstractODEStateInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_062f93260d31faa2], a0.this$, a1.this$));
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
      namespace sampling {
        static PyObject *t_AbstractODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_getCurrentState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getGlobalCurrentState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getGlobalPreviousState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getInterpolatedState(t_AbstractODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_getPreviousState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isCurrentStateInterpolated(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isForward(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isPreviousStateInterpolated(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_restrictStep(t_AbstractODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractODEStateInterpolator_get__currentState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__currentStateInterpolated(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__forward(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__globalCurrentState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__globalPreviousState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__previousState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__previousStateInterpolated(t_AbstractODEStateInterpolator *self, void *data);
        static PyGetSetDef t_AbstractODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, globalCurrentState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, globalPreviousState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_AbstractODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getGlobalCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getGlobalPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractODEStateInterpolator)[] = {
          { Py_tp_methods, t_AbstractODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractODEStateInterpolator, t_AbstractODEStateInterpolator, AbstractODEStateInterpolator);

        void t_AbstractODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractODEStateInterpolator), &PY_TYPE_DEF(AbstractODEStateInterpolator), module, "AbstractODEStateInterpolator", 0);
        }

        void t_AbstractODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "class_", make_descriptor(AbstractODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "wrapfn_", make_descriptor(t_AbstractODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_AbstractODEStateInterpolator::wrap_Object(AbstractODEStateInterpolator(((t_AbstractODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AbstractODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractODEStateInterpolator_getCurrentState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getGlobalCurrentState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getGlobalPreviousState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getInterpolatedState(t_AbstractODEStateInterpolator *self, PyObject *arg)
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

        static PyObject *t_AbstractODEStateInterpolator_getPreviousState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isCurrentStateInterpolated(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isForward(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isPreviousStateInterpolated(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_restrictStep(t_AbstractODEStateInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a1((jobject) NULL);
          AbstractODEStateInterpolator result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_AbstractODEStateInterpolator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }

        static PyObject *t_AbstractODEStateInterpolator_get__currentState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__currentStateInterpolated(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__forward(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__globalCurrentState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__globalPreviousState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__previousState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__previousStateInterpolated(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/ThirdBodyAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *ThirdBodyAttraction::class$ = NULL;
        jmethodID *ThirdBodyAttraction::mids$ = NULL;
        bool ThirdBodyAttraction::live$ = false;
        ::java::lang::String *ThirdBodyAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass ThirdBodyAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/ThirdBodyAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_971db345b01a6cfa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThirdBodyAttraction::ThirdBodyAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_971db345b01a6cfa, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThirdBodyAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ThirdBodyAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        jboolean ThirdBodyAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::java::util::List ThirdBodyAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
        static PyObject *t_ThirdBodyAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThirdBodyAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThirdBodyAttraction_init_(t_ThirdBodyAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThirdBodyAttraction_acceleration(t_ThirdBodyAttraction *self, PyObject *args);
        static PyObject *t_ThirdBodyAttraction_dependsOnPositionOnly(t_ThirdBodyAttraction *self);
        static PyObject *t_ThirdBodyAttraction_getParametersDrivers(t_ThirdBodyAttraction *self);
        static PyObject *t_ThirdBodyAttraction_get__parametersDrivers(t_ThirdBodyAttraction *self, void *data);
        static PyGetSetDef t_ThirdBodyAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_ThirdBodyAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThirdBodyAttraction__methods_[] = {
          DECLARE_METHOD(t_ThirdBodyAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ThirdBodyAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_ThirdBodyAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThirdBodyAttraction)[] = {
          { Py_tp_methods, t_ThirdBodyAttraction__methods_ },
          { Py_tp_init, (void *) t_ThirdBodyAttraction_init_ },
          { Py_tp_getset, t_ThirdBodyAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThirdBodyAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ThirdBodyAttraction, t_ThirdBodyAttraction, ThirdBodyAttraction);

        void t_ThirdBodyAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(ThirdBodyAttraction), &PY_TYPE_DEF(ThirdBodyAttraction), module, "ThirdBodyAttraction", 0);
        }

        void t_ThirdBodyAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "class_", make_descriptor(ThirdBodyAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "wrapfn_", make_descriptor(t_ThirdBodyAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(ThirdBodyAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*ThirdBodyAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_ThirdBodyAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThirdBodyAttraction::initializeClass, 1)))
            return NULL;
          return t_ThirdBodyAttraction::wrap_Object(ThirdBodyAttraction(((t_ThirdBodyAttraction *) arg)->object.this$));
        }
        static PyObject *t_ThirdBodyAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThirdBodyAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThirdBodyAttraction_init_(t_ThirdBodyAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          ThirdBodyAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = ThirdBodyAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThirdBodyAttraction_acceleration(t_ThirdBodyAttraction *self, PyObject *args)
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

        static PyObject *t_ThirdBodyAttraction_dependsOnPositionOnly(t_ThirdBodyAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ThirdBodyAttraction_getParametersDrivers(t_ThirdBodyAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_ThirdBodyAttraction_get__parametersDrivers(t_ThirdBodyAttraction *self, void *data)
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
#include "org/orekit/forces/Panel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *Panel::class$ = NULL;
      jmethodID *Panel::mids$ = NULL;
      bool Panel::live$ = false;

      jclass Panel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/Panel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAbsorption_557b8123390d8d0c] = env->getMethodID(cls, "getAbsorption", "()D");
          mids$[mid_getArea_557b8123390d8d0c] = env->getMethodID(cls, "getArea", "()D");
          mids$[mid_getDrag_557b8123390d8d0c] = env->getMethodID(cls, "getDrag", "()D");
          mids$[mid_getLiftRatio_557b8123390d8d0c] = env->getMethodID(cls, "getLiftRatio", "()D");
          mids$[mid_getNormal_503a254311e5da95] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_3fff8c49d4e2dc6b] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getReflection_557b8123390d8d0c] = env->getMethodID(cls, "getReflection", "()D");
          mids$[mid_isDoubleSided_89b302893bdbe1f1] = env->getMethodID(cls, "isDoubleSided", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Panel::getAbsorption() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAbsorption_557b8123390d8d0c]);
      }

      jdouble Panel::getArea() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getArea_557b8123390d8d0c]);
      }

      jdouble Panel::getDrag() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDrag_557b8123390d8d0c]);
      }

      jdouble Panel::getLiftRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLiftRatio_557b8123390d8d0c]);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Panel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_503a254311e5da95], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Panel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_3fff8c49d4e2dc6b], a0.this$));
      }

      jdouble Panel::getReflection() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReflection_557b8123390d8d0c]);
      }

      jboolean Panel::isDoubleSided() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isDoubleSided_89b302893bdbe1f1]);
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
      static PyObject *t_Panel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Panel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Panel_getAbsorption(t_Panel *self);
      static PyObject *t_Panel_getArea(t_Panel *self);
      static PyObject *t_Panel_getDrag(t_Panel *self);
      static PyObject *t_Panel_getLiftRatio(t_Panel *self);
      static PyObject *t_Panel_getNormal(t_Panel *self, PyObject *args);
      static PyObject *t_Panel_getReflection(t_Panel *self);
      static PyObject *t_Panel_isDoubleSided(t_Panel *self);
      static PyObject *t_Panel_get__absorption(t_Panel *self, void *data);
      static PyObject *t_Panel_get__area(t_Panel *self, void *data);
      static PyObject *t_Panel_get__doubleSided(t_Panel *self, void *data);
      static PyObject *t_Panel_get__drag(t_Panel *self, void *data);
      static PyObject *t_Panel_get__liftRatio(t_Panel *self, void *data);
      static PyObject *t_Panel_get__reflection(t_Panel *self, void *data);
      static PyGetSetDef t_Panel__fields_[] = {
        DECLARE_GET_FIELD(t_Panel, absorption),
        DECLARE_GET_FIELD(t_Panel, area),
        DECLARE_GET_FIELD(t_Panel, doubleSided),
        DECLARE_GET_FIELD(t_Panel, drag),
        DECLARE_GET_FIELD(t_Panel, liftRatio),
        DECLARE_GET_FIELD(t_Panel, reflection),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Panel__methods_[] = {
        DECLARE_METHOD(t_Panel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Panel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Panel, getAbsorption, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getArea, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getDrag, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getLiftRatio, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getNormal, METH_VARARGS),
        DECLARE_METHOD(t_Panel, getReflection, METH_NOARGS),
        DECLARE_METHOD(t_Panel, isDoubleSided, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Panel)[] = {
        { Py_tp_methods, t_Panel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Panel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Panel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Panel, t_Panel, Panel);

      void t_Panel::install(PyObject *module)
      {
        installType(&PY_TYPE(Panel), &PY_TYPE_DEF(Panel), module, "Panel", 0);
      }

      void t_Panel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "class_", make_descriptor(Panel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "wrapfn_", make_descriptor(t_Panel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Panel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Panel::initializeClass, 1)))
          return NULL;
        return t_Panel::wrap_Object(Panel(((t_Panel *) arg)->object.this$));
      }
      static PyObject *t_Panel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Panel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Panel_getAbsorption(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAbsorption());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getArea(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getArea());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getDrag(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDrag());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getLiftRatio(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLiftRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getNormal(t_Panel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNormal", args);
        return NULL;
      }

      static PyObject *t_Panel_getReflection(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReflection());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_isDoubleSided(t_Panel *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isDoubleSided());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Panel_get__absorption(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAbsorption());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__area(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getArea());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__doubleSided(t_Panel *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isDoubleSided());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Panel_get__drag(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDrag());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__liftRatio(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLiftRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__reflection(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReflection());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/ReceiverAntenna.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *ReceiverAntenna::class$ = NULL;
        jmethodID *ReceiverAntenna::mids$ = NULL;
        bool ReceiverAntenna::live$ = false;

        jclass ReceiverAntenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/ReceiverAntenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c359e1fbddf80f23] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V");
            mids$[mid_getSerialNumber_3cffd47377eca18a] = env->getMethodID(cls, "getSerialNumber", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ReceiverAntenna::ReceiverAntenna(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::util::Map & a2, const ::java::lang::String & a3) : ::org::orekit::gnss::antenna::Antenna(env->newObject(initializeClass, &mids$, mid_init$_c359e1fbddf80f23, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::lang::String ReceiverAntenna::getSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSerialNumber_3cffd47377eca18a]));
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
      namespace antenna {
        static PyObject *t_ReceiverAntenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReceiverAntenna_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ReceiverAntenna_init_(t_ReceiverAntenna *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ReceiverAntenna_getSerialNumber(t_ReceiverAntenna *self);
        static PyObject *t_ReceiverAntenna_get__serialNumber(t_ReceiverAntenna *self, void *data);
        static PyGetSetDef t_ReceiverAntenna__fields_[] = {
          DECLARE_GET_FIELD(t_ReceiverAntenna, serialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ReceiverAntenna__methods_[] = {
          DECLARE_METHOD(t_ReceiverAntenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReceiverAntenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReceiverAntenna, getSerialNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ReceiverAntenna)[] = {
          { Py_tp_methods, t_ReceiverAntenna__methods_ },
          { Py_tp_init, (void *) t_ReceiverAntenna_init_ },
          { Py_tp_getset, t_ReceiverAntenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ReceiverAntenna)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::antenna::Antenna),
          NULL
        };

        DEFINE_TYPE(ReceiverAntenna, t_ReceiverAntenna, ReceiverAntenna);

        void t_ReceiverAntenna::install(PyObject *module)
        {
          installType(&PY_TYPE(ReceiverAntenna), &PY_TYPE_DEF(ReceiverAntenna), module, "ReceiverAntenna", 0);
        }

        void t_ReceiverAntenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "class_", make_descriptor(ReceiverAntenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "wrapfn_", make_descriptor(t_ReceiverAntenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ReceiverAntenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ReceiverAntenna::initializeClass, 1)))
            return NULL;
          return t_ReceiverAntenna::wrap_Object(ReceiverAntenna(((t_ReceiverAntenna *) arg)->object.this$));
        }
        static PyObject *t_ReceiverAntenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ReceiverAntenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ReceiverAntenna_init_(t_ReceiverAntenna *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::util::Map a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::lang::String a3((jobject) NULL);
          ReceiverAntenna object((jobject) NULL);

          if (!parseArgs(args, "ssKs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Map::parameters_, &a3))
          {
            INT_CALL(object = ReceiverAntenna(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ReceiverAntenna_getSerialNumber(t_ReceiverAntenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSerialNumber());
          return j2p(result);
        }

        static PyObject *t_ReceiverAntenna_get__serialNumber(t_ReceiverAntenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSerialNumber());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *CovarianceMatrixProvider::class$ = NULL;
        jmethodID *CovarianceMatrixProvider::mids$ = NULL;
        bool CovarianceMatrixProvider::live$ = false;

        jclass CovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/CovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInitialCovarianceMatrix_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getProcessNoiseMatrix_158686209bf6089c] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix CovarianceMatrixProvider::getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialCovarianceMatrix_fc9cdfa83c55d6b2], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix CovarianceMatrixProvider::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_158686209bf6089c], a0.this$, a1.this$));
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
        static PyObject *t_CovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_getInitialCovarianceMatrix(t_CovarianceMatrixProvider *self, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_getProcessNoiseMatrix(t_CovarianceMatrixProvider *self, PyObject *args);

        static PyMethodDef t_CovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_CovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CovarianceMatrixProvider, getInitialCovarianceMatrix, METH_O),
          DECLARE_METHOD(t_CovarianceMatrixProvider, getProcessNoiseMatrix, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_CovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CovarianceMatrixProvider, t_CovarianceMatrixProvider, CovarianceMatrixProvider);

        void t_CovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(CovarianceMatrixProvider), &PY_TYPE_DEF(CovarianceMatrixProvider), module, "CovarianceMatrixProvider", 0);
        }

        void t_CovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "class_", make_descriptor(CovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "wrapfn_", make_descriptor(t_CovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_CovarianceMatrixProvider::wrap_Object(CovarianceMatrixProvider(((t_CovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_CovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CovarianceMatrixProvider_getInitialCovarianceMatrix(t_CovarianceMatrixProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInitialCovarianceMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInitialCovarianceMatrix", arg);
          return NULL;
        }

        static PyObject *t_CovarianceMatrixProvider_getProcessNoiseMatrix(t_CovarianceMatrixProvider *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getProcessNoiseMatrix", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldEphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldEphemerisGenerator::class$ = NULL;
      jmethodID *PythonFieldEphemerisGenerator::mids$ = NULL;
      bool PythonFieldEphemerisGenerator::live$ = false;

      jclass PythonFieldEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getGeneratedEphemeris_5671a4f762a73711] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldEphemerisGenerator::PythonFieldEphemerisGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldEphemerisGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldEphemerisGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldEphemerisGenerator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonFieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldEphemerisGenerator_of_(t_PythonFieldEphemerisGenerator *self, PyObject *args);
      static int t_PythonFieldEphemerisGenerator_init_(t_PythonFieldEphemerisGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldEphemerisGenerator_finalize(t_PythonFieldEphemerisGenerator *self);
      static PyObject *t_PythonFieldEphemerisGenerator_pythonExtension(t_PythonFieldEphemerisGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldEphemerisGenerator_get__self(t_PythonFieldEphemerisGenerator *self, void *data);
      static PyObject *t_PythonFieldEphemerisGenerator_get__parameters_(t_PythonFieldEphemerisGenerator *self, void *data);
      static PyGetSetDef t_PythonFieldEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldEphemerisGenerator, self),
        DECLARE_GET_FIELD(t_PythonFieldEphemerisGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldEphemerisGenerator)[] = {
        { Py_tp_methods, t_PythonFieldEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldEphemerisGenerator_init_ },
        { Py_tp_getset, t_PythonFieldEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldEphemerisGenerator, t_PythonFieldEphemerisGenerator, PythonFieldEphemerisGenerator);
      PyObject *t_PythonFieldEphemerisGenerator::wrap_Object(const PythonFieldEphemerisGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldEphemerisGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldEphemerisGenerator *self = (t_PythonFieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldEphemerisGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldEphemerisGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldEphemerisGenerator *self = (t_PythonFieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldEphemerisGenerator), &PY_TYPE_DEF(PythonFieldEphemerisGenerator), module, "PythonFieldEphemerisGenerator", 1);
      }

      void t_PythonFieldEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "class_", make_descriptor(PythonFieldEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "wrapfn_", make_descriptor(t_PythonFieldEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldEphemerisGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;", (void *) t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldEphemerisGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldEphemerisGenerator::wrap_Object(PythonFieldEphemerisGenerator(((t_PythonFieldEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_of_(t_PythonFieldEphemerisGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldEphemerisGenerator_init_(t_PythonFieldEphemerisGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldEphemerisGenerator object((jobject) NULL);

        INT_CALL(object = PythonFieldEphemerisGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_finalize(t_PythonFieldEphemerisGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_pythonExtension(t_PythonFieldEphemerisGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldBoundedPropagator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeneratedEphemeris", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldBoundedPropagator::initializeClass, &value))
        {
          throwTypeError("getGeneratedEphemeris", result);
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

      static void JNICALL t_PythonFieldEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldEphemerisGenerator_get__self(t_PythonFieldEphemerisGenerator *self, void *data)
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
      static PyObject *t_PythonFieldEphemerisGenerator_get__parameters_(t_PythonFieldEphemerisGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonOrekitFixedStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitFixedStepHandler::class$ = NULL;
        jmethodID *PythonOrekitFixedStepHandler::mids$ = NULL;
        bool PythonOrekitFixedStepHandler::live$ = false;

        jclass PythonOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_8655761ebf04b503] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_8655761ebf04b503] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_init_a423d7aa7c2fe850] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitFixedStepHandler::PythonOrekitFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonOrekitFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonOrekitFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonOrekitFixedStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitFixedStepHandler_init_(t_PythonOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitFixedStepHandler_finalize(t_PythonOrekitFixedStepHandler *self);
        static PyObject *t_PythonOrekitFixedStepHandler_pythonExtension(t_PythonOrekitFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonOrekitFixedStepHandler_get__self(t_PythonOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitFixedStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitFixedStepHandler, t_PythonOrekitFixedStepHandler, PythonOrekitFixedStepHandler);

        void t_PythonOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitFixedStepHandler), &PY_TYPE_DEF(PythonOrekitFixedStepHandler), module, "PythonOrekitFixedStepHandler", 1);
        }

        void t_PythonOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "class_", make_descriptor(PythonOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_PythonOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitFixedStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitFixedStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V", (void *) t_PythonOrekitFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitFixedStepHandler::wrap_Object(PythonOrekitFixedStepHandler(((t_PythonOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitFixedStepHandler_init_(t_PythonOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonOrekitFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitFixedStepHandler_finalize(t_PythonOrekitFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitFixedStepHandler_pythonExtension(t_PythonOrekitFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonOrekitFixedStepHandler_get__self(t_PythonOrekitFixedStepHandler *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *J2SquaredModel::class$ = NULL;
            jmethodID *J2SquaredModel::mids$ = NULL;
            bool J2SquaredModel::live$ = false;

            jclass J2SquaredModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_3cadce1f0ff01a88] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_b35994dcdbf40b4e] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > J2SquaredModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_3cadce1f0ff01a88], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > J2SquaredModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_b35994dcdbf40b4e], a0.this$));
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
          namespace forces {
            static PyObject *t_J2SquaredModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_J2SquaredModel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_J2SquaredModel_computeMeanEquinoctialSecondOrderTerms(t_J2SquaredModel *self, PyObject *args);

            static PyMethodDef t_J2SquaredModel__methods_[] = {
              DECLARE_METHOD(t_J2SquaredModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_J2SquaredModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_J2SquaredModel, computeMeanEquinoctialSecondOrderTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(J2SquaredModel)[] = {
              { Py_tp_methods, t_J2SquaredModel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(J2SquaredModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(J2SquaredModel, t_J2SquaredModel, J2SquaredModel);

            void t_J2SquaredModel::install(PyObject *module)
            {
              installType(&PY_TYPE(J2SquaredModel), &PY_TYPE_DEF(J2SquaredModel), module, "J2SquaredModel", 0);
            }

            void t_J2SquaredModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "class_", make_descriptor(J2SquaredModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "wrapfn_", make_descriptor(t_J2SquaredModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_J2SquaredModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, J2SquaredModel::initializeClass, 1)))
                return NULL;
              return t_J2SquaredModel::wrap_Object(J2SquaredModel(((t_J2SquaredModel *) arg)->object.this$));
            }
            static PyObject *t_J2SquaredModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, J2SquaredModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_J2SquaredModel_computeMeanEquinoctialSecondOrderTerms(t_J2SquaredModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeMeanEquinoctialSecondOrderTerms", args);
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
#include "org/orekit/bodies/Loxodrome.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Loxodrome::class$ = NULL;
      jmethodID *Loxodrome::mids$ = NULL;
      bool Loxodrome::live$ = false;

      jclass Loxodrome::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Loxodrome");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a9ff5df2027c94d3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_c225dd5200da8e62] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;DLorg/orekit/bodies/OneAxisEllipsoid;D)V");
          mids$[mid_getAltitude_557b8123390d8d0c] = env->getMethodID(cls, "getAltitude", "()D");
          mids$[mid_getAzimuth_557b8123390d8d0c] = env->getMethodID(cls, "getAzimuth", "()D");
          mids$[mid_getBody_0c55bd1adf955c4c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
          mids$[mid_getPoint_8672b163b0e4a5a3] = env->getMethodID(cls, "getPoint", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_pointAtDistance_fdfcc3c813d87498] = env->getMethodID(cls, "pointAtDistance", "(D)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Loxodrome::Loxodrome(const ::org::orekit::bodies::GeodeticPoint & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a9ff5df2027c94d3, a0.this$, a1, a2.this$)) {}

      Loxodrome::Loxodrome(const ::org::orekit::bodies::GeodeticPoint & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c225dd5200da8e62, a0.this$, a1, a2.this$, a3)) {}

      jdouble Loxodrome::getAltitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAltitude_557b8123390d8d0c]);
      }

      jdouble Loxodrome::getAzimuth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_557b8123390d8d0c]);
      }

      ::org::orekit::bodies::OneAxisEllipsoid Loxodrome::getBody() const
      {
        return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_0c55bd1adf955c4c]));
      }

      ::org::orekit::bodies::GeodeticPoint Loxodrome::getPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_8672b163b0e4a5a3]));
      }

      ::org::orekit::bodies::GeodeticPoint Loxodrome::pointAtDistance(jdouble a0) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointAtDistance_fdfcc3c813d87498], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_Loxodrome_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Loxodrome_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Loxodrome_init_(t_Loxodrome *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Loxodrome_getAltitude(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getAzimuth(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getBody(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getPoint(t_Loxodrome *self);
      static PyObject *t_Loxodrome_pointAtDistance(t_Loxodrome *self, PyObject *arg);
      static PyObject *t_Loxodrome_get__altitude(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__azimuth(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__body(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__point(t_Loxodrome *self, void *data);
      static PyGetSetDef t_Loxodrome__fields_[] = {
        DECLARE_GET_FIELD(t_Loxodrome, altitude),
        DECLARE_GET_FIELD(t_Loxodrome, azimuth),
        DECLARE_GET_FIELD(t_Loxodrome, body),
        DECLARE_GET_FIELD(t_Loxodrome, point),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Loxodrome__methods_[] = {
        DECLARE_METHOD(t_Loxodrome, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Loxodrome, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Loxodrome, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getBody, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, pointAtDistance, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Loxodrome)[] = {
        { Py_tp_methods, t_Loxodrome__methods_ },
        { Py_tp_init, (void *) t_Loxodrome_init_ },
        { Py_tp_getset, t_Loxodrome__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Loxodrome)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Loxodrome, t_Loxodrome, Loxodrome);

      void t_Loxodrome::install(PyObject *module)
      {
        installType(&PY_TYPE(Loxodrome), &PY_TYPE_DEF(Loxodrome), module, "Loxodrome", 0);
      }

      void t_Loxodrome::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "class_", make_descriptor(Loxodrome::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "wrapfn_", make_descriptor(t_Loxodrome::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Loxodrome_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Loxodrome::initializeClass, 1)))
          return NULL;
        return t_Loxodrome::wrap_Object(Loxodrome(((t_Loxodrome *) arg)->object.this$));
      }
      static PyObject *t_Loxodrome_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Loxodrome::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Loxodrome_init_(t_Loxodrome *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            Loxodrome object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Loxodrome(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            jdouble a3;
            Loxodrome object((jobject) NULL);

            if (!parseArgs(args, "kDkD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Loxodrome(a0, a1, a2, a3));
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

      static PyObject *t_Loxodrome_getAltitude(t_Loxodrome *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAltitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Loxodrome_getAzimuth(t_Loxodrome *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAzimuth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Loxodrome_getBody(t_Loxodrome *self)
      {
        ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
        OBJ_CALL(result = self->object.getBody());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
      }

      static PyObject *t_Loxodrome_getPoint(t_Loxodrome *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_Loxodrome_pointAtDistance(t_Loxodrome *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.pointAtDistance(a0));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAtDistance", arg);
        return NULL;
      }

      static PyObject *t_Loxodrome_get__altitude(t_Loxodrome *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAltitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Loxodrome_get__azimuth(t_Loxodrome *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAzimuth());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Loxodrome_get__body(t_Loxodrome *self, void *data)
      {
        ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
        OBJ_CALL(value = self->object.getBody());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
      }

      static PyObject *t_Loxodrome_get__point(t_Loxodrome *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmWriter::class$ = NULL;
              jmethodID *OmmWriter::mids$ = NULL;
              bool OmmWriter::live$ = false;
              jdouble OmmWriter::CCSDS_OMM_VERS = (jdouble) 0;
              jint OmmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OmmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_170ee021ab23bf06] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_e9836ce27ccfe3b9] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OMM_VERS = env->getStaticDoubleField(cls, "CCSDS_OMM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmWriter::OmmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_170ee021ab23bf06, a0.this$, a1.this$, a2.this$)) {}
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
            namespace omm {
              static PyObject *t_OmmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmWriter_of_(t_OmmWriter *self, PyObject *args);
              static int t_OmmWriter_init_(t_OmmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmWriter_get__parameters_(t_OmmWriter *self, void *data);
              static PyGetSetDef t_OmmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OmmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmWriter__methods_[] = {
                DECLARE_METHOD(t_OmmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmWriter)[] = {
                { Py_tp_methods, t_OmmWriter__methods_ },
                { Py_tp_init, (void *) t_OmmWriter_init_ },
                { Py_tp_getset, t_OmmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OmmWriter, t_OmmWriter, OmmWriter);
              PyObject *t_OmmWriter::wrap_Object(const OmmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OmmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmWriter *self = (t_OmmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OmmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OmmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmWriter *self = (t_OmmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OmmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmWriter), &PY_TYPE_DEF(OmmWriter), module, "OmmWriter", 0);
              }

              void t_OmmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "class_", make_descriptor(OmmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "wrapfn_", make_descriptor(t_OmmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "CCSDS_OMM_VERS", make_descriptor(OmmWriter::CCSDS_OMM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "KVN_PADDING_WIDTH", make_descriptor(OmmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OmmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmWriter::initializeClass, 1)))
                  return NULL;
                return t_OmmWriter::wrap_Object(OmmWriter(((t_OmmWriter *) arg)->object.this$));
              }
              static PyObject *t_OmmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmWriter_of_(t_OmmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OmmWriter_init_(t_OmmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OmmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OmmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::omm::PY_TYPE(Omm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OmmWriter_get__parameters_(t_OmmWriter *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/CommonGnssData.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *CommonGnssData::class$ = NULL;
            jmethodID *CommonGnssData::mids$ = NULL;
            bool CommonGnssData::live$ = false;

            jclass CommonGnssData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/CommonGnssData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf0_557b8123390d8d0c] = env->getMethodID(cls, "getAf0", "()D");
                mids$[mid_getAf1_557b8123390d8d0c] = env->getMethodID(cls, "getAf1", "()D");
                mids$[mid_getAngularVelocity_557b8123390d8d0c] = env->getMethodID(cls, "getAngularVelocity", "()D");
                mids$[mid_getCycleDuration_557b8123390d8d0c] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getI0_557b8123390d8d0c] = env->getMethodID(cls, "getI0", "()D");
                mids$[mid_getM0_557b8123390d8d0c] = env->getMethodID(cls, "getM0", "()D");
                mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOmega0_557b8123390d8d0c] = env->getMethodID(cls, "getOmega0", "()D");
                mids$[mid_getOmegaDot_557b8123390d8d0c] = env->getMethodID(cls, "getOmegaDot", "()D");
                mids$[mid_getPRN_412668abc8d889e9] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getPa_557b8123390d8d0c] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getSma_557b8123390d8d0c] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getWeek_412668abc8d889e9] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_setAf0_10f281d777284cea] = env->getMethodID(cls, "setAf0", "(D)V");
                mids$[mid_setAf1_10f281d777284cea] = env->getMethodID(cls, "setAf1", "(D)V");
                mids$[mid_setDate_20affcbd28542333] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setE_10f281d777284cea] = env->getMethodID(cls, "setE", "(D)V");
                mids$[mid_setI0_10f281d777284cea] = env->getMethodID(cls, "setI0", "(D)V");
                mids$[mid_setM0_10f281d777284cea] = env->getMethodID(cls, "setM0", "(D)V");
                mids$[mid_setOmega0_10f281d777284cea] = env->getMethodID(cls, "setOmega0", "(D)V");
                mids$[mid_setOmegaDot_10f281d777284cea] = env->getMethodID(cls, "setOmegaDot", "(D)V");
                mids$[mid_setPRN_a3da1a935cb37f7b] = env->getMethodID(cls, "setPRN", "(I)V");
                mids$[mid_setPa_10f281d777284cea] = env->getMethodID(cls, "setPa", "(D)V");
                mids$[mid_setSma_10f281d777284cea] = env->getMethodID(cls, "setSma", "(D)V");
                mids$[mid_setTime_10f281d777284cea] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setWeek_a3da1a935cb37f7b] = env->getMethodID(cls, "setWeek", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CommonGnssData::CommonGnssData(jdouble a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}

            jdouble CommonGnssData::getAf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf0_557b8123390d8d0c]);
            }

            jdouble CommonGnssData::getAf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf1_557b8123390d8d0c]);
            }

            jdouble CommonGnssData::getAngularVelocity() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAngularVelocity_557b8123390d8d0c]);
            }

            jdouble CommonGnssData::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_557b8123390d8d0c]);
            }

            ::org::orekit::time::AbsoluteDate CommonGnssData::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
            }

            jdouble CommonGnssData::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
            }

            jdouble CommonGnssData::getI0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI0_557b8123390d8d0c]);
            }

            jdouble CommonGnssData::getM0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM0_557b8123390d8d0c]);
            }

            jdouble CommonGnssData::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
            }

            jdouble CommonGnssData::getOmega0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmega0_557b8123390d8d0c]);
            }

            jdouble CommonGnssData::getOmegaDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_557b8123390d8d0c]);
            }

            jint CommonGnssData::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_412668abc8d889e9]);
            }

            jdouble CommonGnssData::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_557b8123390d8d0c]);
            }

            jdouble CommonGnssData::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_557b8123390d8d0c]);
            }

            jdouble CommonGnssData::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
            }

            jint CommonGnssData::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_412668abc8d889e9]);
            }

            void CommonGnssData::setAf0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf0_10f281d777284cea], a0);
            }

            void CommonGnssData::setAf1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf1_10f281d777284cea], a0);
            }

            void CommonGnssData::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDate_20affcbd28542333], a0.this$);
            }

            void CommonGnssData::setE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setE_10f281d777284cea], a0);
            }

            void CommonGnssData::setI0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setI0_10f281d777284cea], a0);
            }

            void CommonGnssData::setM0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setM0_10f281d777284cea], a0);
            }

            void CommonGnssData::setOmega0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOmega0_10f281d777284cea], a0);
            }

            void CommonGnssData::setOmegaDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOmegaDot_10f281d777284cea], a0);
            }

            void CommonGnssData::setPRN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPRN_a3da1a935cb37f7b], a0);
            }

            void CommonGnssData::setPa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPa_10f281d777284cea], a0);
            }

            void CommonGnssData::setSma(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSma_10f281d777284cea], a0);
            }

            void CommonGnssData::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_10f281d777284cea], a0);
            }

            void CommonGnssData::setWeek(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setWeek_a3da1a935cb37f7b], a0);
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
            static PyObject *t_CommonGnssData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonGnssData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CommonGnssData_init_(t_CommonGnssData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CommonGnssData_getAf0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getAf1(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getAngularVelocity(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getCycleDuration(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getDate(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getE(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getI0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getM0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getMu(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getOmega0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getOmegaDot(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getPRN(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getPa(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getSma(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getTime(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getWeek(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_setAf0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setAf1(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setDate(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setE(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setI0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setM0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setOmega0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setOmegaDot(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setPRN(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setPa(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setSma(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setTime(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setWeek(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_get__af0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__af0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__af1(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__af1(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__angularVelocity(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__cycleDuration(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__date(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__date(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__e(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__e(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__i0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__i0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__m0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__m0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__mu(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__omega0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__omega0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__omegaDot(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__omegaDot(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__pRN(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__pRN(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__pa(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__pa(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__sma(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__sma(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__time(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__time(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__week(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__week(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyGetSetDef t_CommonGnssData__fields_[] = {
              DECLARE_GETSET_FIELD(t_CommonGnssData, af0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, af1),
              DECLARE_GET_FIELD(t_CommonGnssData, angularVelocity),
              DECLARE_GET_FIELD(t_CommonGnssData, cycleDuration),
              DECLARE_GETSET_FIELD(t_CommonGnssData, date),
              DECLARE_GETSET_FIELD(t_CommonGnssData, e),
              DECLARE_GETSET_FIELD(t_CommonGnssData, i0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, m0),
              DECLARE_GET_FIELD(t_CommonGnssData, mu),
              DECLARE_GETSET_FIELD(t_CommonGnssData, omega0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, omegaDot),
              DECLARE_GETSET_FIELD(t_CommonGnssData, pRN),
              DECLARE_GETSET_FIELD(t_CommonGnssData, pa),
              DECLARE_GETSET_FIELD(t_CommonGnssData, sma),
              DECLARE_GETSET_FIELD(t_CommonGnssData, time),
              DECLARE_GETSET_FIELD(t_CommonGnssData, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CommonGnssData__methods_[] = {
              DECLARE_METHOD(t_CommonGnssData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonGnssData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonGnssData, getAf0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getAf1, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getAngularVelocity, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getDate, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getE, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getI0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getM0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getMu, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getOmega0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getOmegaDot, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getPa, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getSma, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getTime, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, setAf0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setAf1, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setDate, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setE, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setI0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setM0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setOmega0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setOmegaDot, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setPRN, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setPa, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setSma, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setTime, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setWeek, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonGnssData)[] = {
              { Py_tp_methods, t_CommonGnssData__methods_ },
              { Py_tp_init, (void *) t_CommonGnssData_init_ },
              { Py_tp_getset, t_CommonGnssData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonGnssData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CommonGnssData, t_CommonGnssData, CommonGnssData);

            void t_CommonGnssData::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonGnssData), &PY_TYPE_DEF(CommonGnssData), module, "CommonGnssData", 0);
            }

            void t_CommonGnssData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "class_", make_descriptor(CommonGnssData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "wrapfn_", make_descriptor(t_CommonGnssData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CommonGnssData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonGnssData::initializeClass, 1)))
                return NULL;
              return t_CommonGnssData::wrap_Object(CommonGnssData(((t_CommonGnssData *) arg)->object.this$));
            }
            static PyObject *t_CommonGnssData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonGnssData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CommonGnssData_init_(t_CommonGnssData *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              CommonGnssData object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = CommonGnssData(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CommonGnssData_getAf0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getAf1(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getAngularVelocity(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getCycleDuration(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getDate(t_CommonGnssData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CommonGnssData_getE(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getI0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getM0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getMu(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getOmega0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmega0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getOmegaDot(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getPRN(t_CommonGnssData *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CommonGnssData_getPa(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getSma(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getTime(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getWeek(t_CommonGnssData *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CommonGnssData_setAf0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setAf1(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf1", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setDate(t_CommonGnssData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDate", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setE(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setE", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setI0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setI0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setI0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setM0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setM0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setM0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setOmega0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setOmega0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOmega0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setOmegaDot(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setOmegaDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOmegaDot", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setPRN(t_CommonGnssData *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setPRN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPRN", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setPa(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPa", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setSma(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSma(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSma", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setTime(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setWeek(t_CommonGnssData *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setWeek(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setWeek", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_get__af0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__af0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__af1(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__af1(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af1", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__angularVelocity(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__cycleDuration(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__date(t_CommonGnssData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CommonGnssData_set__date(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "date", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__e(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__e(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "e", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__i0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__i0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setI0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "i0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__m0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__m0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setM0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "m0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__mu(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__omega0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmega0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__omega0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setOmega0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "omega0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__omegaDot(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__omegaDot(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setOmegaDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "omegaDot", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__pRN(t_CommonGnssData *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }
            static int t_CommonGnssData_set__pRN(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setPRN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pRN", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__pa(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__pa(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pa", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__sma(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__sma(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSma(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sma", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__time(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__time(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__week(t_CommonGnssData *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }
            static int t_CommonGnssData_set__week(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setWeek(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "week", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeInterpolator.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeInterpolator::class$ = NULL;
      jmethodID *AttitudeInterpolator::mids$ = NULL;
      bool AttitudeInterpolator::live$ = false;

      jclass AttitudeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c36c97d7752fb40b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/TimeInterpolator;)V");
          mids$[mid_getAngularInterpolator_1bb20e7ea407bfce] = env->getMethodID(cls, "getAngularInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_getReferenceFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_78991927dd03b0da] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AttitudeInterpolator::AttitudeInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_c36c97d7752fb40b, a0.this$, a1.this$)) {}

      ::org::orekit::time::TimeInterpolator AttitudeInterpolator::getAngularInterpolator() const
      {
        return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getAngularInterpolator_1bb20e7ea407bfce]));
      }

      ::org::orekit::frames::Frame AttitudeInterpolator::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_6c9bc0a928c56d4e]));
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
      static PyObject *t_AttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeInterpolator_of_(t_AttitudeInterpolator *self, PyObject *args);
      static int t_AttitudeInterpolator_init_(t_AttitudeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AttitudeInterpolator_getAngularInterpolator(t_AttitudeInterpolator *self);
      static PyObject *t_AttitudeInterpolator_getReferenceFrame(t_AttitudeInterpolator *self);
      static PyObject *t_AttitudeInterpolator_get__angularInterpolator(t_AttitudeInterpolator *self, void *data);
      static PyObject *t_AttitudeInterpolator_get__referenceFrame(t_AttitudeInterpolator *self, void *data);
      static PyObject *t_AttitudeInterpolator_get__parameters_(t_AttitudeInterpolator *self, void *data);
      static PyGetSetDef t_AttitudeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AttitudeInterpolator, angularInterpolator),
        DECLARE_GET_FIELD(t_AttitudeInterpolator, referenceFrame),
        DECLARE_GET_FIELD(t_AttitudeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AttitudeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AttitudeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AttitudeInterpolator, getAngularInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_AttitudeInterpolator, getReferenceFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeInterpolator)[] = {
        { Py_tp_methods, t_AttitudeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AttitudeInterpolator_init_ },
        { Py_tp_getset, t_AttitudeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AttitudeInterpolator, t_AttitudeInterpolator, AttitudeInterpolator);
      PyObject *t_AttitudeInterpolator::wrap_Object(const AttitudeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AttitudeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AttitudeInterpolator *self = (t_AttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AttitudeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AttitudeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AttitudeInterpolator *self = (t_AttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AttitudeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeInterpolator), &PY_TYPE_DEF(AttitudeInterpolator), module, "AttitudeInterpolator", 0);
      }

      void t_AttitudeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "class_", make_descriptor(AttitudeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "wrapfn_", make_descriptor(t_AttitudeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AttitudeInterpolator::wrap_Object(AttitudeInterpolator(((t_AttitudeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeInterpolator_of_(t_AttitudeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AttitudeInterpolator_init_(t_AttitudeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
        PyTypeObject **p1;
        AttitudeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
        {
          INT_CALL(object = AttitudeInterpolator(a0, a1));
          self->object = object;
          self->parameters[0] = ::org::orekit::attitudes::PY_TYPE(Attitude);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AttitudeInterpolator_getAngularInterpolator(t_AttitudeInterpolator *self)
      {
        ::org::orekit::time::TimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
      }

      static PyObject *t_AttitudeInterpolator_getReferenceFrame(t_AttitudeInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_AttitudeInterpolator_get__parameters_(t_AttitudeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AttitudeInterpolator_get__angularInterpolator(t_AttitudeInterpolator *self, void *data)
      {
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_AttitudeInterpolator_get__referenceFrame(t_AttitudeInterpolator *self, void *data)
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
#include "org/hipparchus/analysis/function/Abs.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Abs::class$ = NULL;
        jmethodID *Abs::mids$ = NULL;
        bool Abs::live$ = false;

        jclass Abs::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Abs");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Abs::Abs() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Abs::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Abs::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_Abs_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Abs_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Abs_init_(t_Abs *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Abs_value(t_Abs *self, PyObject *args);

        static PyMethodDef t_Abs__methods_[] = {
          DECLARE_METHOD(t_Abs, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Abs, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Abs, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Abs)[] = {
          { Py_tp_methods, t_Abs__methods_ },
          { Py_tp_init, (void *) t_Abs_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Abs)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Abs, t_Abs, Abs);

        void t_Abs::install(PyObject *module)
        {
          installType(&PY_TYPE(Abs), &PY_TYPE_DEF(Abs), module, "Abs", 0);
        }

        void t_Abs::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "class_", make_descriptor(Abs::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "wrapfn_", make_descriptor(t_Abs::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Abs_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Abs::initializeClass, 1)))
            return NULL;
          return t_Abs::wrap_Object(Abs(((t_Abs *) arg)->object.this$));
        }
        static PyObject *t_Abs_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Abs::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Abs_init_(t_Abs *self, PyObject *args, PyObject *kwds)
        {
          Abs object((jobject) NULL);

          INT_CALL(object = Abs());
          self->object = object;

          return 0;
        }

        static PyObject *t_Abs_value(t_Abs *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/modifiers/ModifierGradientConverter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ModifierGradientConverter::class$ = NULL;
          jmethodID *ModifierGradientConverter::mids$ = NULL;
          bool ModifierGradientConverter::live$ = false;

          jclass ModifierGradientConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ModifierGradientConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4cdc8ad3728ad5da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/attitudes/AttitudeProvider;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifierGradientConverter::ModifierGradientConverter(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::AbstractGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_4cdc8ad3728ad5da, a0.this$, a1, a2.this$)) {}
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
        namespace modifiers {
          static PyObject *t_ModifierGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifierGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifierGradientConverter_init_(t_ModifierGradientConverter *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_ModifierGradientConverter__methods_[] = {
            DECLARE_METHOD(t_ModifierGradientConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifierGradientConverter, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifierGradientConverter)[] = {
            { Py_tp_methods, t_ModifierGradientConverter__methods_ },
            { Py_tp_init, (void *) t_ModifierGradientConverter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifierGradientConverter)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
            NULL
          };

          DEFINE_TYPE(ModifierGradientConverter, t_ModifierGradientConverter, ModifierGradientConverter);

          void t_ModifierGradientConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifierGradientConverter), &PY_TYPE_DEF(ModifierGradientConverter), module, "ModifierGradientConverter", 0);
          }

          void t_ModifierGradientConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "class_", make_descriptor(ModifierGradientConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "wrapfn_", make_descriptor(t_ModifierGradientConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifierGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifierGradientConverter::initializeClass, 1)))
              return NULL;
            return t_ModifierGradientConverter::wrap_Object(ModifierGradientConverter(((t_ModifierGradientConverter *) arg)->object.this$));
          }
          static PyObject *t_ModifierGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifierGradientConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifierGradientConverter_init_(t_ModifierGradientConverter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jint a1;
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            ModifierGradientConverter object((jobject) NULL);

            if (!parseArgs(args, "kIk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ModifierGradientConverter(a0, a1, a2));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDetermination::class$ = NULL;
              jmethodID *AttitudeDetermination::mids$ = NULL;
              bool AttitudeDetermination::live$ = false;

              jclass AttitudeDetermination::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addSensor_d19ab97a0ba117d7] = env->getMethodID(cls, "addSensor", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor;)V");
                  mids$[mid_getAttitudeStates_5db4fed82a3253b8] = env->getMethodID(cls, "getAttitudeStates", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getCovarianceType_270107b6f5cd254c] = env->getMethodID(cls, "getCovarianceType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_getEndpoints_c66f753ddee38944] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_cd8353278e08930b] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMethod_da536d3d7c70db0c] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/files/ccsds/definitions/AdMethodType;");
                  mids$[mid_getNbStates_412668abc8d889e9] = env->getMethodID(cls, "getNbStates", "()I");
                  mids$[mid_getPrevId_3cffd47377eca18a] = env->getMethodID(cls, "getPrevId", "()Ljava/lang/String;");
                  mids$[mid_getRateProcessNoiseStdDev_557b8123390d8d0c] = env->getMethodID(cls, "getRateProcessNoiseStdDev", "()D");
                  mids$[mid_getRateStates_232ed199566358d9] = env->getMethodID(cls, "getRateStates", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_getSensorsUsed_0d9551367f7ecdef] = env->getMethodID(cls, "getSensorsUsed", "()Ljava/util/List;");
                  mids$[mid_getSigmaU_557b8123390d8d0c] = env->getMethodID(cls, "getSigmaU", "()D");
                  mids$[mid_getSigmaV_557b8123390d8d0c] = env->getMethodID(cls, "getSigmaV", "()D");
                  mids$[mid_getSource_3cffd47377eca18a] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                  mids$[mid_setAttitudeStates_a785d3c67d2cf110] = env->getMethodID(cls, "setAttitudeStates", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;)V");
                  mids$[mid_setCovarianceType_424aa6ac7cc5c170] = env->getMethodID(cls, "setCovarianceType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;)V");
                  mids$[mid_setEulerRotSeq_8b9f97be929dfd52] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setId_f5ffdf29129ef90a] = env->getMethodID(cls, "setId", "(Ljava/lang/String;)V");
                  mids$[mid_setMethod_7100c7873fbfaf4d] = env->getMethodID(cls, "setMethod", "(Lorg/orekit/files/ccsds/definitions/AdMethodType;)V");
                  mids$[mid_setNbStates_a3da1a935cb37f7b] = env->getMethodID(cls, "setNbStates", "(I)V");
                  mids$[mid_setPrevId_f5ffdf29129ef90a] = env->getMethodID(cls, "setPrevId", "(Ljava/lang/String;)V");
                  mids$[mid_setRateProcessNoiseStdDev_10f281d777284cea] = env->getMethodID(cls, "setRateProcessNoiseStdDev", "(D)V");
                  mids$[mid_setRateStates_2a73a81936748923] = env->getMethodID(cls, "setRateStates", "(Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;)V");
                  mids$[mid_setSigmaU_10f281d777284cea] = env->getMethodID(cls, "setSigmaU", "(D)V");
                  mids$[mid_setSigmaV_10f281d777284cea] = env->getMethodID(cls, "setSigmaV", "(D)V");
                  mids$[mid_setSource_f5ffdf29129ef90a] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeDetermination::AttitudeDetermination() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              void AttitudeDetermination::addSensor(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addSensor_d19ab97a0ba117d7], a0.this$);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeDetermination::getAttitudeStates() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeStates_5db4fed82a3253b8]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeDetermination::getCovarianceType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getCovarianceType_270107b6f5cd254c]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AttitudeDetermination::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c66f753ddee38944]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AttitudeDetermination::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_cd8353278e08930b]));
              }

              ::java::lang::String AttitudeDetermination::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
              }

              ::org::orekit::files::ccsds::definitions::AdMethodType AttitudeDetermination::getMethod() const
              {
                return ::org::orekit::files::ccsds::definitions::AdMethodType(env->callObjectMethod(this$, mids$[mid_getMethod_da536d3d7c70db0c]));
              }

              jint AttitudeDetermination::getNbStates() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbStates_412668abc8d889e9]);
              }

              ::java::lang::String AttitudeDetermination::getPrevId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevId_3cffd47377eca18a]));
              }

              jdouble AttitudeDetermination::getRateProcessNoiseStdDev() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRateProcessNoiseStdDev_557b8123390d8d0c]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeDetermination::getRateStates() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateStates_232ed199566358d9]));
              }

              ::java::util::List AttitudeDetermination::getSensorsUsed() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSensorsUsed_0d9551367f7ecdef]));
              }

              jdouble AttitudeDetermination::getSigmaU() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSigmaU_557b8123390d8d0c]);
              }

              jdouble AttitudeDetermination::getSigmaV() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSigmaV_557b8123390d8d0c]);
              }

              ::java::lang::String AttitudeDetermination::getSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_3cffd47377eca18a]));
              }

              void AttitudeDetermination::setAttitudeStates(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeStates_a785d3c67d2cf110], a0.this$);
              }

              void AttitudeDetermination::setCovarianceType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovarianceType_424aa6ac7cc5c170], a0.this$);
              }

              void AttitudeDetermination::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_8b9f97be929dfd52], a0.this$);
              }

              void AttitudeDetermination::setId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setId_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeDetermination::setMethod(const ::org::orekit::files::ccsds::definitions::AdMethodType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMethod_7100c7873fbfaf4d], a0.this$);
              }

              void AttitudeDetermination::setNbStates(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbStates_a3da1a935cb37f7b], a0);
              }

              void AttitudeDetermination::setPrevId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevId_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeDetermination::setRateProcessNoiseStdDev(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateProcessNoiseStdDev_10f281d777284cea], a0);
              }

              void AttitudeDetermination::setRateStates(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateStates_2a73a81936748923], a0.this$);
              }

              void AttitudeDetermination::setSigmaU(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSigmaU_10f281d777284cea], a0);
              }

              void AttitudeDetermination::setSigmaV(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSigmaV_10f281d777284cea], a0);
              }

              void AttitudeDetermination::setSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSource_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeDetermination::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
            namespace acm {
              static PyObject *t_AttitudeDetermination_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDetermination_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeDetermination_init_(t_AttitudeDetermination *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeDetermination_addSensor(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_getAttitudeStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getCovarianceType(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getEndpoints(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getEulerRotSeq(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getId(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getMethod(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getNbStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getPrevId(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getRateProcessNoiseStdDev(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getRateStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSensorsUsed(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSigmaU(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSigmaV(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSource(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_setAttitudeStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setCovarianceType(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setEulerRotSeq(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setId(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setMethod(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setNbStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setPrevId(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setRateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setRateStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSigmaU(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSigmaV(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSource(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_validate(t_AttitudeDetermination *self, PyObject *args);
              static PyObject *t_AttitudeDetermination_get__attitudeStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__attitudeStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__covarianceType(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__covarianceType(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__endpoints(t_AttitudeDetermination *self, void *data);
              static PyObject *t_AttitudeDetermination_get__eulerRotSeq(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__eulerRotSeq(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__id(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__id(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__method(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__method(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__nbStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__nbStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__prevId(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__prevId(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__rateProcessNoiseStdDev(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__rateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__rateStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__rateStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__sensorsUsed(t_AttitudeDetermination *self, void *data);
              static PyObject *t_AttitudeDetermination_get__sigmaU(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__sigmaU(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__sigmaV(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__sigmaV(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__source(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__source(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeDetermination__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, attitudeStates),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, covarianceType),
                DECLARE_GET_FIELD(t_AttitudeDetermination, endpoints),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, eulerRotSeq),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, id),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, method),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, nbStates),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, prevId),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, rateProcessNoiseStdDev),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, rateStates),
                DECLARE_GET_FIELD(t_AttitudeDetermination, sensorsUsed),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, sigmaU),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, sigmaV),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, source),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDetermination__methods_[] = {
                DECLARE_METHOD(t_AttitudeDetermination, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDetermination, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDetermination, addSensor, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, getAttitudeStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getCovarianceType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getId, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getNbStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getPrevId, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getRateProcessNoiseStdDev, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getRateStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSensorsUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSigmaU, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSigmaV, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSource, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, setAttitudeStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setCovarianceType, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setId, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setMethod, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setNbStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setPrevId, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setRateProcessNoiseStdDev, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setRateStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSigmaU, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSigmaV, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSource, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDetermination)[] = {
                { Py_tp_methods, t_AttitudeDetermination__methods_ },
                { Py_tp_init, (void *) t_AttitudeDetermination_init_ },
                { Py_tp_getset, t_AttitudeDetermination__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDetermination)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeDetermination, t_AttitudeDetermination, AttitudeDetermination);

              void t_AttitudeDetermination::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDetermination), &PY_TYPE_DEF(AttitudeDetermination), module, "AttitudeDetermination", 0);
              }

              void t_AttitudeDetermination::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "class_", make_descriptor(AttitudeDetermination::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "wrapfn_", make_descriptor(t_AttitudeDetermination::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeDetermination_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDetermination::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDetermination::wrap_Object(AttitudeDetermination(((t_AttitudeDetermination *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDetermination_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDetermination::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeDetermination_init_(t_AttitudeDetermination *self, PyObject *args, PyObject *kwds)
              {
                AttitudeDetermination object((jobject) NULL);

                INT_CALL(object = AttitudeDetermination());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeDetermination_addSensor(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addSensor(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addSensor", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_getAttitudeStates(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getCovarianceType(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getEndpoints(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getEulerRotSeq(t_AttitudeDetermination *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getId(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_getMethod(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_AdMethodType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getNbStates(t_AttitudeDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbStates());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeDetermination_getPrevId(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevId());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_getRateProcessNoiseStdDev(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRateProcessNoiseStdDev());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getRateStates(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getSensorsUsed(t_AttitudeDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensorsUsed());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeDeterminationSensor));
              }

              static PyObject *t_AttitudeDetermination_getSigmaU(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSigmaU());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getSigmaV(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSigmaV());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getSource(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSource());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_setAttitudeStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setCovarianceType(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_))
                {
                  OBJ_CALL(self->object.setCovarianceType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovarianceType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setEulerRotSeq(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setId(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setId", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setMethod(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::AdMethodType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_AdMethodType::parameters_))
                {
                  OBJ_CALL(self->object.setMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMethod", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setNbStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNbStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNbStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setPrevId(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevId", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setRateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRateProcessNoiseStdDev(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateProcessNoiseStdDev", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setRateStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setRateStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSigmaU(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSigmaU(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSigmaU", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSigmaV(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSigmaV(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSigmaV", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSource(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSource", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_validate(t_AttitudeDetermination *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeDetermination), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeDetermination_get__attitudeStates(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__attitudeStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__covarianceType(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__covarianceType(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovarianceType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covarianceType", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__endpoints(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AttitudeDetermination_get__eulerRotSeq(t_AttitudeDetermination *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__eulerRotSeq(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__id(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__id(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "id", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__method(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_AdMethodType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__method(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::AdMethodType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::AdMethodType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "method", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__nbStates(t_AttitudeDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbStates());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeDetermination_set__nbStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNbStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nbStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__prevId(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevId());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__prevId(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevId", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__rateProcessNoiseStdDev(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRateProcessNoiseStdDev());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__rateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRateProcessNoiseStdDev(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateProcessNoiseStdDev", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__rateStates(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__rateStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setRateStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__sensorsUsed(t_AttitudeDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensorsUsed());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeDetermination_get__sigmaU(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSigmaU());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__sigmaU(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSigmaU(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sigmaU", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__sigmaV(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSigmaV());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__sigmaV(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSigmaV(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sigmaV", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__source(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSource());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__source(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "source", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
